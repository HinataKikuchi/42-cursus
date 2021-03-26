/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:02:10 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/03/26 19:45:17 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static char	**cut_num(char *buf, t_cub *cub, char c)
{
	char	**tmp;
	int		i;
	int		j;

	i = 2;
	j = 0;
	while (ft_isdigit(buf[i]))
		i++;
	tmp = malloc(sizeof(char*) * 3);
	tmp[0] = ft_substr(buf, 2, i - 2);
	i++;
	while (ft_isdigit(buf[i + j]))
		j++;
	tmp[1] = ft_substr(buf, i, j);
	tmp[2] = ft_substr(buf, i + j + 1, ft_strlen(buf) - (i + j + 1));
	return (tmp);
}

static int	get_fc_value(t_cub *cub, char *buf)
{
	int		res;
	char	**tmp;
	int		i;

	tmp = cut_num(buf, cub, buf[0]);
	i = 0;
	while (i < 3)
	{
		if (buf[0] == 'F')
			cub->F[i] = ft_atoi(tmp[i]);
		else if (buf[0] == 'C')
			cub->C[i] = ft_atoi(tmp[i]);
		if (!tmp[i])
			return (-1);
		free(tmp[i]);
		i++;
	}
	free(tmp);
}

static int	get_r_value(t_cub *cub, char *buf)
{
	int		buf_len;
	char	*tmp;
	int		res;
	int		i;

	buf_len = ft_strlen(buf);
	i = 2;
	while (ft_isdigit(buf[i]))
		i++;
	tmp = ft_substr(buf, 2, i - 2);
	if (!tmp)
		return (-1);
	cub->R_x = ft_atoi(tmp);
	if (!cub->R_x)
		return (-1);
	free(tmp);
	tmp = ft_substr(buf, i + 1, buf_len - 1);
	if (!tmp)
		return (-1);
	cub->R_y = ft_atoi(tmp);
	if (!cub->R_y)
		return (-1);
	free(tmp);
	return (1);
}

int			get_path(int fd, t_cub *cub)
{
	char	*buf;
	size_t	buf_len;
	int		res;

	while (res = get_next_line(fd, &buf) && res != (-1))
	{
		buf_len = ft_strlen(buf);
		if (ft_strnstr(buf, "NO", buf_len))
			cub->NO = ft_substr(buf, 3, buf_len - 3);
		else if (ft_strnstr(buf, "SO", buf_len))
			cub->SO = ft_substr(buf, 3, buf_len - 3);
		else if (ft_strnstr(buf, "WE", buf_len))
			cub->WE = ft_substr(buf, 3, buf_len - 3);
		else if (ft_strnstr(buf, "EA", buf_len))
			cub->EA = ft_substr(buf, 3, buf_len - 3);
		else if (buf[0] == 'S')
			cub->Sprite = ft_substr(buf, 2, buf_len - 2);
		free(buf);
	}
	free(buf);
	return (1);
}

int			get_cub_value(char *file_path, t_cub *cub)
{
	int		res;
	int		fd;
	char	*buf;

	fd = open(file_path, O_RDONLY);
	while (res = get_next_line(fd, &buf))
	{
		if (buf[0] == 'R')
			get_r_value(cub, buf);
		else if (buf[0] == 'F' || buf[0] == 'C')
			get_fc_value(cub, buf);
		free(buf);
	}
	free(buf);
	close(fd);
	fd = open(file_path, O_RDONLY);
	get_path(fd, cub);
	close(fd);
	fd = open(file_path, O_RDONLY);
	get_map(file_path, cub);
	close(fd);
}
