#include "./minilibx-linux/mlx.h"
#include <stdlib.h>

/*SEE THIS (https://harm-smits.github.io/42docs/libs/minilibx/prototypes.html)*/

int	main(void)
{
	void *mlxptr;
	mlxptr = mlx_init();
	void *winptr;
	winptr = mlx_new_window(mlxptr, 500, 500, "Hello World!");

	void *image_ptr;

/*mlx_new_image*/
	image_ptr = mlx_new_image(mlxptr, 100,100);
	// void *image;


// /*mlx_loop*/
	mlx_loop(mlxptr);

// /*mlx_destroy_window*/
// 	mlx_destroy_window (mlxptr, winptr);
}


/*mlx_pixel_put*/
	// int i;
	// int j;
	// for (i = 0; i < 400; i++)
	// {
	// 	for (j = 0;j < 400; j ++)
	// 	{
	// 		mlx_pixel_put(mlxptr, winptr, i, j, 0xDF865B);
	// 	}
	// }


/*mlx_put_image_to_window*/


	// if (!image)
	// 	return 0;

// /*mlx_xpm_file_to_image*/
// /*mlx_put_image_to_window*/
// 	int height;
// 	int width;
// 	image_ptr = mlx_xpm_file_to_image(mlxptr, "./textures/bluestone.xpm",&width,&height);
// 	mlx_put_image_to_window(mlxptr, winptr ,image_ptr, 200, 200);
