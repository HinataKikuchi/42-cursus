/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:43:27 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/12/01 06:49:29 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_read(int fd, char **line, char *ans)
{
	char *buf;
	size_t res;

	res = 0;
	buf = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	while(!ft_memchr(buf,'\n',BUFFER_SIZE))
	{
		res += read(fd, buf, (BUFFER_SIZE + 1));
	}

}

int	get_next_line(int fd, char **line)
{
	static char *ans;

	ans = ft_calloc(BUFFER_SIZE,sizeof(char));
	if(!ans)
		return (0);
	
	
}