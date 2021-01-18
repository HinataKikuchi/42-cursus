/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:29:16 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/18 16:21:31 by hkikuchi         ###   ########.fr       */
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
		{
			deal_format(format, ap, i + 1);
			
		}
		write(1, &format[i], 1);
		i++;
	}
	return(i);
}

void	write_target(const char *target, va_list ap, s_format x)
{
	
}

/*
**void deal_format(const char *format, va_list ap, int i)
** save the formats to s_format
*/

void deal_format(const char *format, va_list ap, int i)
{
	int	j;
	s_format x;

	j = 0;
	while (judge_format(format[i + j]))
	{
		if (format[i + j] == '-' || (format[i + j] == '0' ||format[i + j] == '*'))
			x.flagment[j] = format[i + j];
		if (format[i + j] == '.')
			x.min_field = ft_atoi(ft_substr(format,i + ft_strlen(x.flagment), j));
		j++;
	}
	x.format_char = format[i + j];
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
	ft_printf("abcd%s\n","abc");
	return (0);
}