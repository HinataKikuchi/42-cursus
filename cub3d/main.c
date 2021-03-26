/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:03:42 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/03/26 20:05:41 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include "./cub3d.c"
#include "./cub3d_utils.c"
#include "./cub3d_get_map.c"
#include "./gnl/get_next_line.c"
#include "./gnl/get_next_line_utils.c"
#include "./libft/ft_isdigit.c"
#include "./libft/ft_atoi.c"
#include "./libft/ft_substr.c"
#include "./libft/ft_calloc.c"
#include "./libft/ft_strlen.c"
#include "./libft/ft_strnstr.c"
#include "./libft/ft_bzero.c"
#include "./libft/ft_strchr.c"

int		main (/*int argc, char **argv*/void)
{
	int fd;
	int res;
	t_cub cub;
	int i;

	get_cub_value("./test_maps/test2.cub", &cub);
	printf("Rx = %d\nR_y = %d\nNO = %s\nSO = %s\nWE = %s\nEA = %s\nS = %s\n",cub.R_x,cub.R_y,cub.NO, cub.SO, cub.WE, cub.EA, cub.Sprite);
	printf("F_r = %d\nF_g = %d\nF_b = %d\n",cub.F[0], cub.F[1], cub.F[2]);
	printf("C_r = %d\nC_g = %d\nC_b = %d\n", cub.C[0], cub.C[1], cub.C[2]);
	for (i=0;i<cub.map_row;i++)
		printf("%s\n",cub.map[i]);
	free_struct(&cub);
}