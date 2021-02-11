/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_small_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 00:03:26 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/10 21:08:00 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	write_shex(char *h_s, t_format x, size_t hs_len)
{
	int		res;

	res = 0;
	if (x.ac > (int)hs_len)
	{
		if (x.min > x.ac)
			res += write_blank(x.min - x.ac);
		res += write_zero(x.ac - hs_len);
	}
	else
	{
		if (x.min > (int)hs_len)
			res += (!ft_strchr(x.format_num, '.') && x.zero_flag) ?\
			write_zero(x.min - hs_len) : write_blank(x.min - hs_len);
	}
	res += write(1, h_s, hs_len);
	return (res);
}

void		write_small_hex(va_list ap, t_format *x)
{
	unsigned int	h;
	char			*h_s;
	size_t			hs_len;

	x->word_count = 0;
	h = va_arg(ap, unsigned int);
	if (ft_strchr(x->format_num, '.') && !h && !x->ac && !x->min)
		return ;
	h_s = (!x->ac && !h && ft_strchr(x->format_num, '.')) ?\
	ft_strdup("") : ft_small_hex(h);
	hs_len = ft_strlen(h_s);
	if (x->minus_flag)
	{
		if ((size_t)x->ac > hs_len)
			x->word_count += write_zero(x->ac - hs_len);
		x->word_count += write(1, h_s, hs_len);
		if (x->min > x->word_count)
			x->word_count += write_blank(x->min - x->word_count);
	}
	else
		x->word_count += write_shex(h_s, *x, hs_len);
	free(h_s);
}
