/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 18:02:18 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/05/15 23:22:52 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <math.h>
# include <stddef.h>
# include "../libft/libft.h"
# include "../minilibx-linux/mlx.h"
# include "../gnl/get_next_line.h"
# include "error.h"
# include "cub_value.h"
# include "cub_calc.h"
# include "cub_key.h"
# include "cub_utils.h"
# define texHeight 64
# define texWidth 64

typedef struct s_map
{
	double	cameraX;

	double	rayDirX;
	double	rayDirY;

	int		mapX;
	int		mapY;

	int		stepX;
	int		stepY;

	double	sideDistX;
	double	sideDistY;

	double	deltaDistX;
	double	deltaDistY;

	double	perpWallDist;

	int		lineHeight;

	int		drawStart;
	int		drawEnd;

	double	step;
	double	texPos;

	int		texX;
	int		texY;
}				t_map;

typedef struct s_data
{
	void	*img;
	int		*val;


	int		line_length;
	int		bits_per_pixel;
	int		endian;
	int		img_width;
	int		img_height;

	char	*addr;
}				t_data;

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
	int		**texture;
	int		**buf;
	int		position[2];
}				t_cub;

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
	t_vars vars;
	t_cub cub;
	t_data img;
}				t_pos;


int		get_cub_value(char *file_name, int argc, t_cub *cub, t_vars *var);
void	free_struct(t_cub *cub);
void	get_map(char *file_path, t_cub *cub);
int		judge_map(char *buf);
void	flood_fill(t_cub *cub, int x, int y, char **tmp_map);
void	check_map(t_cub *cub);
void	free_cub_struct(int error_num, t_cub *cub);
void	free_cub_exit(int error_num, char *message, t_cub *cub);
void	get_pure_texture(t_cub *cub);
t_cub	cub_value(void);
void	check_texture_xpm(t_cub *cub);




void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
int		create_trgb(int t, int r, int g, int b);
void	screen();
void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
void	verLine(t_pos *pos/*, t_data *data */,int x, int y1, int y2, int color);
void	draw_img(t_pos *pos);
void	load_img(t_pos *pos, int *texture, char *path, t_data *img);
void	load_tex(t_pos *pos);
t_map	initial_map_data(t_pos pos, int x);
void	set_step(t_map *map, t_pos pos);
int	get_hit(t_map *map, t_pos pos, int *side);
void	judge_side(t_map *map, t_pos pos, int side);
void	get_drawStart_drawEnd(t_map *map, t_pos pos);
void	write_texture(t_map *map, t_pos *pos, int i, int tex_n, int side);
void	get_texX(t_map *map, t_pos pos, int side);

void	get_screen_size(t_cub *cub, t_vars *vars);
int	key_press(int key_code, t_pos *pos);
int	key_hook(int keycode, t_vars *vars);
int	x_button(t_vars *vars);
int	main_loop(t_pos *pos);

double	cub_abs(double n);



#endif