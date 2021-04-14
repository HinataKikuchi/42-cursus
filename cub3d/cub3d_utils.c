/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 18:51:27 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/04/14 18:10:38 by hkikuchi         ###   ########.fr       */
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