/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_small_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 00:03:26 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/02 18:09:20 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_small_hex(va_list ap, s_format x)
{
	unsigned int	h;
	char			*h_s;

	get_min_field(ap,&x);
	if (ft_strcmp(x.format_num,"0.0") == 0 || \
	(((h = va_arg(ap, unsigned int)) == 0) && !x.min && !x.ac && ft_strchr(x.format_num,'.')))
		return ;
	h_s = ft_small_hex(h);
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
	free(h_s);
}