/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_large_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:24:57 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/25 19:12:40 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_large_hex(va_list ap, s_format x)
{
	unsigned int	h;
	char			*h_s;

	h = va_arg(ap, unsigned int);
	h_s = ft_hex(h);
	get_min_field(&x);
	if (ft_strlen(h_s) < (size_t)x.ac)
	{
		h_s = make_string(h_s, x);
		if (!h_s)
			return ;
	}
	if (ft_strlen(h_s) < (size_t)x.min)
		write_with_min(h_s, x);
	else
		write(1, h_s, ft_strlen(h_s));
}