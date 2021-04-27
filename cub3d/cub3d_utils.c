/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 18:51:27 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/04/27 22:45:13 by hkikuchi         ###   ########.fr       */
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
	// my_mlx_pixel_put(&img, 5, 5, 0x00FF0000);
    // mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	// data->img = mlx_new_image(pos->vars.mlx, pos->cub.R_x, pos->cub.R_y);
	// data->addr = mlx_get_data_addr(data->img, &data->bits_per_pixel, &data->line_length, &data->endian);
	while (y1 <= y2)
	{
		// my_mlx_pixel_put(data, x, y1, color);
		mlx_pixel_put(&pos->vars.mlx, &pos->vars.win, x, y1, color);
		y1++;
	}
}
