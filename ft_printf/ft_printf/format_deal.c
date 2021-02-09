/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_deal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 13:00:38 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/09 19:53:15 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	search_flag(t_format *x, int *i, const char *format)
{
	while (!ft_isnum(format[*i]) && judge_format(format[*i]) &&\
	format[*i] != '.' && format[*i] != '*')
	{
		if (format[*i] == '0')
			x->zero_flag = 1;
		else if (format[*i] == '-')
			x->minus_flag = 1;
		*i += 1;
	}
	return (*i);
}

static void	format_split(char *format_num, t_format *x, int dot_p, va_list ap)
{
	char	*tmp;

	if (dot_p == 0)
		x->min = 0;
	else if (format_num[0] == '*')
		x->min = va_arg(ap, int);
	else
	{
		tmp = ft_substr(format_num, 0, dot_p);
		x->min = ft_atoi(tmp);
		safe_free(tmp);
	}
	if ((size_t)dot_p == ft_strlen(format_num))
		x->ac = 0;
	else if (format_num[dot_p + 1] == '*')
		x->ac = va_arg(ap, int);
	else
	{
		tmp = ft_substr(format_num, dot_p + 1, ft_strlen(format_num)\
			- dot_p);
		x->ac = ft_atoi(tmp);
		safe_free(tmp);
	}
}

static int	get_format_num(const char *format, t_format *x, int *i, va_list ap)
{
	int		j;
	char	*tmp;

	j = 0;
	while (judge_format(format[*i + j]))
		j++;
	x->format_char = format[*i + j];
	x->format_num = ft_substr(format, *i, j);
	x->ac = 0;
	tmp = ft_strchr(x->format_num, '.');
	if (tmp)
		format_split(x->format_num, x, tmp - x->format_num, ap);
	else if (ft_strchr(x->format_num, '*'))
		x->min = va_arg(ap, int);
	else
		x->min = ft_atoi((const char *)x->format_num);
	return (++j);
}

t_format	format_deal(const char *format, int *i, va_list ap)
{
	t_format	x;

	*i += 1;
	if (!ft_isdigit(format[*i]) && judge_format(format[*i])\
	&& format[*i] != '*' && format[*i]!= '-' && format[*i] !='.')
	{
		x.format_char = '\0';
		return (x);
	}
	x.zero_flag = 0;
	x.minus_flag = 0;
	x.min = 0;
	x.ac = 0;
	*i = search_flag(&x, i, format);
	if (!judge_format(format[*i]))
	{
		x.min = 0;
		x.ac = 0;
		x.format_num = ft_strdup("\0");
		x.format_char = format[*i];
		*i += 1;
		return (x);
	}
	*i += get_format_num(format, &x, i, ap);
	if (x.min < 0)
	{
		x.minus_flag = 1;
		x.min *= (-1);
	}
	return (x);
}
