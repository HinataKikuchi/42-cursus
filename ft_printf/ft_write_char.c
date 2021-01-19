/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:24:21 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/19 22:51:31 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	write_character(va_list ap, s_format x)
{
	char	c;
	int		min_field;

	c = va_arg(ap, char);
	min_field = 0;
	if (x.format_num)
		min_field = get_min_field(x);
	if (ft_strchr(x.format_char, '-'))
		write_left_justified(min_field, c);
	else if (ft_strchar(x.format_char, '0'))
		fill_zero(min_field, c);
	else
	{
		
	}
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