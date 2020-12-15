/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_get_next_line.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:40:28 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/12/15 18:23:37 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{	
	char		*buf;
	char		*tmp;
	static char	save[256];
	int			res;
	int			i;

	buf = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if ((!line || !buf) || fd == (-1))
		return (-1);
	//read. till the text can be read.
	i = 0;
	while(res = read(fd, buf, BUFFER_SIZE) && (ft_memchr(buf, '\n',BUFFER_SIZE) || ft_memchr(buf, '\0', BUFFER_SIZE)))
	{
		*line = ft_strjoin(*line, buf);
	}
	if (ft_memchr(buf, '\n',BUFFER_SIZE))
	{
		while (buf[i] != '\n')
			i++;
		ft_strlcat(*line, buf,ft_strlen(*line) + i);
		ft_bzero(save,ft_strlen(save));
		ft_strlcpy(save,ft_memchr(buf,'\n',BUFFER_SIZE), BUFFER_SIZE);
	}
	else if (ft_memchr(buf, '\0', BUFFER_SIZE))
	{
		ft_strlcat(*line, buf, ft_strlen(buf));
		res = 0;
	}
	return (res);
}