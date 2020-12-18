/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:40:28 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/12/18 20:19:42 by hkikuchi         ###   ########.fr       */
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

	buf = malloc(sizeof(char) * ((size_t)BUFFER_SIZE + 1));
	if ((!line || !buf) || fd == (-1))
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
		buf[res] = '\0';
		if (!res)
			break ;
		else if(res == -1)
		{
			free(buf);
			return (res);
		}
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
	save[fd] = &save[fd][i + 1];
//	ft_bzero(&save[fd][i + 1], ft_strlen(&save[fd][i + 1]));
	res = 1;
		//save + buf = line
	free(buf);
	return(res);
}