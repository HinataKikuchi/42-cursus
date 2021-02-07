/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:25:05 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/07 21:41:19 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	d_with_mflag(int d, char *d_s, t_format x, int ds_len)
{
	int	res;

	res = 0;
	if (d < 0)
	{
		ds_len -= 1;
		res += write(1, &d_s[0], 1);
	}
	if (x.ac > ds_len)
		res += write_zero(x.ac - (ds_len));
	if (d < 0)
		res += write(1, &d_s[1], ds_len);
	else
		res += write(1, d_s, ft_strlen(d_s));
	if (x.min > res)
		res += write_blank(x.min - res);
	return (res);
}

static int	write_d_min(int d, char *d_s, t_format x, int ds_len)
{
	int res;

	res = 0;
	if (!ft_strchr(x.format_num, '.') && x.zero_flag && d < 0)
		res += write(1, &d_s[0], 1);
	if (x.min > ds_len)
		res += (x.zero_flag) ? write_zero(x.min - ds_len) \
			: write_blank(x.min - ds_len);
	if (!ft_strchr(x.format_num, '.') && x.zero_flag && d < 0)
		res += write(1, &d_s[1], ds_len - 1);
	else
		res += write(1, d_s, ds_len);
	return (res);
}

static int	write_d_ac(int d, char *d_s, t_format x, int ds_len)
{
	int	res;

	res = 0;
	if (d < 0)
		res += write(1, &d_s[0], 1);
	res += (d < 0) ? write_zero(x.ac - (ds_len - 1)) :\
	write_zero(x.ac - ds_len);
	res += (d < 0) ? write(1, &d_s[1], ds_len - 1) :\
	write(1, d_s, ds_len);
	return(res);
}

static int	write_d(int d, char *d_s, t_format x, int ds_len)
{
	int res;

	res = 0;
	if ((x.ac > ds_len && d >= 0) || (x.ac > ds_len - 1 && d < 0))
	{
		if (x.min > x.ac)
		{
			res += (d < 0) ? write_blank(x.min - (x.ac + 1)) :\
				write_blank(x.min - x.ac);
			if (d < 0)
				res += write(1, &d_s[0], 1);
			res += (d < 0) ? write_zero(x.ac - (ds_len - 1)) :\
			write_zero(x.ac - ds_len);
			res += (d < 0) ? write(1, &d_s[1], ds_len - 1) :\
			write(1, d_s, ds_len);
		}
		else
			res += write_d_ac(d, d_s, x, ds_len);
	}
	else
		res += write_d_min(d, d_s, x, ds_len);
	return (res);
}

void		write_digit(va_list ap, t_format *x)
{
	int		d;
	char	*d_s;
	size_t	ds_len;

	d = va_arg(ap, int);
	if (!d && !x->min && !x->ac && ft_strchr(x->format_num, '.'))
	{
		x->word_count = 0;
		return ;
	}
	d_s = (x->ac == 0 && d == 0 && ft_strchr(x->format_num, '.'))\
		? ft_strdup("") : ft_itoa(d);
	ds_len = ft_strlen(d_s);
	if (x->minus_flag)
		x->word_count = d_with_mflag(d, d_s, *x, ds_len);
	else
		x->word_count = write_d(d, d_s, *x, ds_len);
	safe_free(d_s);
}
