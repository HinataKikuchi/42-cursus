/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:03:42 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/04/20 19:57:53 by hkikuchi         ###   ########.fr       */
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

// double	fx(int x,double a, int b)
// {
// 	double	y;

// 	y = (a * x) + b;
// 	return (y);
// }

int		main (/*int argc, char **argv*/void)
{
	t_data	img;
	t_vars	vars;
	t_win	win;
	t_cub	cub;

	get_cub_value("./test_maps/test2.cub", &cub);
	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx,600,600,"Hi!");
	mlx_get_screen_size(vars.mlx, &win.size_x, &win.size_y);
	get_screen_size(&cub, win);

	mlx_loop(vars.mlx);
}

/*TO_WRITE_IMAGE_BY_FORMULA*/
	// img.img = mlx_new_image(vars.mlx, 600,600);
	// img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	// int i=0;
	// double y;
	// for (i=0;i < 300;i++)
	// {
	// 	y = f(i, 100);
	// 	if (y > 600.0)
	// 		break ;
	// 	my_mlx_pixel_put(&img, i,(int)y,0x00FF0000);
	// }
	// mlx_put_image_to_window(vars.mlx, vars.win, img.img, 0,0);


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


/*mlx_pixel_put*/
// 	int i;
// 	int j;
// 	for (i = 0; i < 5; i++)
// 	{
// 		for (j = 0;j < 5; j ++)
// 		{
// 			mlx_pixel_put(mlxptr, winptr, i, j, 0xDF865B);
// 		}
// 	}
// 	mlx_loop(mlxptr);



/*mlx_put_image_to_window*/
	// if (!image)
	// 	return 0;



// /*mlx_xpm_file_to_image*/
// /*mlx_put_image_to_window*/
// 	int height;
// 	int width;
// 	image_ptr = mlx_xpm_file_to_image(mlxptr, "./textures/bluestone.xpm",&width,&height);
// 	mlx_put_image_to_window(mlxptr, winptr ,image_ptr, 200, 200);
