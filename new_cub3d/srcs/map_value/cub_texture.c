#include "../../include/cub3d.h"

void	get_pure_texture(t_cub *cub)
{

}

int	flood_fill(t_cub *cub, int x, int y)
{
	if (x <= 0 && y >= 0 && x < cub->map_col && y < cub->map_row)
		write_error(INV_MAP, "INV_MAP");
	if (cub->map[x][y] == '1')
		return (1);
	flood_fill(cub, x + 1, y);
	flood_fill(cub, x, y + 1);
	flood_fill(cub, x - 1, y);
	flood_fill(cub, x, y - 1);
}