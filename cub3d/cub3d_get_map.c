/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_get_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 14:41:08 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/03/26 19:37:30 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static int	judge_map(char *buf)
{
	int	res;

	res = 0;
	if (ft_strchr(buf, '1') || ft_strchr(buf, '0'))
		res = 1;
	if (ft_strchr(buf, 'R'))
		res = 0;
	else if (ft_strchr(buf, 'F'))
		res = 0;
	else if (ft_strchr(buf, 'C'))
		res = 0;
	return (res);
}

static int	count_row(char *file_path)
{
	int		i;
	int		fd;
	int		res;
	char	*buf;

	i = 0;
	fd = open(file_path, O_RDONLY);
	while (res = get_next_line(fd, &buf) && res != -1)
	{
		if (judge_map(buf))
			i++;
		safe_free(buf);
	}
	if (judge_map(buf))
		i++;
	safe_free(buf);
	close(fd);
	if (res == -1)
		i = -1;
	return (i);
}


int			get_map(char *file_path, t_cub *cub)
{
	int		res;
	char	*buf;
	int		i;
	int		fd;

	i = 0;
	cub->map_row = count_row(file_path);
	fd = open(file_path, O_RDONLY);
	if (cub->map_row == -1 || fd == -1)
		return (-1);
	cub->map = malloc(sizeof(char *) * cub->map_row);
	while (res = get_next_line(fd, &buf) && res != -1)
	{
		if (judge_map(buf))
		{
			cub->map[i] = ft_strdup(buf);
			i++;
		}
		safe_free(buf);
	}
	if (judge_map(buf))
		cub->map[i] = ft_strdup(buf);
	safe_free(buf);
	close(fd);
	if (res == -1)
		return (-1);
	return (1);
}