/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:29:16 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/01 19:18:43 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** int		ft_printf(const char *format, ...)
** write characters till '%' appears
*/

int			ft_printf(const char *format, ...)
{
	va_list		ap;
	int			i;
	s_format	x;

	i = 0;
	va_start(ap, format);
	while (format[i] != '\0' && (size_t)i <= ft_strlen(format))
	{
		if (format[i] == '%')
		{
			x = deal_format(format, &i, ap);
			write_target(ap, x);
		}
		write(1, &format[i], 1);
		i++;
	}
	free(x.flagment);
	free(x.format_num);
	return (i);
}

void		write_target(va_list ap, s_format x)
{
	if (x.format_char == 'c')
		write_character(ap, x);
	else if (x.format_char == 's')
		write_string(ap, x);
	else if (x.format_char == 'p')
		write_pointer(ap, x);
	else if (x.format_char == 'd' || x.format_char == 'i')
		write_digit(ap, x);
	else if (x.format_char == 'u')
		write_unsigned(ap, x);
	else if (x.format_char == 'x')
		write_small_hex(ap, x);
	else if (x.format_char == 'X')
		write_large_hex(ap, x);
}

/*
**void deal_format(const char *format, va_list ap, int i)
** save the formats to s_format
*/

s_format	deal_format(const char *format, int *i, va_list ap)
{
	int			j;
	s_format	x;

	j = 0;
	*i += 1;
	x.flagment = ft_calloc(3, sizeof(char));
	while (judge_format(format[*i + j]))
	{
		if (format[*i + j] == '-' || (format[*i + j] == '0'))
			x.flagment[j] = format[*i + j];
		else if (format[*i + j] == '*')
		{
			if (format[*i + j + 1] == '.')
				x.min = va_arg(ap, int);
			else
				x.ac = va_arg(ap, int);
		}
		j++;
	}
	x.flagment[j + 1] = '\0';
	x.format_char = format[*i + j];
	x.format_num = ft_substr(format, *i + \
		ft_strlen(x.flagment), j - ft_strlen(x.flagment));
	*i = *i + j + 1;
	return (x);
}

/*
** int		judge_format(char c)
** judge the format of c
*/

int			judge_format(char c)
{
	if ((c == 'c' || c == 's') || (c == 'p' || c == 'd'))
		return (0);
	else if ((c == 'i' || c == 'u') || (c == 'i' || c == 'u'))
		return (0);
	else if (c == 'x' || c == 'X')
		return (0);
	else if (c == '%')
	{
	}
	return (1);
}
