/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:29:16 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/19 18:57:21 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"
#include "./libft/ft_strlen.c"
#include "./libft/ft_substr.c"
#include "./libft/ft_calloc.c"
#include "./libft/ft_atoi.c"
#include "./libft/ft_bzero.c"
#include "./libft/ft_isdigit.c"

/*
** int		ft_printf(const char *format, ...)
** write characters till '%' appears
*/

int		ft_printf(const char *format, ...)
{
	va_list		ap;
	int			i;

	i = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			write_target(format, ap, deal_format(format, &i));
		write(1, &format[i], 1);
		i++;
	}
	return(i);
}

void	write_target(const char *target, va_list ap, s_format x)
{
	if (x.format_char == 'c')
		write_character(ap, x);
	else if (x.format_char == 's')
	{

	}
	else if (x.format_char == 'p')
	{

	}
	else if (x.format_char == 'd')
	{

	}
	else if (x.format_char == 'i')
	{

	}
	else if (x.format_char == 'u')
	{

	}
	else if (x.format_char == 'x')
	{

	}
	else if (x.format_char == 'X')
	{

	}
}

/*
**void deal_format(const char *format, va_list ap, int i)
** save the formats to s_format
*/

s_format deal_format(const char *format, int *i)
{
	int			j;
	char		*buf;
	s_format	x;

	j = 0;
	*i += 1;
	x.flagment = malloc(3 * sizeof(char));
	while (judge_format(format[*i + j]))
	{
		if (format[*i + j] == '-' || (format[*i + j] == '0' ||format[i + j] == '*'))
			x.flagment[j] = format[*i + j];
		j++;
	}
	x.format_char = format[*i + j];
	x.format_num = ft_substr(format, *i + ft_strlen(x.flagment), j - ft_strlen(x.flagment));
	*i += j;
	return (x);
}

/*
** int		judge_format(char c)
** judge the format of c
*/

int		judge_format(char c)
{
	s_format flag;

	if ((c == 'c' || c =='s') || (c == 'p' || c == 'd'))
		return (0);
	else if((c == 'i' || c =='u') || (c =='i' || c =='u'))
		return (0);
	else if (c == 'x' || c == 'X')
		return (0);
	else if (c == '%')
	flag.format_char = c;
	return (1);
}

int main(void)
{
	ft_printf("%-0*.5c\n",'c');
	return (0);
}