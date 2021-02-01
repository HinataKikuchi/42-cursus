/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:25:05 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/01 15:56:11 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_digit(va_list ap, s_format x)
{
	int		d;
	char	*d_s;

	get_min_field(&x);
	if (!x.min && !x.ac && ft_strchr(x.format_num, '.'))
		return ;
	d = va_arg(ap, int);
	d_s = ft_itoa(d);
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
