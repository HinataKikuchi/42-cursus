/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:29:16 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/11 12:55:22 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** int		ft_printf(const char *format, ...)
** write characters till '%' appears
*/

static int	ft_printf_percent(const char *format, int *i, va_list ap)
{
	t_format x;

	x = format_deal(format, i, ap);
	if (x.format_char != '\0')
	{
		write_target(ap, &x);
		safe_free(x.format_num);
	}
	return (x.word_count);
}

int			ft_printf(const char *format, ...)
{
	int			i;
	int			j;
	va_list		ap;
	t_format	x;

	i = 0;
	j = 0;
	va_start(ap, format);
	while (format[i] != '\0' && (size_t)i <= ft_strlen(format))
	{
		if (format[i] == '%')
			j += ft_printf_percent(format, &i, ap);
		else
		{
			if ((size_t)i < ft_strlen(format))
				j++;
			i += write(1, &format[i], 1);
		}
	}
	va_end(ap);
	return (j);
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
		return (0);
	return (1);
}

void		write_target(va_list ap, t_format *x)
{
	x->word_count = 0;
	if (x->format_char == 'c')
		write_character(ap, x);
	else if (x->format_char == 's')
		write_string(ap, x);
	else if (x->format_char == 'p')
		write_pointer(ap, x);
	else if (x->format_char == 'd' || x->format_char == 'i')
		write_digit(ap, x);
	else if (x->format_char == 'u')
		write_unsigned(ap, x);
	else if (x->format_char == 'x')
		write_small_hex(ap, x);
	else if (x->format_char == 'X')
		write_large_hex(ap, x);
	else if (x->format_char == '%')
		write_character(ap, x);
}

/*
** int		ft_printf(const char *format, ...)
** write characters till '%' appears
*/

int			ft_isnum(char c)
{
	if ('1' <= c && c <= '9')
		return (1);
	else
		return (0);
}
