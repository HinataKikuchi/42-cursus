/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 19:39:34 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/11 19:58:10 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

void		deal_ilegular(t_format *x)
{
	if (x->min < 0)
	{
		x->minus_flag = 1;
		x->min *= (-1);
	}
	if (x->ac < 0)
	{
		x->ac = 0;
		safe_free(x->format_num);
		x->format_num = ft_strdup("");
	}
}

static int		get_number(char *format_num,\
				unsigned int start, size_t len, t_format *x)
{
	char	*tmp;
	int		res;

	res = 0;
	tmp = ft_substr(format_num, start, len);
	if (!tmp)
		x->word_count = -1;
	res = ft_atoi(tmp);
	safe_free(tmp);
	return (res);
}
