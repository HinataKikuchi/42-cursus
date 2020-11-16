/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:08:51 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/16 16:29:12 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	unsigned int	i;
	unsigned char	*b;
	unsigned char	c;

	i = 0;
	b = (unsigned char*)buf;
	c = (unsigned int)ch;
	while (i < (unsigned int)n)
	{
		if (*(b + i) - c == 0)
			return ((void *)(b + i));
		i++;
	}
	return (NULL);
}
