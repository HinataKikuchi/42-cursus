/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 18:02:18 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/04/16 18:43:15 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft/libft.h"
# include "gnl/get_next_line.h"

typedef struct s_cub
{
	int		R_x;
	int		R_y;
	char	*NO;
	char	*SO;
	char	*WE;
	char	*EA;

	char	*Sprite;
	int		F[3];
	int		C[3];

	char	**map;
	int		map_row;
	int		map_col;
}				t_cub;

typedef struct	s_vars
{
	void	*mlx;
	void	*win;
}				t_vars;


typedef struct s_date
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

int		get_cub_value(char *file_path, t_cub *cub);
void	free_struct(t_cub *cub);
void	safe_free(void *p);
int		get_map(char *file_path, t_cub *cub);
void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
int		create_trgb(int t, int r, int g, int b);


#endif