/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:31:38 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/05/07 13:55:28 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

t_map	initial_map_data(t_pos pos, int x)
{
	t_map	res;

	res.cameraX = 2 * x / (double)pos.cub.R_x - 1;
	res.rayDirX = pos.dirX + pos.planeX * res.cameraX;
	res.rayDirY = pos.dirY + pos.planeY * res.cameraX;
	res.mapX = (int)pos.posX;
	res.mapY = (int)pos.posY;
	if (res.rayDirX)
		res.deltaDistX = fabs(1 / res.rayDirX);
	else
		res.deltaDistX = 1;
	if (res.rayDirY)
		res.deltaDistY = fabs(1 / res.rayDirY);
	else
		res.deltaDistY = 1;
	return (res);
}

void	set_step(t_map *map, t_pos pos)
{
	if (map->rayDirX < 0)
	{
		map->stepX = -1;
		map->sideDistX = (pos.posX - map->mapX) * map->deltaDistX;
	}
	else
	{
		map->stepX = 1;
		map->sideDistX = (map->mapX + 1.0 - pos.posX) * map->deltaDistX;
	}
	if (map->rayDirY < 0)
	{
		map->stepY = -1;
		map->sideDistY = (pos.posY - map->mapY) * map->deltaDistY;
	}
	else
	{
		map->stepY = 1;
		map->sideDistY = (map->mapY + 1. - pos.posY) * map->deltaDistY;
	}
}

int	get_hit(t_map *map, t_pos pos, int *side)
{
	if (map->sideDistX < map->sideDistY)
	{
		map->sideDistX = map->sideDistX + map->deltaDistX;
		map->mapX = map->mapX + map->stepX;
		*side = 0;
	}
	else
	{
		map->sideDistY = map->sideDistY + map->deltaDistY;
		map->mapY = map->mapY + map->stepY;
		*side = 1;
	}
	if (pos.cub.map[map->mapX][map->mapY] == '1')
		return (1);
}

// void	judge_side(t_map *map, t_pos pos, int side)
// {
// 	if (side == 0)
// 	{
// 		if (map->rayDirX != 0)
// 			map->perpWallDist = (map->mapX - pos.posX + (1 - map->stepX) / 2) / map->rayDirX;
// 		else
// 			map->perpWallDist = (map->mapX - pos.posX + (1 - map->stepX) / 2) / 0.001;
// 	}
// 	else
// 	{
// 		if (map->rayDirY != 0)
// 			map->perpWallDist = (map->mapY - pos.posY + (1 - map->stepY) / 2) / map->rayDirY;
// 		else
// 			map->perpWallDist = (map->mapY - pos.posY + (1 - map->stepY) / 2) / 0.001;
// 	}
// }

// void	get_drawStart_drawEnd(t_map *map, t_pos pos)
// {
// 	if (map->perpWallDist > 0.05)
// 		map->lineHeight = (int)(pos.cub.R_y / map->perpWallDist);
// 	else
// 		map->lineHeight = 0;

// 	map->drawStart = -map->lineHeight / 2 + pos.cub.R_y / 2;
// 	if (map->drawStart < 0)
// 		map->drawStart = 0;
// 	map->drawEnd = map->lineHeight / 2 + pos.cub.R_y / 2;
// 	if (map->drawEnd >= pos.cub.R_y)
// 		map->drawEnd = pos.cub.R_y - 1;
// }

