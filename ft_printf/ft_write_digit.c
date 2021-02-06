/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:25:05 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/05 08:37:42 by hkikuchi         ###   ########.fr       */
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
	{
		x->word_count = 0;
		return ;
	}
	d_s = (!x->ac && ft_strchr(x->format_num, '.') && !d) ? ft_strdup("\0") : ft_itoa(d);
	ds_len = ft_strlen(d_s);
	if (((d >= 0) && ds_len < (size_t)x->ac) || ((d < 0) && ds_len - 1 < (size_t)x->ac))
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
	if (x->ac || !ft_strchr(x->format_num, '.') || d)
		free(d_s);
}
