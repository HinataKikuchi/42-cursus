#include "../../include/cub3d.h"

int	judge_map(char *buf)
{
	int	i;

	i = 0;
	if (buf[i] == '\0')
		return (0);
	while (buf[i] != '\0')
	{
		if (buf[i] != ' ' && !ft_isdigit(buf[i]) && !ft_strchr("NWS", buf[i]))
			return (0);
		i++;
	}
	if ((ft_strchr(buf, '1') || ft_strchr(buf, '0')))
		return (1);
	return (1);
}

static void	count_col(t_cub *cub)
{
	int		i;
	size_t	map_col;

	i = 0;
	cub->map_col = 0;
	while (cub->map[i])
	{
		map_col = ft_strlen(cub->map[i]);
		if (map_col > (size_t)(cub->map_col))
			cub->map_col = map_col;
		i++;
	}
}

void	get_map(char *file_path, t_cub *cub)
{
	int		fd;
	int		res;
	int		i;
	char	*buf;

	fd = open(file_path, O_RDONLY);
	cub->map = malloc(sizeof(char *) * (cub->map_row + 1));
	if (!cub->map)
		write_error(MALLOC_ERROR, "MALLOC_ERROR");
	res = get_next_line(fd, &buf);
	i = 0;
	while (res)
	{
		if (judge_map(buf))
			cub->map[i++] = buf;
		else
			safe_free(buf);
		res = get_next_line(fd, &buf);
	}
	safe_free(buf);
	close(fd);
	cub->map[i] = NULL;
	count_col(cub);
}

void	get_screen_size(t_cub *cub, t_vars *var)
{
	t_win	win;

	mlx_get_screen_size(var->mlx, &win.size_x, &win.size_y);
	if (cub->R_x > win.size_x || (cub->R_x < 1))
		cub->R_x = win.size_x;
	if (cub->R_y > win.size_y || (cub->R_y < 1))
		cub->R_y = win.size_y;
}


