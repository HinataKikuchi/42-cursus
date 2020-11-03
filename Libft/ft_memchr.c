/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:08:51 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/03 19:34:12 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	unsigned int	i;
	unsigned char	*b;

	i = 0;
	b = buf;
	while (i < n)
	{
		if(*(b + i) - ch == 0)
			return (b + i);
		i++;
	}
	return (NULL);
}