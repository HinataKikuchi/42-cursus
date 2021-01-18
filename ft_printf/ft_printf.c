/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:29:16 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/18 15:49:16 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"
#include "./libft/ft_strlen.c"

int		ft_printf(const char *format, ...)
{
	va_list		ap;
	// char		*s;
	int			i;

	i = 0;
	va_start(ap, format);
	// s = va_arg(ap, char*);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			deal_format(format, ap, i);
		write(1, &format[i], 1);
		i++;
	}
	return(i);
}

void deal_format(const char *format, va_list ap, int i)
{
	int	j;
	s_format x;

	j = 0;
	while (judge_format(format[i + j]))
	{
		if (format[i + j] == '-' || (format[i + j] == '0' ||format[i + j] == '*'))
			x.flagment[j] = format[i + j];
		
		j++;
	}
	x.format_char = format[i + j];
}

int		judge_format(char c)
{
	s_format flag;

	if ((c == 'c' || c =='s') || (c == 'p' || c == 'd'))
		return (0);
	else if((c =='i' || c =='u') || (c =='i' || c =='u'))
		return (0);
	else if (c =='x' || c =='X')
		return (0);
	flag.format_char = c;
	return (1);
}

int main(void)
{
	ft_printf("abcd%s\n","abc");
	return (0);
}