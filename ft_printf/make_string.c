/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:36:48 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/29 10:24:39 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	fill_zero(void *s, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)s + i) = '0';
		i++;
	}
}

char	*make_string(char *d_s, s_format x)
{
	char	*buf;
	size_t	zero_len;
	size_t	d_s_len;

	buf = malloc(sizeof(char) * x.ac);
	if (!buf)
		return (NULL);
	d_s_len = ft_strlen(d_s);
	zero_len = (size_t)x.ac - d_s_len;
	fill_zero(buf, zero_len);
	ft_strlcpy(&buf[zero_len], d_s, d_s_len + 1);
	buf[x.ac] = '\0';
	return (buf);
}

