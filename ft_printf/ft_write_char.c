/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:24:21 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/20 18:14:52 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	write_character(va_list ap, s_format x)
{
	char	c;
	int		min_field;

	c = va_arg(ap, int);
	get_min_field(&x);
	min_field = x.min;
	if (ft_strchr(x.flagment, '-'))
		write_left_justified(min_field, c);
	else if (ft_strchr(x.flagment, '0'))
		fill_zero(min_field, c);
	else
		fill_blanc(min_field, c);
}

void	write_left_justified(int min_field, char c)
{
	int	j;

	j = 1;
	write(1, &c, 1);
	while (j < min_field)
	{
		write(1, " ", 1);
		j++;
	}
}

void	fill_zero(int min_field, char c)
{
	int	j;

	j = 0;
	while(j < min_field - 1)
	{
		write(1, "0", 1);
		j++;
	}
	write(1, &c, 1);
}

void	fill_blanc(int min_field, char c)
{
	int	j;

	j = 0;
	while(j < min_field - 1)
	{
		write(1, " ", 1);
		j++;
	}
	write(1, &c, 1);
}