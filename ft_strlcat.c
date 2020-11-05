/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:51:40 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/05 12:40:07 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *buf1, const char *buf2, size_t n)
{
	char *b1;
	const char *b2;
	unsigned int i;
	unsigned int j;

	b1=buf1;
	b2=(char *)buf2;
	i = n;
	j = ft_strlen(buf1);

	/*get the length*/
	while(i-- != 0 && *b1 != '\0')
		b1++;
	j = b1 - buf1;
	i = i - j;

	if (i == 0)
		return (j + ft_strlen(b2));
	while (*b2 != '\0')
	{
		if (i != 1)
		{
			*b1++ = *b2;
			i--;
		}
		b2++;
	}
	*b1 = '\0';

	return (j + (b2 - buf2));
}