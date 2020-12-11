/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:43:27 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/12/11 18:47:53 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// size_t ft_read(int fd, char **line, char *save)
// {
// 	char *buf;
// 	size_t res;
// 	size_t	buf_len;
// 	size_t	save_len;

// 	res = 0;
// 	while (res = read(fd, buf, BUFFER_SIZE))
// 	{
// 		if (res == -1)
// 			break ;
// 		buf_len = ft_strlen(buf);
// 		if (save = ft_memchr(buf,'\n',BUFFER_SIZE))
// 		{
// 			save_len = ft_strlen(save);
// 			\*line = ft_strjoin(*line,ft_substr(buf, 0, (buf_len - save_len)));
// 			break ;
// 		}
// 		ft_strjoin(line[0],buf);
// 	}

// 	return (res);
// }

int	get_next_line(int fd, char **line)
{	
	char *buf;
	static char *save;
	size_t	buf_len;
	size_t	save_len;
	int		res;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	save = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!line || !buf || !save)
		return (-1);
	while (res = read(fd, buf, BUFFER_SIZE)/* && ft_memchr(buf,'\n',BUFFER_SIZE)*/)
	{
		buf_len = ft_strlen(buf);
		if (save = ft_memchr(buf,'\n',BUFFER_SIZE))
		{
			save_len = ft_strlen(save);
			*line = ft_strjoin(*line,ft_substr(buf, 0, (buf_len - save_len)));
			while (*save == '\n')
				save++;
			break ;
		}
		ft_strjoin(line[0],buf);
	}
	if (res == 0)
		return (res);
	else
		return (1);
}