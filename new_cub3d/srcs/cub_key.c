#include "../include/cub3d.h"


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