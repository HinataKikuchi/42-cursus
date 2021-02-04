/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:29:16 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/04 15:43:13 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** int		ft_printf(const char *format, ...)
** write characters till '%' appears
*/

static void		free_struct(t_format *x)
{
	free(x->flagment);
	free(x->format_num);
}

int			ft_printf(const char *format, ...)
{
	int			i;
	int			j;
	va_list		ap;
	t_format	x;

	i = 0;
	j = 0;
	x.word_count = 0;
	va_start(ap, format);
	while (format[i] != '\0' && (size_t)i <= ft_strlen(format))
	{
		if (format[i] == '%')
		{
			x = deal_format(format, &i);
			write_target(ap, &x);
			j+=x.word_count;
		}
		write(1, &format[i], 1);
		if (i < ft_strlen(format))
			j++;
		i++;
	}
	if (ft_strchr(format, '%'))
		free_struct(&x);
	return (j);
}

void		write_target(va_list ap, t_format *x)
{
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
**void deal_format(const char *format, va_list ap, int i)
** save the formats to t_format
*/

t_format	deal_format(const char *format, int *i)
{
	int			j;
	t_format	x;

	j = 0;
	*i += 1;
	x.flagment = ft_calloc(3, sizeof(char));
	while (judge_format(format[*i + j]))
	{
		if (format[*i + j] == '-' || (format[*i + j] == '0'))
			x.flagment[j] = format[*i + j];
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
		return (0);
	return (1);
}
