#include "cub3d.h"
#include "libft/ft_isdigit.c"
#include "libft/ft_substr.c"
#include "libft/ft_strlen.c"
#include "libft/ft_calloc.c"
#include "libft/ft_atoi.c"
#include "libft/ft_bzero.c"
#include "libft/ft_strchr.c"
#include "libft/ft_strdup.c"
#include "libft/ft_strnstr.c"
#include "gnl/get_next_line.c"
#include "gnl/get_next_line_utils.c"

void	get_screen_size(t_cub *cub, t_win win)
{
	if (cub->R_x > win.size_x || (cub->R_x < 1))
		cub->R_x = win.size_x;
	if (cub->R_y > win.size_y || (cub->R_y < 1))
		cub->R_y = win.size_y;
}

int	key_hook(int keycode, t_vars *vars)
{
	if (keycode == ESC)
	{
		mlx_destroy_window(vars->mlx, vars->win);
		exit(0);
	}
}

int	x_button(t_vars *vars)
{
	mlx_destroy_window(vars->mlx, vars->win);
	exit(0);
}

double	cub_abs(double n)
{
	if (n < 0)
		return (-n);
	return (n);
}

// void	write_page(t_pos *pos)
// {
// 	int i;
// 	int hit;
// 	t_map	map;
// 	int side;
// 	int	tex_n;

// 	i = 0;
// 	while (i < pos->cub.R_x)
// 	{
// 		map = initial_map_data(*pos, i);
// 		hit = 0;
// 		set_step(&map, *pos);
// 		while (hit == 0)
// 			hit = get_hit(&map, *pos, &side);

// 		judge_side(&map, *pos, side);

// 		get_drawStart_drawEnd(&map, *pos);

// 	if (map.mapX > pos->cub.map_col || map.mapY > pos->cub.map_row || map.mapY<0 || map.mapX < 0)
// 	{
// 		printf("%d, %d\n",map.mapX, map.mapY);
// 		fflush(stdout);
// 	}
// 		tex_n = (unsigned char)pos->cub.map[map.mapY][map.mapY] - '0';
// 		get_texX(&map, *pos, side);
// 		write_texture(&map, pos, i, tex_n, side);
// 		i++;
// 	}
// 	printf("mapX = %d, mapY = %d\n", map.mapX, map.mapY);
// 	fflush(stdout);
// }

