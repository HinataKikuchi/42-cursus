/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:40:28 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/12/21 17:19:14 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd, char **line)
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
	//read. till the text can be read.
	i = 0;
	res = 1;
	count = 0;
	ft_bzero(line[0], ft_strlen(line[0]));
	// ft_bzero(buf, (BUFFER_SIZE + 1));
	while(!save[fd] || (!ft_memchr(save[fd], '\n', ft_strlen(save[fd]))))
	{
		res = read(fd, buf, BUFFER_SIZE);
		if(res == -1)
		{
			free(buf);
			return (res);
		}
		buf[res] = '\0';
		if (!res)
			break ;
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
	ft_strlcpy(*line, save[fd], i);
	// *line = save[fd];
	res = 1;
	save[fd] = &save[fd][i + 1];
	// if (save[fd][0] == '\0' &&)
	// 	res = 0;
//	ft_bzero(&save[fd][i + 1], ft_strlen(&save[fd][i + 1]));
		//save + buf = line
	free(buf);
	return(res);
}