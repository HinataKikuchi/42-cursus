/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:40:28 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/01 18:09:56 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	char		*buf;
	int			res;

	if (!line || (fd < 0 || 256 <= fd) || BUFFER_SIZE < 0)
		return (ERROR_NO);
	res = 1;
	buf = malloc(sizeof(char) * ((size_t)BUFFER_SIZE + 1));
	if (!buf)
		return (ERROR_NO);
	if (res == -1)
		return (res);
	line[0] = ft_read(fd, &res, line);
	return (res);
}

char	*ft_read(int fd, int *res, char **line)
{
	char		*buf;
	static char	*save[MAX_ASIZE];

	while (!save[fd] || (!ft_memchr(save[fd], '\n', ft_strlen(save[fd]))))
	{
		*res = read(fd, buf, BUFFER_SIZE);
		if (*res == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[*res] = '\0';
		if (!*res)
			break ;
		save[fd] = ft_strjoin(save[fd], buf);
	}
	return (ft_return(&res, line[0], save[fd], buf));
}

char	*ft_return(int *res, char *line, char *save, char *buf)
{
	int i;

	i = 0;
	if (!res)
	{
		*line = ft_strjoin(save, buf);
		free(buf);
		return (line);
	}
	*line = "\0";
	while (save[i] != '\n')
		i++;
	*line = malloc((i + 1) * sizeof(char));
	if (!*line)
	{
		free(buf);
		free(save);
		return (NULL);
	}
	ft_strlcpy(*line, save, i);
	res = 1;
	save = &save[i + 1];
	free(buf);
	return (line);
}
