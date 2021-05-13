/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tex_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 18:58:36 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/05/07 13:46:30 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

// void	get_texX(t_map *map, t_pos pos, int side)
// {
// 	double	wallX;

// 	if (side == 0)
// 		wallX = pos.posY + map->perpWallDist * map->rayDirY;
// 	else
// 		wallX = pos.posX + map->perpWallDist * map->rayDirX;
// 	wallX -= floor(wallX);

// 	map->texX = (int)(wallX * (double)texWidth);
// 	if (side == 0 && map->rayDirX > 0)
// 		map->texX = texWidth - map->texX - 1;
// 	if (side == 1 && map->rayDirY < 0)
// 		map->texX = texWidth - map->texX - 1;
// 	map->step = 1.0 * texHeight / map->lineHeight;
// 	map->texPos = (map->drawStart - pos.cub.R_x / 2 + map->lineHeight / 2) * map->step;
// }

// void	write_texture(t_map *map, t_pos *pos, int i, int tex_n, int side)
// {
// 	int	y;

// 	y = 0;
// 	while (y < map->drawStart && y < pos->cub.R_y)
// 	{
// 				if (y > pos->cub.R_y || i > pos->cub.R_x || y < 0 || i < 0)
// 		{
// 			printf("y = %d, x = %d\n", y , i);
// 			fflush(stdout);
// 		}

// 		pos->cub.buf[y][i] = create_trgb(0, pos->cub.C[0], pos->cub.C[1], pos->cub.C[2]);
// 		y++;
// 	}
// 	y = map->drawStart;
// 	while (y < map->drawEnd && y < pos->cub.R_y)
// 	{
// 		map->texY = (int)map->texPos & (texHeight - 1);
// 		map->texPos += map->step;
// 		int color;
// 		if (tex_n > 2 || texHeight * map->texY + map->texX > texHeight * texWidth)
// 		{
// 			printf("tex_n = %d, col = %d\n", tex_n,texHeight * map->texY + map->texX);
// 			fflush(stdout);
// 		}

// 		color = pos->cub.texture[tex_n][texHeight * map->texY + map->texX];
// 		// make color darker for y-sides: R, G and B byte each divided through two with a "shift" and an "and"
// 		if (side == 1)
// 			color = (color >> 1) & 8355711;
// 				if (y > pos->cub.R_y || i > pos->cub.R_x || y < 0 || i < 0)
// 		{
// 			printf("y = %d, x = %d\n", y , i);
// 			fflush(stdout);
// 		}
// 		pos->cub.buf[y][i] = color;
// 		y++;
// 	}
// 	y = map->drawEnd;
// 	while (y < pos->cub.R_y && y >= 0)
// 	{
// 		if (y > pos->cub.R_y || i > pos->cub.R_x || y < 0 || i < 0)
// 		{
// 			printf("y = %d, x = %d\n", y , i);
// 			fflush(stdout);
// 		}
// 		pos->cub.buf[y][i] = create_trgb(0, pos->cub.F[0], pos->cub.F[1], pos->cub.F[2]);
// 		y++;
// 	}
// }