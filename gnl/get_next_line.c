/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:40:28 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/12/26 01:22:13 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	char		*buf;
	static char	*save[256];
	int			res;
	int			i;
	int			count;

	if (!line || (fd < 0 || 256 <= fd) || BUFFER_SIZE < 0)
		return (-1);
	buf = malloc(sizeof(char) * ((size_t)BUFFER_SIZE + 1));
	if (!buf)
		return (-1);
	i = 0;
	res = 1;
	count = 0;
	*line = "\0";
	while (!save[fd] || (!ft_memchr(save[fd], '\n', ft_strlen(save[fd]))))
	{
		res = read(fd, buf, BUFFER_SIZE);
		if (res == -1)
		{
			free(buf);
			return (res);
		}
		buf[res] = '\0';
		if (!res)
			break;
		save[fd] = ft_strjoin(save[fd], buf, count);
		count++;
	}
	if (!res)
	{
		*line = ft_strjoin(save[fd], buf, count);
		free(buf);
		return (res);
	}
	while (save[fd][i] != '\n')
		i++;
	*line = malloc((i + 1) * sizeof(char));
	printf("%d\n", i);
	ft_strlcpy(*line, save[fd], i);
	res = 1;
	save[fd] = &save[fd][i + 1];
	free(buf);
	return (res);
}