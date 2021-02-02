/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:25:05 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/02 18:14:31 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_digit(va_list ap, s_format x)
{
	int		d;
	char	*d_s;

	get_min_field(ap,&x);
	if (ft_strcmp(x.format_num,"0.0") == 0 || \
	((d = va_arg(ap, int)) == 0 && !x.min && !x.ac && ft_strchr(x.format_num,'.')))
		return ;
	d_s = ft_itoa(d);
	if (ft_strlen(d_s) < (size_t)x.ac)
	{
		d_s = make_dstring(d_s, x, d);
		if (!d_s)
			return ;
	}
	if (ft_strlen(d_s) < (size_t)x.min)
		write_with_min(d_s, x);
	else
		write(1, d_s, ft_strlen(d_s));
	free(d_s);
}
