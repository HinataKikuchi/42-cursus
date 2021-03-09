#include <stdio.h>
#include <fcntl.h>
#include "./gnl/get_next_line.h"
#include "./libft/libft.h"
#include "./cub3d.h"
#include "./gnl/get_next_line.c"
#include "./gnl/get_next_line_utils.c"
#include "./libft/ft_isdigit.c"
#include "./libft/ft_atoi.c"
#include "./libft/ft_substr.c"
#include "./libft/ft_calloc.c"
#include "./libft/ft_strlen.c"
#include "./libft/ft_bzero.c"

int	get_R_value(int fd, t_cub *cub)
{
	char	*buf;
	char	*tmp;
	int		res;
	int		i;

	i = 2;
	res = get_next_line(fd, &buf);
	while(ft_isdigit(buf[i]))
		i++;
	tmp = ft_substr(buf, 2, i);
	cub->R_x = ft_atoi(tmp);
	free(tmp);
	tmp = ft_substr(buf, i + 1, ft_strlen(buf) - i - 1);
	cub->R_y = ft_atoi(tmp);
	free(tmp);
	free(buf);
	return (res);
}

int	get_NO_path(int fd, t_cub *cub)
{
	char	*buf;
	int		res;

	res = get_next_line(fd, &buf);
	cub->NO = ft_substr(buf, 3, ft_strlen(buf) - 3);
	free(buf);
	return (res);
}


int main (int argc, char **argv)
{
	int fd;
	int res;
	t_cub cub;

	if (argc > 2)
	{
		printf("ERROR");
		return (0);
	}
	// fd = open(argv[1],O_RDONLY);
	fd = open("ex_cub.cub", O_RDONLY);
	if ((res = get_R_value(fd,&cub))==-1)
	{
		printf("ERROR\n");
		return (0);
	}
	printf("%d, %d\n",cub.R_x,cub.R_y);
}