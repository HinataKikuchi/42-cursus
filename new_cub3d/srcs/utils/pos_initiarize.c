#include "../../include/cub3d.h"

static void	load_image(t_pos *pos, int *texture, char *path, t_data *img)
{
	int i;
	int j;

	i = 0;
	j = 0;
	img->img = mlx_xpm_file_to_image(pos->vars.mlx, path, &img->img_width, &img->img_height);
	img->val = (int *)mlx_get_data_addr(img->img, &img->bits_per_pixel, &img->line_length, &img->endian);
	while (i < img->img_height)
	{
		while(j < img->img_width)
		{
			texture[img->img_width * i + j] = img->val[img->img_width * i + j];
			j++;
		}
		j = 0;
		i++;
	}
}

static void	load_texture(t_pos *pos)
{
	t_data	data;

	load_image(pos, pos->cub.texture[0], pos->cub.NO, &data);
	load_image(pos, pos->cub.texture[1], pos->cub.SO, &data);
	load_image(pos, pos->cub.texture[2], pos->cub.EA, &data);
	load_image(pos, pos->cub.texture[2], pos->cub.WE, &data);
}

void	pos_set_value(t_pos *pos)
{
	pos->posX = pos->cub.position[0];
	pos->posY = pos->cub.position[1];
	pos->dirX = -1.0;
	pos->dirY = 0.0;
	pos->planeX = 0.0;
	pos->planeY = 0.66;
	pos->moveSpeed = 0.05;
	pos->rotSpeed = 0.05;
}

void	pos_initialize(t_pos *pos)
{
	int	i;

	i = 0;
	pos->cub.buf = ft_calloc(sizeof(int *), pos->cub.R_x);
	if (!pos->cub.buf)
		free_cub_exit(MALLOC_ERROR, "MALLOC_ERROR", &pos->cub);
	while (i < pos->cub.R_y)
	{
		pos->cub.buf[i] = ft_calloc(sizeof(int *), pos->cub.R_y);
		if (!pos->cub.buf[i])
			free_cub_exit(MALLOC_ERROR, "MALLOC_ERROR", &pos->cub);
		i++;
	}
	i = 0;
	pos->cub.texture = ft_calloc(4, sizeof(int *));
	if(!pos->cub.texture)
		free_pos_exit(POS_TEX_MALLOC_ERROR, "POS_TEXTURE_MALLOC_ERROR", pos);
	while (i < texNUM)
	{
		pos->cub.texture[i] = (int *)ft_calloc((texWidth * texHeight), sizeof(int));
		if(!pos->cub.texture[i])
			free_pos_exit(POS_TEX_MALLOC_ERROR, "POS_TEXTURE_MALLOC_ERROR", pos);
		i++;
	}
	pos_set_value(pos);
	load_texture(pos);
	pos->img.img = mlx_new_image(pos->vars.mlx, pos->cub.R_x, pos->cub.R_y);
	pos->img.val = (int *)mlx_get_data_addr(pos->img.img, &pos->img.bits_per_pixel, &pos->img.line_length, &pos->img.endian);
}