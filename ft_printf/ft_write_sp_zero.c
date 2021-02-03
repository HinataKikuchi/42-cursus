/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_sp_zero.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 17:00:43 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/03 19:13:18 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_blank(int num)
{
	int		i;

	i = 0;
	while (i < num)
	{
		write(1, " ", 1);
		i++;
	}
}

void	write_zero(int num)
{
	int		i;

	i = 0;
	while (i < num)
	{
		write(1, "0", 1);
		i++;
	}
}

static void write_negative_with_zero(char *d_s, s_format x)
{
	write(1, "-", 1);
	write_zero(x.min - ft_strlen(d_s));
	write(1, &d_s[1], ft_strlen(d_s) - 1);
}

void	write_with_min(char *d_s, s_format x)
{
	if (ft_strchr(x.flagment, '-'))
	{
		write(1, d_s, ft_strlen(d_s));
		write_blank((size_t)x.min - ft_strlen(d_s));
		return ;
	}
	else if (ft_strchr(x.flagment, '0') && !x.ac && d_s[0] == '-')
		write_negative_with_zero(d_s, x);
	else if (ft_strchr(x.flagment, '0') && !x.ac)
		write_zero((size_t)x.min - ft_strlen(d_s));
	else
		write_blank((size_t)x.min - ft_strlen(d_s));
	if (d_s[0] != '-' || x.ac || !ft_strchr(x.flagment, '0'))
		write(1, d_s, ft_strlen(d_s));
}
