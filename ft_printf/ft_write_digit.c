/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:25:05 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/25 17:43:05 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
