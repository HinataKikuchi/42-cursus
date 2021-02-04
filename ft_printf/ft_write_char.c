/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:24:21 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/04 15:04:54 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		write_character(va_list ap, t_format *x)
{
	char	c;
	int		min_field;

	c = '%';
	if (x->format_char != '%')
		c = va_arg(ap, int);
	get_min_field(ap,x);
	min_field = x->min;
	if (ft_strchr(x->flagment, '-'))
	{
		write(1, &c, 1);
		write_blank(min_field - 1);
		x->word_count = (!min_field) ? 1 : min_field;
		if (!c)
			x->word_count -= 1;
		return ;
	}
	else if (ft_strchr(x->flagment, '0'))
		write_zero(min_field - 1);
	else
		write_blank(min_field -1);
	write(1, &c, 1);
	x->word_count = (min_field) ? min_field : 1 ;
	if (!c)
		x->word_count -= 1;
}
