/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:03:42 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/04/26 21:34:46 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
// #include "./cub3d.c"
// #include "./cub3d_utils.c"
// #include "./cub3d_get_map.c"
// #include "./gnl/get_next_line.c"
// #include "./gnl/get_next_line_utils.c"
// #include "./libft/ft_isdigit.c"
// #include "./libft/ft_atoi.c"
// #include "./libft/ft_substr.c"
// #include "./libft/ft_calloc.c"
// #include "./libft/ft_strlen.c"
// #include "./libft/ft_strnstr.c"
// #include "./libft/ft_bzero.c"
// #include "./libft/ft_strchr.c"


int		main (/*int argc, char **argv*/void)
{
	 t_cub cub;
	printf("%d\n",ft_atoi("100"));
	get_cub_value("./test_maps/test2.cub", &cub);
	printf("%d\n",cub.R_x);
}

/*keybound*/
/*
**a=97
**w=119
**s=115
**d=100
**↓65364
**→65363
**↑65362
**←65361
**esc65307
**enter32
*/

	/*TO_GET_MAP*/
	// t_cub	cub;
	// t_data	img;
	// int i;
	// int	j;

	// get_cub_value("./test_maps/test2.cub", &cub);
	// printf("Rx = %d\nR_y = %d\nNO = %s\nSO = %s\nWE = %s\nEA = %s\nS = %s\n",cub.R_x,cub.R_y,cub.NO, cub.SO, cub.WE, cub.EA, cub.Sprite);
	// printf("F_r = %d\nF_g = %d\nF_b = %d\n",cub.F[0], cub.F[1], cub.F[2]);
	// printf("C_r = %d\nC_g = %d\nC_b = %d\n", cub.C[0], cub.C[1], cub.C[2]);
	// i = 0;
	// while (i < cub.map_row)
	// {
	// 	printf("%s\n",cub.map[i]);
	// 	i++;
	// }


	/*TO_CHECK_*/
	// t_vars	vars;

	// vars.mlx=mlx_init();
	// vars.win=mlx_new_window(vars.mlx,640,480,"HelloWorld");
	// // mlx_hook(vars.win, 2, 1L<<0, key_hook, &vars);
	// mlx_key_hook(vars.win, key_hook, &vars);
	// mlx_loop(vars.mlx);
