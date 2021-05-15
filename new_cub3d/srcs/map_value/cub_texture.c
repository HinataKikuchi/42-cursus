#include "../../include/cub3d.h"

void	get_pure_texture(t_cub *cub)
{
	char	*set;
	char	*tmp;

	set = " \t";
	tmp = ft_strtrim(cub->NO, set);
	free(cub->NO);
	cub->NO = tmp;
	tmp = ft_strtrim(cub->SO, set);
	free(cub->SO);
	cub->SO = tmp;
	tmp = ft_strtrim(cub->WE, set);
	free(cub->WE);
	cub->WE = tmp;
	tmp = ft_strtrim(cub->EA, set);
	free(cub->EA);
	cub->EA = tmp;
	tmp = ft_strtrim(cub->Sprite, set);
	free(cub->Sprite);
	cub->Sprite = tmp;
}

int	check_extention(char *s, char *ext)
{
	size_t	s_len;
	size_t	ext_len;
	size_t	i;
	char	*prefix;

	ext_len = ft_strlen(ext);
	s_len = ft_strlen(s);
	if (s_len <= ext_len)
		return (INV_FILE);
	i = 0;
	while (s[s_len - ext_len + i] == ext[i] && i < ext_len)
		i++;
	if (i == ext_len)
		return (1);
	else
		return (INV_FILE);

}

void	check_texture_xpm(t_cub *cub)
{
	char	*ext;

	ext = ".xpm";
	if (check_extention(cub->NO, ".xpm") == INV_FILE)
	{

	}
}

void	check_map(t_cub *cub)
{
	char	**tmp;
	char	dir[4] = {'S', 'N', 'W', 'E'};
	int	i;
	int	j;

	tmp = malloc(sizeof(char *) * cub->map_row + 1);
	cub->position[0] = 0;
	cub->position[1] = 0;
	i = 0;
	j = 0;
	while (cub->map[i])
	{
		tmp[i] = ft_strdup(cub->map[i]);
		while (j < ft_strlen(cub->map[i]))
		{
			if (ft_strchr(dir, cub->map[i][j]))
			{
				cub->position[0] = i;
				cub->position[1] = j;
			}
			j++;
		}
		j = 0;
		i++;
	}
	tmp[i] = NULL;
	if (!cub->position[0] && !cub->position[1])
		free_cub_exit(NO_START_POS, "NO_START_POS",cub);
	flood_fill(cub, cub->position[0], cub->position[1], tmp);
	free_double_pointer(tmp);
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