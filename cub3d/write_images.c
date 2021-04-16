#include "cub3d.h"

static int key_hook(int keycode, t_vars *vars)
{
	printf("key_code=%d\n",keycode);
	if (keycode == ESC)
		mlx_destroy_window(vars->mlx, vars->win);
	printf("HELLO?\n");
}

void	screen()
{
	/*TO_CHECK_*/
	t_vars	vars;

	vars.mlx=mlx_init();
	vars.win=mlx_new_window(vars.mlx,640,480,"HelloWorld");
	// mlx_hook(vars.win, 2, 1L<<0, key_hook, &vars);
	mlx_key_hook(vars.win, key_hook, &vars);
	mlx_loop(vars.mlx);
}