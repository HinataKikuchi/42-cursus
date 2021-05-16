#include "../include/cub3d.h"

void	calc_pos_ini_val(t_map *map, t_pos *pos, int i)
{
	map->cameraX = 2 * i / (double)(pos->cub.R_x) - 1;
	map->rayDirX = pos->dirX + pos->planeX * map->cameraX ;
	map->rayDirY = pos->dirY + pos->planeY * map->cameraX;

	int mapX = (int)pos->posX;
	int mapY = (int)pos->posY;

	map->deltaDistX = fabs(1 / map->rayDirX);
	map->deltaDistY = fabs(1 / map->rayDirY);
	if (map->rayDirX < 0)
	{
		map->stepX = -1;
		map->sideDistX = (pos->posX - mapX) * map->deltaDistX;
	}
	else
	{
		map->stepX = 1;
		map->sideDistX = (mapX + 1.0 - pos->posX) * map->deltaDistX;
	}
	if (map->rayDirY < 0)
	{
		map->stepY = -1;
		map->sideDistY = (pos->posY - mapY) * map->deltaDistY;
	}
	else
	{
		map->stepY = 1;
		map->sideDistY = (mapY + 1.0 - pos->posY) * map->deltaDistY;
	}
}
