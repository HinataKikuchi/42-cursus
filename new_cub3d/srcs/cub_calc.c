/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub_calc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:42:40 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/05/16 21:38:23 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub_calc.h"

void	write_page(t_pos *pos)
{
	int		i;
	int		hit;
	t_map	map;

	i = 0;
	while (i < pos->cub.R_x)
	{
		calc_pos_ini_val(&map, pos, i);
		hit = 0;
	}
	
}

int	main_loop(t_pos *pos)
{
	// write_page(pos);
	// draw_img(pos);
	return (0);
}

