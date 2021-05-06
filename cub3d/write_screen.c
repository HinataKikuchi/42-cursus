#include "cub3d.h"
#include "libft/ft_isdigit.c"
#include "libft/ft_substr.c"
#include "libft/ft_strlen.c"
#include "libft/ft_calloc.c"
#include "libft/ft_atoi.c"
#include "libft/ft_bzero.c"
#include "libft/ft_strnstr.c"
#include "libft/ft_strchr.c"
#include "libft/ft_strdup.c"

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
		return (n * (-1));
	return (n);
}

void	write_page(t_pos *pos)
{
	int i;
	// t_data data;

	i = 0;

	while (pos->cub.R_x > i)
	{
		double cameraX = 2 * i / (double)pos->cub.R_x - 1;
		double rayDirX = pos->dirX + pos->planeX * cameraX;
		double rayDirY = pos->dirY + pos->planeY * cameraX;
		int mapX = (int)pos->posX;
		int mapY = (int)pos->posY;
		double sideDistX;
		double sideDistY;
		double deltaDistX = cub_abs(1 / rayDirX);
		double deltaDistY = cub_abs(1 / rayDirY);
		double perpWallDist;

		int stepX;
		int stepY;
		int hit = 0;
		int side;
		if (rayDirX < 0)
		{
			stepX = -1;
			sideDistX = (pos->posX - mapX) * deltaDistX;
		}
		else
		{
			stepX = 1;
			sideDistX = (mapX + 1.0 - pos->posX) * deltaDistX;
		}
		if (rayDirY < 0)
		{
			stepY = -1;
			sideDistY = (pos->posY - mapY) * deltaDistY;
		}
		else
		{
			stepY = 1;
			sideDistY = (mapY + 1. - pos->posY) * deltaDistY;
		}

		while (hit == 0)
		{
			if (sideDistX < sideDistY)
			{
				sideDistX += deltaDistX;
				mapX += stepX;
				side = 0;
			}
			else
			{
				sideDistY += deltaDistY;
				mapY += stepY;
				side = 1;
			}
			if (pos->cub.map[mapX][mapY] > '0')
				hit = 1;
		}
		if (side == 0)
			perpWallDist = (mapX - pos->posX + (1 - stepX) / 2) / rayDirX;
		else
			perpWallDist = (mapY - pos->posY + (1 - stepY) / 2) / rayDirY;

		int lineHeight = (int)(pos->cub.R_y / perpWallDist);

		int drawStart = -lineHeight / 2 + pos->cub.R_y / 2;
		if (drawStart < 0)
			drawStart = 0;
		int drawEnd = lineHeight / 2 + pos->cub.R_y / 2;
		if (drawEnd >= pos->cub.R_y)
			drawEnd = pos->cub.R_y - 1;

		int color;
		if (pos->cub.map[mapY][mapX] == '1')
			color = create_trgb(0, pos->cub.C[0], pos->cub.C[1], pos->cub.C[2]);
		else
			color = create_trgb(0, pos->cub.F[0], pos->cub.F[1], pos->cub.F[2]);
		if (side == 1)
			color = color / 2;
		verLine(pos, /*&data,*/i, drawStart, drawEnd, color);
		i++;
	}

}

int	main_loop(t_pos *pos)
{
	write_page(pos);
	// mlx_put_image_to_window(info->mlx, info->win, &info->img, 0, 0);
	return (0);
}

int		key_press(int key_code, t_pos *pos)
{
	if (key_code == UP || key_code == W)
	{
		if (pos->cub.map[(int)(pos->posX + pos->dirX * pos->moveSpeed)][(int)pos->posY] == '0')
			pos->posX += pos->dirX * pos->moveSpeed;
		if (pos->cub.map[(int)pos->posX][(int)(pos->posY + pos->dirY * pos->moveSpeed)] == '0')
			pos->posY += pos->dirY * pos->moveSpeed;
	}
	if (key_code == DOWN || key_code == S)
	{
		if (pos->cub.map[(int)(pos->posX - pos->dirX * pos->moveSpeed)][(int)(pos->posY)] == '0')
			pos->posX -= pos->dirX * pos->moveSpeed;
		if (pos->cub.map[(int)(pos->posX - pos->dirX * pos->moveSpeed)][(int)(pos->posY)] == '0')
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
	get_cub_value("./test_maps/test2.cub", &pos.cub);
	printf("R_x = %d, R_y = %d\n",pos.cub.R_x,pos.cub.R_y);

	pos.posX = 12;
	pos.posY = 5;
	pos.dirX = -1;
	pos.dirY = 0;
	pos.planeX = 0;
	pos.planeY = 0.66;
	pos.moveSpeed = 0.005;
	pos.rotSpeed = 0.005;

	pos.vars.win = mlx_new_window(pos.vars.mlx, pos.cub.R_x, pos.cub.R_y, "mlx");
	pos.img.img = mlx_new_image(pos.vars.mlx, pos.cub.R_y, pos.cub.R_x);
	pos.img.addr = mlx_get_data_addr(pos.img.img, &pos.img.bits_per_pixel, &pos.img.line_length, &pos.img.endian);
	mlx_hook(pos.vars.win, 33, 1L<<17, &x_button, &pos.vars);
	mlx_hook(pos.vars.win, 2, 1L<<0, &key_hook, &pos.vars);
	mlx_hook(pos.vars.win,2, 1L<<0, &key_press, &pos);
	mlx_loop_hook(pos.vars.mlx, &main_loop, &pos);
	mlx_put_image_to_window(pos.vars.mlx, pos.vars.win, pos.img.img, 0, 0);
	// mlx_clear_window(pos.vars.mlx, pos.vars.win);
	mlx_loop(pos.vars.mlx);
}