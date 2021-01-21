/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:24:24 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/21 17:58:23 by hkikuchi         ###   ########.fr       */
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

static void	write_string_left_justified(char *s, s_format x)
{
	size_t		i;

	i = 0;
	write(1, s, ft_strlen(s));
	while(i < (size_t)x.min - ft_strlen(s))
	{
		write(1, " ", 1);
		i++;
	}
}

static void	write_string_with_zero(char *s, s_format x)
{
	size_t		i;

	i = 0;
	write(1, s, ft_strlen(s));
	while(i < (size_t)x.min - ft_strlen(s))
	{
		write(1, "0", 1);
		i++;
	}	
}

void		write_string(va_list ap, s_format x)
{
	char	*s;

	s = va_arg(ap, char*);
	get_min_field(&x);
	if ((size_t)x.ac < ft_strlen(s))
		write_string_with_ac(s, x);
	else if(x.min)
	{
		if (ft_strchr(x.flagment, '-'))
			write_string_left_justified(s, x);
		else if(ft_strchr(x.flagment, '0'))
			write_string_with_zero(s, x);
	}
}