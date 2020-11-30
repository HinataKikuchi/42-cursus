/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:43:27 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/12/01 02:32:41 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#define BUFFER_SIZE 32

size_t ft_read(int fd, char **line)
{
	char *buf;
	size_t res;

	res = 0;
	buf = ft_calloc(sizeof(char), BUFFER_SIZE);
	while(!ft_memchr(buf,'\0',BUFFER_SIZE))
	{
		res += read(fd, buf, BUFFER_SIZE);
	}

}

int	get_next_line(int fd, char **line)
{
	static *ans;
	
}