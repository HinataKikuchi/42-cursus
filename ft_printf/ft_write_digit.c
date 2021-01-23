/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:25:05 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/23 23:47:27 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	write_with_min(char *d_s, s_format x)
{
	if (ft_strchr(x.flagment, '-'))
	{
		write(1, d_s, ft_strlen(d_s));
		write_blank((size_t)x.min - ft_strlen(d_s));
		return ;
	}
	else if (ft_strchr(x.flagment, '0'))
		write_zero((size_t)x.min - ft_strlen(d_s));
	else
		write_blank((size_t)x.min - ft_strlen(d_s));
	write(1, d_s, ft_strlen(d_s));
}

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

static char	*make_string(char *d_s, s_format x)
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

void	write_digit(va_list ap, s_format x)
{
	int		d;
	char	*d_s;

	d = va_arg(ap, int);
	d_s = ft_itoa(d);
	get_min_field(&x);
	if (ft_strlen(d_s) < (size_t)x.ac)
	{
		d_s = make_string(d_s, x);
		if (!d_s)
			return ;
	}
	if (ft_strlen(d_s) < (size_t)x.min)
		write_with_min(d_s, x);
	else
		write(1, d_s, ft_strlen(d_s));
	free(d_s);
}
