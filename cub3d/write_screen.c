#include "cub3d.h"

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
		mlx_destroy_window(vars->mlx, vars->win);
	exit(0);
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

void	verLine(t_vars *vars, int x, int y1, int y2, int color)
{
	while (y1 <= y2)
	{
		mlx_pixel_put(vars->mlx, vars->win, x, y1, color);
		y1++;
	}
}

void	write_page(t_vars *vars, t_cub *cub, t_pos *pos)
{
	/*Time*/
	double time;
	double oldTime;
	int i;

	time = 0;
	oldTime = 0;
	i = 0;
	vars->win = mlx_new_window(vars->mlx,600,600,"cub3d");
	while(1)
	{
		mlx_hook(vars->mlx, 33, 1L<<17, x_button, &vars);
		/*KEY_HOOK*/
		mlx_key_hook(vars->win, key_hook, &vars);
		while (cub->R_x > i)
		{
			double cameraX = 2 * i / (double)cub->R_x - 1;
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
				sideDistY = (pos->posY - mapY)*deltaDistY;
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
				if (cub->map[mapX][mapY] > '0') hit = 1;
			}
			if (side == 0)
				perpWallDist = (mapX - pos->posX + (1 - stepX) / 2) / rayDirX;
			else
				perpWallDist = (mapY - pos->posY + (1 - stepY) / 2) / rayDirY;

			int lineHeight = (int)(cub->R_y /perpWallDist);

			int drawStart = -lineHeight / 2 + cub->R_y / 2;
			if (drawStart < 0)
				drawStart = 0;
			int drawEnd = lineHeight / 2 + cub->R_y / 2;
			if (drawEnd >= cub->R_y)
				drawEnd = cub->R_y - 1;

			int color;
			if (cub->map[mapY][mapX] == '1')
				color = create_trgb(0,cub->C[0],cub->C[1],cub->C[2]);
			else
				color = create_trgb(0,cub->F[0],cub->F[1],cub->F[2]);

			if (side == 1)
				color /= 2;
			verLine(vars, i, drawStart, drawEnd, color);
			i++;
		}
	}
}

int	main_loop(t_vars *vars, t_cub *cub, t_pos *pos)
{
	write_page(vars, cub, pos);
	// mlx_put_image_to_window(info->mlx, info->win, &info->img, 0, 0);

	return (0);
}

int		key_press(int key_code, t_vars *vars, t_cub *cub, t_pos *pos)
{
	if (key_code == UP)
	{
		if (cub->map[(int)(pos->posX + pos->dirX * pos->moveSpeed)][(int)pos->posY] == '0')
			pos->posX += pos->dirX * pos->moveSpeed;
		if (cub->map[(int)pos->posX][(int)(pos->posY + pos->dirY * pos->moveSpeed)] == '0')
			pos->posY += pos->dirY * pos->moveSpeed;
	}
	if (key_code == DOWN)
	{
		if (cub->map[(int)(pos->posX - pos->dirX * pos->moveSpeed)][(int)(pos->posY)] == '0')
			pos->posX -= pos->dirX * pos->moveSpeed;
		if (cub->map[(int)(pos->posX - pos->dirX * pos->moveSpeed)][(int)(pos->posY)] == '0')
			pos->posY -= pos->dirY * pos->moveSpeed;
	}
	if (key_code == RIGHT)
	{
		double oldDirX = pos->dirX;
		double oldplaneX = pos->planeX;
		/*Rotate matrix*/
		pos->dirX = pos->dirX * cos(-pos->rotSpeed) - pos->dirY * sin(-pos->rotSpeed);
		pos->dirY = oldDirX * sin(-pos->rotSpeed) + pos->dirY * cos(-pos->rotSpeed);
		pos->planeX = pos->planeX * cos(-pos->rotSpeed) - pos->planeY * sin(-pos->rotSpeed);
		pos->planeX = oldplaneX * sin(-pos->rotSpeed) + pos->planeY *cos(-pos->rotSpeed);
	}
	if (key_code == LEFT)
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
	t_vars vars;
	t_pos pos;
	t_cub cub;
	vars.mlx = mlx_init();
	get_cub_value("./test_maps/test2.cub", &cub);

	pos.posX = 12;
	pos.posY = 5;
	pos.dirX = -1;
	pos.dirY = 0;
	pos.planeX = 0;
	pos.planeY = 0.66;
	pos.moveSpeed = 0.05;
	pos.rotSpeed = 0.05;

	vars.win = mlx_new_window(vars.mlx, cub.R_x, cub.R_y, "mlx");
	mlx_loop_hook(vars.win, &main_loop, &vars);
	mlx_hook(vars.win, 2, 0, key_press, &vars);

	mlx_loop(vars.mlx);
}