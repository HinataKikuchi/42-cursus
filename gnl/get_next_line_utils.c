/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:46:48 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/12/01 02:24:42 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned char	*b;
	unsigned char	c;

	i = 0;
	b = (unsigned char*)buf;
	c = (unsigned char)ch;
	while (i < n)
	{
		if (*(b + i) == c)
			return ((void *)(b + i));
		i++;
	}
	return (NULL);
}

void	*ft_calloc(size_t n, size_t size)
{
	void			*mem;

	mem = malloc(n * size);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, n * size);
	return (mem);
}