void	write_page(t_pos *pos)
{
	int i;

	i = 0;
	t_map map;
	while (i < pos->cub.R_x)
	{
		map = initial_map_data(*pos, i);

		// if (map.rayDirX)
		// 	map.deltaDistX = cub_abs(1 / map.rayDirX);
		// else
		// 	map.deltaDistX = 1;
		// if (map.rayDirY)
		// 	map.deltaDistY = cub_abs(1 / map.rayDirY);
		// else
		// 	map.deltaDistY = 1;

		double perpWallDist;

		// int stepX;
		// int stepY;
		int hit = 0;
		int side;
		set_step(&map, *pos);
		// if (map.rayDirX < 0)
		// {
		// 	stepX = -1;
		// 	map.sideDistX = (pos->posX - map.mapX) * map.deltaDistX;
		// }
		// else
		// {
		// 	stepX = 1;
		// 	map.sideDistX = (map.mapX + 1.0 - pos->posX) * map.deltaDistX;
		// }
		// if (map.rayDirY < 0)
		// {
		// 	stepY = -1;
		// 	map.sideDistY = (pos->posY - map.mapX) * map.deltaDistY;
		// }
		// else
		// {
		// 	stepY = 1;
		// 	map.sideDistY = (map.mapX + 1. - pos->posY) * map.deltaDistY;
		// }
		while (hit == 0)
		{
			if (map.sideDistX < map.sideDistY)
			{
				map.sideDistX += map.deltaDistX;
				map.mapX += map.stepX;
				side = 0;
			}
			else
			{
				map.sideDistY += map.deltaDistY;
				map.mapX += map.stepY;
				side = 1;
			}
			if (pos->cub.map[map.mapX][map.mapX] == '1')
				hit = 1;
		}
		if (side == 0)
		{
			if (map.rayDirX!=0)
				perpWallDist = (map.mapX - pos->posX + (1 - map.stepX) / 2) / map.rayDirX;
			else
				perpWallDist = (map.mapX - pos->posX + (1 - map.stepX) / 2) / 0.001;
		}
		else
		{
			if (map.rayDirY !=0)
				perpWallDist = (map.mapX - pos->posY + (1 - map.stepY) / 2) / map.rayDirY;
			else
				perpWallDist = (map.mapX - pos->posY + (1 - map.stepY) / 2) / 0.001;
		}
		// if (perpWallDist<=0)
		// {
		// printf("perpWallDist <= 0\n");
		// fflush(stdout);
		// }
		int lineHeight = (perpWallDist > 0.05) ? (int)(pos->cub.R_y / perpWallDist) : 0;

		int drawStart = -lineHeight / 2 + pos->cub.R_y / 2;
		if (drawStart < 0)
			drawStart = 0;
		int drawEnd = lineHeight / 2 + pos->cub.R_y / 2;
		if (drawEnd >= pos->cub.R_y)
			drawEnd = pos->cub.R_y - 1;
		int tex_n = (unsigned char)pos->cub.map[map.mapX][map.mapX] - '0';

		// calculate value of wallX
		double wallX;
		if (side == 0)
			wallX = pos->posY + perpWallDist * map.rayDirY;
		else
			wallX = pos->posX + perpWallDist * map.rayDirX;
		wallX -= floor(wallX);

		// x coordinate on the texture
		int texX = (int)(wallX * (double)texWidth);
		if (side == 0 && map.rayDirX > 0)
			texX = texWidth - texX - 1;
		if (side == 1 && map.rayDirY < 0)
			texX = texWidth - texX - 1;

		// How much to increase the texture coordinate perscreen pixel
		double step = 1.0 * texHeight / lineHeight;
		// Starting texture coordinate
		double texPos = (drawStart - pos->cub.R_x / 2 + lineHeight / 2) * step;
		int y = 0;
		while (y < drawStart && y < pos->cub.R_y)
		{
			pos->cub.buf[y][i] = create_trgb(0,pos->cub.C[0],pos->cub.C[1],pos->cub.C[2]);
			y++;
		}
		while(drawStart < drawEnd && drawStart < pos->cub.R_y)
		{
			int texY = (int)texPos & (texHeight - 1);
			texPos += step;
			int color;
			color = pos->cub.texture[tex_n][texHeight * texY + texX];
			// make color darker for y-sides: R, G and B byte each divided through two with a "shift" and an "and"
			if (side == 1)
				color = (color >> 1) & 8355711;
			pos->cub.buf[drawStart][i] = color;
			drawStart++;
		}
		y = drawEnd;
		// if (y < 0)
		// {
		// 	printf("drawEnd=%d\n",y);
		// 	fflush(stdout);
		// }
		while (y < pos->cub.R_y && y>=0)
		{
			pos->cub.buf[y][i] = create_trgb(0, pos->cub.F[0], pos->cub.F[1], pos->cub.F[2]);
			y++;
		}
		i++;
	}
}

int	main_loop(t_pos *pos)
{
	write_page(pos);
	draw_img(pos);
	return (0);
}

