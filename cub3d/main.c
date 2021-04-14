/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:03:42 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/04/14 18:10:43 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include <stdlib.h>
#include "./minilibx-linux/mlx.h"
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
	t_cub	cub;
	t_data	img;
	int i;

	get_cub_value("./test_maps/ex_cub.cub", &cub);
	printf("Rx = %d\nR_y = %d\nNO = %s\nSO = %s\nWE = %s\nEA = %s\nS = %s\n",cub.R_x,cub.R_y,cub.NO, cub.SO, cub.WE, cub.EA, cub.Sprite);
	printf("F_r = %d\nF_g = %d\nF_b = %d\n",cub.F[0], cub.F[1], cub.F[2]);
	printf("C_r = %d\nC_g = %d\nC_b = %d\n", cub.C[0], cub.C[1], cub.C[2]);

	void *mlxptr;
	mlxptr = mlx_init();

	void *winptr;
	winptr = mlx_new_window(mlxptr, 1920, 1080, "Hello World!");

	img.img = mlx_new_image(mlxptr,1920,1080);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	my_mlx_pixel_put(&img, 5, 5, 0x00FF0000);
	mlx_put_image_to_window(mlxptr, winptr, img.img, 0, 0);

	mlx_loop(mlxptr);
}

/*TO_SHOW_4_PICS_ON_WINDOWS*/
	// void *image_ptr[4];
	// int height;
	// int width;
	// printf("%s\n", cub.NO);
	// image_ptr[0] = mlx_xpm_file_to_image(mlxptr,cub.NO,&width,&height);
	// image_ptr[1] = mlx_xpm_file_to_image(mlxptr,cub.SO,&width,&height);
	// image_ptr[2] = mlx_xpm_file_to_image(mlxptr,cub.WE,&width,&height);
	// image_ptr[3] = mlx_xpm_file_to_image(mlxptr,cub.EA,&width,&height);

	// mlx_put_image_to_window(mlxptr, winptr ,image_ptr[0], 0, 0);
	// mlx_put_image_to_window(mlxptr, winptr ,image_ptr[1], 100, 0);
	// mlx_put_image_to_window(mlxptr, winptr ,image_ptr[2], 0, 100);
	// mlx_put_image_to_window(mlxptr, winptr ,image_ptr[3], 100, 100);