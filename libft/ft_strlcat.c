/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:51:40 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/04 19:30:13 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *buf1, const char *buf2, size_t n)
{
	unsigned int i;

	i = ft_strlen(buf2);
	buf1 += n - 1;
	while(i != 0)
	{
		*buf1++ = *buf2++;
		i--;
	}
	*buf1++ = '\0';
	return (ft_strlen(buf2) + n - 1);
}