#include "cub3d.h"

void	screen()
{
	/*TO_CHECK_*/
	t_vars	vars;

	int x;
	int y;
	int ret;
	vars.mlx=mlx_init();
	vars.win=mlx_new_window(vars.mlx,640,480,"HelloWorld");

	/*WHEN_X_BUTTON_WAS_PRESSED*/
	mlx_hook(vars.win, 33, 1L<<17, x_button, &vars);
	/*KEY_HOOK*/
	mlx_key_hook(vars.win, key_hook, &vars);
	mlx_loop(vars.mlx);
}


/*MOUSE_HOOK*/
// mlx_mouse_hook(vars.win, mouse_hook, &vars);
// static int mouse_hook(int mouse, t_vars *vars)
// {
// 	printf("mouse = %d\n",mouse);
// 	printf("hello!\n");
// }

/*GET_POSSITION*/
// 	ret = mlx_mouse_get_pos(vars.mlx, vars.win, &x, &y);