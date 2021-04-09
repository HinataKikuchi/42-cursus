#include "./minilibx-linux/mlx.h"
#include <stdlib.h>

int	main(void)
{
	void *mlxptr;
	mlxptr = mlx_init();
	void *winptr;
	winptr = mlx_new_window(mlxptr, 500, 500, "Hello World!");
	int i;
	int j;
	for (i = 0; i < 400; i++)
	{
		for (j = 0;j < 400; j ++)
		{
			mlx_pixel_put(mlxptr, winptr, i, j, 4041);
		}
	}
	mlx_loop(mlxptr);
}
