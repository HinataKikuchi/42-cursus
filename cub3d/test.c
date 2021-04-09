#include "./minilibx-linux/mlx.h"
#include <stdlib.h>

int	main(void)
{
	void *mlxptr;
	mlxptr = mlx_init();
	mlx_new_window(mlxptr, 500, 500, "Hello World!");
	mlx_loop(mlxptr);
}
