/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:24:24 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/29 16:40:46 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	write_string_with_ac(char *s, s_format x)
{
	int		i;

	i = 0;
	while (i < x.ac)
	{
		write(1, &s[i], 1);
		i++;
	}
}

void		write_string(va_list ap, s_format x)
{
	char	*s;

	s = va_arg(ap, char*);
	get_min_field(&x);
	if ((size_t)x.ac < ft_strlen(s) && x.ac)
		write_string_with_ac(s, x);
	else if(x.min)
	{
		if (ft_strchr(x.flagment, '-'))
		{
			write(1, s, ft_strlen(s));
			write_blank(x.min - (int)ft_strlen(s));
			return ;
		}
		else if (ft_strchr(x.flagment, '0'))
			write_zero(x.min - (int)ft_strlen(s));
		else
			write_blank(x.min - (int)ft_strlen(s));
		write(1, s, ft_strlen(s));
	}
	else
		write(1, s, ft_strlen(s));
}

