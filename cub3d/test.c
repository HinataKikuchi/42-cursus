#include "./minilibx-linux/mlx.h"
#include <stdio.h>

int	main(void)
{
	void *mlxptr;
	mlxptr = mlx_init();
	mlx_new_window(mlxptr, 500, 500, "ababa");
	mlx_loop(mlxptr);
}
