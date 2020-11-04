/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 12:07:20 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/04 16:42:18 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *buf1, const char *buf2, size_t n)
{
	unsigned int	i;
	 char	*b1;
	unsigned char	*b2;

	i = n;
	b1 = buf1;
	b2 = (unsigned char *)buf2;
	if (i != 0)
	{
		while (--i != 0)
		{
			if ((*b1++ = *b2++) == '\0')
				break;
		}
	}
	else if (i == 0)
	{
		if (n != 0)
			*b1='\0';
	}
	return (ft_strlen(buf2));
}