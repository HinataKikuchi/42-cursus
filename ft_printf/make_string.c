/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:36:48 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/29 16:04:21 by hkikuchi         ###   ########.fr       */
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
	free(d_s);
	return (buf);
}

char	*make_pstring(char *d_s, s_format x)
{
	char	*buf;
	size_t	zero_len;
	size_t	d_s_len;

	buf = malloc(sizeof(char) * x.ac + 2);
	if (!buf)
		return (NULL);
	d_s_len = ft_strlen(d_s);
	zero_len = (size_t)x.ac - d_s_len;
	buf[0] = '0';
	buf[1] = 'x';
	fill_zero(&buf[2], zero_len);
	ft_strlcpy(&buf[zero_len], d_s, d_s_len + 1);
	buf[x.ac] = '\0';
	free(d_s);
	return (buf);
}

char	*make_pointer_string(char *d_s)
{
	char	*buf;
	size_t	d_s_len;

	d_s_len = ft_strlen(d_s);
	buf = malloc(sizeof(char) * (d_s_len + 3));
	buf[0] = '0';
	buf[1] = 'x';
	ft_strlcpy(&buf[2], d_s, d_s_len + 1);
	buf[d_s_len + 2] = '\0';
	free(d_s);
	return (buf);
}