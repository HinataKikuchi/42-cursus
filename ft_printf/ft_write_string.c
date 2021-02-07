/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:24:24 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/07 23:06:15 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		write_string(va_list ap, t_format *x)
{
	char	*s;
	int		s_len;

	s = va_arg(ap, char*);
	if (!s)
		s = "(null)";
	s_len = ft_strlen(s);
	if (!x->ac && !x->min && ft_strchr(x->format_num,'.'))
	{
		x->word_count = 0;
		return ;
	}
	if (x->minus_flag)
	{
		x->word_count += (x->ac < s_len) ? write(1, s, x->ac) : write(1, s, s_len);
		x->word_count += write_blank(x->min - x->ac);
	}
	else
	{
		if (x->ac < s_len && x->min > x->ac)
			x->word_count += (x->zero_flag) ? write_zero(x->min - x->ac) : write_blank(x->min - x->ac);
		else if (x->min > s_len)
			x->word_count += (x->zero_flag) ? write_zero(x->min - s_len) : write_blank(x->min - s_len);
	}
	x->word_count += (s_len > x->ac) ? write(1, s, x->ac) : write(1, s, s_len);
}
