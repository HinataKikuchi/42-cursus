/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 18:51:27 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/05/04 16:45:14 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void		safe_free(void *p)
{
	free(p);
	p = NULL;
}

void		free_struct(t_cub *cub)
{
	safe_free(cub->NO);
	safe_free(cub->SO);
	safe_free(cub->WE);
	safe_free(cub->EA);
	safe_free(cub->Sprite);
	cub->map_row--;
	while ((cub->map_row) >= 0)
		safe_free(cub->map[cub->map_row--]);
}

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

void	verLine(t_pos *pos,/*t_data *data,*/ int x, int y1, int y2, int color)
{
	while (y1 <= y2)
	{
		// my_mlx_pixel_put(&pos->img, x, y1, color);
		mlx_pixel_put(pos->vars.mlx, pos->vars.win, x, y1, color);
		y1++;
	}
}

void	draw_img(t_pos *pos)
{
	for (int y = 0; y < pos->cub.R_y; y++)
	{
		for (int x = 0; x < pos->cub.R_x; x++)
		{
			pos->img.val[y * pos->cub.R_x + x] = pos->cub.buf[y][x];
		}
	}
	mlx_put_image_to_window(pos->vars.mlx, pos->vars.win, pos->img.img, 0, 0);
}

void	load_img(t_pos *pos, int *texture, char *path, t_data *img)
{
	img->img = mlx_xpm_file_to_image(pos->vars.mlx, path, &img->img_width, &img->img_height);
	img->val = (int *)mlx_get_data_addr(img->img, &img->bits_per_pixel, &img->line_length, &img->endian);
	for (int y = 0; y < img->img_height; y++)
	{
		for (int x = 0; x < img->img_width; x++)
		{
			texture[img->img_width * y + x] = img->val[img->img_width * y + x];
		}
	}
	mlx_destroy_image(pos->vars.mlx, img->img);
}

void	load_tex(t_pos *pos)
{
	t_data	img;
	load_img(pos, pos->cub.texture[0], pos->cub.SO, &img);
	load_img(pos, pos->cub.texture[1], pos->cub.NO, &img);
	load_img(pos, pos->cub.texture[2], pos->cub.Sprite, &img);
}