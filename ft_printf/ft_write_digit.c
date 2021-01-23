/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:25:05 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/23 16:39:10 by hkikuchi         ###   ########.fr       */
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
	if (x.ac)
		write_with_accuration(d_s, x);
	else if (x.min)
		write_with_min(d_s, x);
	else
		write_num(d_s, x);
}

static void write_with_accuration(char *d_s, s_format x)
{
	size_t	d_s_len;

	d_s_len = ft_strlen(d_s);
	if (x.ac > d_s_len)
	{
		
	}
	
}

static void write_with_min(int d, s_format x)
{
	
}

static void write_num(int d, s_format x)
{
	
}