#include "../../include/cub3d.h"

char	*get_pure_texture(char *s, char *prefix)
{
	size_t	s_len;
	size_t	p_len;
	size_t	i;
	char	*tmp_1;
	char	*tmp_2;

	i = 0;
	s_len = ft_strlen(s);
	p_len = ft_strlen(prefix);
	if (s_len < p_len)
		write_error(TEXTURE_ERROR, "TEXTURE_ERROR");
	tmp_1 = ft_substr(s, p_len + 1, s_len - (p_len + 1));
	tmp_2 = ft_strtrim(tmp_1, " \t");
	free(tmp_1);
	return (tmp_2);
}

void	flood_fill(t_cub *cub, int x, int y, char **tmp_map)
{
	if (x <= 0 || y <= 0 || x >= cub->map_row - 1 || y >= cub->map_col - 1)
		free_cub_exit(INV_MAP, "INV_MAP", cub);
	tmp_map[x][y] = 'x';
	if (x < cub->map_row - 1 && tmp_map[x + 1][y] != 'x' && cub->map[x + 1][y] != '1')
		flood_fill(cub, x + 1, y, tmp_map);
	if (y < cub->map_col - 1 && tmp_map[x][y + 1] != 'x' && cub->map[x][y + 1] != '1')
		flood_fill(cub, x, y + 1, tmp_map);
	if (x > 0 && tmp_map[x - 1][y] != 'x' && cub->map[x - 1][y] != '1')
		flood_fill(cub, x - 1, y, tmp_map);
	if (y > 0 && tmp_map[x][y - 1] != 'x' && cub->map[x][y - 1] != '1')
		flood_fill(cub, x, y - 1, tmp_map);
}