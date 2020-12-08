/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:43:27 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/12/08 19:24:43 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_read(int fd, char **line, char *save)
{
	char *buf;
	size_t res;

	res = 0;
	buf = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (!buf)
		return (ERROR_NO);
	while(!ft_memchr(buf,'\n',BUFFER_SIZE + 1))
		if ((res += read(fd, buf, (BUFFER_SIZE + 1))) == -1)
			return (ERROR_NO);
	

	return (res);
}

int	get_next_line(int fd, char **line)
{
	static char *save;

	ft_read(fd, line, save);
	
	
}