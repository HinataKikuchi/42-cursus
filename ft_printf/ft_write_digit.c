/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:25:05 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/04 13:02:59 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_digit(va_list ap, t_format *x)
{
	int		d;
	char	*d_s;
	size_t	ds_len;

	get_min_field(ap,x);
	if (ft_strcmp(x->format_num,"0.0") == 0 || \
	((d = va_arg(ap, int)) == 0 && !x->min && !x->ac && ft_strchr(x->format_num,'.')))
		return ;
	d_s = ft_itoa(d);
	ds_len = ft_strlen(d_s);
	if (((d > 0) && ds_len < (size_t)x->ac) || ((d < 0) && ds_len - 1 < (size_t)x->ac))
	{
		d_s = make_dstring(d_s, *x, d);
		if (!d_s)
			return ;
	}
	ds_len = ft_strlen(d_s);
	if (ds_len < (size_t)x->min)
		x->word_count = write_with_min(d_s, *x);
	else
		x->word_count = write(1, d_s, ds_len);
	free(d_s);
}
