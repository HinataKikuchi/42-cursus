#include "cub3d.h"

void	get_screen_size(t_cub *cub, t_win win)
{
	if (cub->R_x > win.size_x || (cub->R_x < 1))
		cub->R_x = win.size_x;
	if (cub->R_y > win.size_y || (cub->R_y < 1))
		cub->R_y = win.size_y;
}


void	write_page(t_vars *vars)
{
	/*Position*/
	double posX;
	double posY;
	/*Vector*/
	double dirX;
	double dirY;
	/*Camera Plane*/
	double planeX;
	double planeY;
	/*Time*/
	double time;
	double oldTime;

	posX = 22;
	posY = 12;
	dirX = -1;
	dirY = 0;
	planeX = 0;
	planeY = 0.66;
	time = 0;
	oldTime = 0;

	vars->win = mlx_new_window(vars->mlx,600,600,"cub3d");
	

}