/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 18:02:18 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/04/22 18:23:59 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <math.h>
# include "libft/libft.h"
# include "gnl/get_next_line.h"
# include "minilibx-linux/mlx.h"
# define A 97
# define W 119
# define S 115
# define D 100
# define DOWN 65364
# define RIGHT 65363
# define UP 65362
# define LEFT 65361
# define ESC 65307
# define ENTER 32

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

typedef struct	s_win
{
	int	size_x;
	int	size_y;
}				t_win;

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

typedef struct	s_pos
{
	double posX;
	double posY;
	double dirX;
	double dirY;
	double planeX;
	double planeY;
	double moveSpeed;
	double rotSpeed;
}				t_pos;

int		get_cub_value(char *file_path, t_cub *cub);
void	free_struct(t_cub *cub);
void	safe_free(void *p);
int		get_map(char *file_path, t_cub *cub);
void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
int		create_trgb(int t, int r, int g, int b);
void	screen();
void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
void	get_screen_size(t_cub *cub, t_win win);
int		key_hook(int keycode, t_vars *vars);
int		x_button(t_vars *vars);



#endif