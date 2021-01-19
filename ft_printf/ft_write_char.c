/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:24:21 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/19 19:58:52 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	write_character(va_list ap, s_format x)
{
	char	c;
	int		i;

	c = va_arg(ap, char);
	i = 0;
	if (x.format_num)
		i = get_min_field(x);
	if (ft_strchr(x.format_char, '-'))
	{
		write(1, &c, 1);
		while (i > 0)
		{
			write(1, " ", 1);
			i--;
		}
	}
	else if (ft_strchar(x.format_char, '0'))
	{
	}
	else
	{
		
	}
}