int		key_press(int key_code, t_pos *pos)
{
	if (key_code == UP || key_code == W)
	{
		// if (pos->posX < pos->cub.map_row && pos->posY < 11 /*pos->cub.map_col*/)
		// {
			if (pos->cub.map[(int)(pos->posX + pos->dirX * pos->moveSpeed)][(int)pos->posY] == '0')
				pos->posX += pos->dirX * pos->moveSpeed;
			if (pos->cub.map[(int)pos->posX][(int)(pos->posY + pos->dirY * pos->moveSpeed)] == '0')
				pos->posY += pos->dirY * pos->moveSpeed;
		// }
	}
	if (key_code == DOWN || key_code == S)
	{
		if (pos->cub.map[(int)(pos->posX - pos->dirX * pos->moveSpeed)][(int)(pos->posY)] == '0')
			pos->posX -= pos->dirX * pos->moveSpeed;
		if (pos->cub.map[(int)pos->posX][(int)(pos->posX - pos->dirX * pos->moveSpeed)] == '0')
			pos->posY -= pos->dirY * pos->moveSpeed;
	}
	if (key_code == RIGHT || key_code == D)
	{
		double oldDirX = pos->dirX;
		double oldplaneX = pos->planeX;
		/*Rotate matrix*/
		pos->dirX = pos->dirX * cos(-pos->rotSpeed) - pos->dirY * sin(-pos->rotSpeed);
		pos->dirY = oldDirX * sin(-pos->rotSpeed) + pos->dirY * cos(-pos->rotSpeed);
		pos->planeX = pos->planeX * cos(-pos->rotSpeed) - pos->planeY * sin(-pos->rotSpeed);
		pos->planeX = oldplaneX * sin(-pos->rotSpeed) + pos->planeY *cos(-pos->rotSpeed);
	}
	if (key_code == LEFT || key_code == A)
	{
		double oldDirX = pos->dirX;
		double oldplaneX = pos->planeX;
		pos->dirX = pos->dirX * cos(pos->rotSpeed) - pos->dirY * sin(pos->rotSpeed);
		pos->dirY = oldDirX * sin(pos->rotSpeed) + pos->dirY * cos(pos->rotSpeed);
		pos->planeX = pos->planeX * cos(pos->rotSpeed) - pos->planeY * sin(pos->rotSpeed);
		pos->planeY = oldplaneX * sin(pos->rotSpeed) + pos->planeY * sin(pos->rotSpeed);
	}
	if (key_code == ESC)
		exit(0);
	return (0);
}

int main(void)
{
	t_pos pos;
	pos.vars.mlx = mlx_init();
	get_cub_value("./test_maps/test.cub", &pos.cub);
	printf("R_x = %d, R_y = %d\n",pos.cub.R_x,pos.cub.R_y);
	pos.posX = 5;
	pos.posY = 5;
	pos.dirX = 1;
	pos.dirY = 0;
	pos.planeX = 0;
	pos.planeY = 0.66;
	pos.moveSpeed = 0.05;
	pos.rotSpeed = 0.05;

	int i = 0;
	int j = 0;
	pos.cub.buf = malloc(sizeof(int*) * pos.cub.R_y);
	if (!pos.cub.buf)
		return (-1);
	while(i < pos.cub.R_y)
	{
		pos.cub.buf[i]=ft_calloc(sizeof(int), pos.cub.R_x);
		i++;
	}
	i = 0;
	j = 0;
	pos.cub.texture = malloc(sizeof(int *) * 3);
	if (!pos.cub.texture)
		return (-1);
	while (i < 3)
	{
		pos.cub.texture[i] = ft_calloc(sizeof(int),(texHeight * texWidth));
		if (!pos.cub.texture[i])
			return (-1);
		i++;
	}
	i = 0;
	load_tex(&pos);

	pos.vars.win = mlx_new_window(pos.vars.mlx, pos.cub.R_x, pos.cub.R_y, "mlx");

	pos.img.img=mlx_new_image(pos.vars.mlx, pos.cub.R_x, pos.cub.R_y);
	pos.img.val = (int*)mlx_get_data_addr(pos.img.img, &pos.img.bits_per_pixel, &pos.img.line_length, &pos.img.endian);

	mlx_loop_hook(pos.vars.mlx, &main_loop, &pos);
	mlx_hook(pos.vars.win, 33, 1L<<17, &x_button, &pos.vars);
	mlx_hook(pos.vars.win, 2, 1L<<0, &key_hook, &pos.vars);
	mlx_hook(pos.vars.win,2, 1L<<0, &key_press, &pos);
	mlx_loop(pos.vars.mlx);
}

