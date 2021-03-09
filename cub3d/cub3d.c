#include <stdio.h>
#include <fcntl.h>
#include "./gnl/get_next_line.h"
#include "./libft/libft.h"
#include "./cub3d.h"

int	get_R_value(int fd, t_cub *cub)
{
	char	*buf;
	char	*tmp;
	int		res;
	int		i;
	int		j;

	i = 0;
	res = get_next_line(fd, &buf);
	while(!ft_isdigit(buf[i]))
		i++;
	j = 0;
	while(ft_isdigit(buf[i + j]))
		j++;
	tmp = ft_substr(buf, i, j);
	cub->R_x = ft_atoi(tmp);
	
	return (res);
}

int main (int argc, char **argv)
{
	int fd;
	t_cub cub;

	if (argc > 2)
	{
		printf("ERROR");
		return (0);
	}
	fd = open(argv[1],O_RDONLY);
	get_value(fd);
}