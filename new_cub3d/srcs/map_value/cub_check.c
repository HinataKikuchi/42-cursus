#include "../../include/cub3d.h"
#include "../../include/error.h"

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
	if (check_extention(cub->NO, ext) == INV_FILE)
		write_error(NO_TEXTURE_ERROR, "NO_TEXTURE_ERROR");
	if (check_extention(cub->SO, ext) == INV_FILE)
		write_error(SO_TEXTURE_ERROR, "SO_TEXTURE_ERROR");
	if (check_extention(cub->WE, ext) == INV_FILE)
		write_error(WE_TEXTURE_ERROR, "WE_TEXTURE_ERROR");
	if (check_extention(cub->EA, ext) == INV_FILE)
		write_error(EA_TEXTURE_ERROR, "EA_TEXTURE_ERROR");
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
