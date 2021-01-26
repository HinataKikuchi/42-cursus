/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 19:08:33 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/25 19:12:19 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_pointer(va_list ap, s_format x)
{
	void	*p;
	char	*p_s;

	p = va_arg(ap, void*);
	p_s = ft_hex(p);
	get_min_field(&x);
	if (ft_strlen(p_s) < (size_t)x.ac)
	{
		p_s = make_string(p_s, x);
		if (!p_s)
			return ;
	}
	if (ft_strlen(p_s) < (size_t)x.min)
		write_with_min(p_s, x);
	else
		write(1, p_s, ft_strlen(p_s));
}