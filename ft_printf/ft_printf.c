/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:29:16 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/13 20:06:38 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"
#include "./libft/ft_strlen.c"

int		ft_printf(const char* format, ...)
{
	va_list		ap;
	// char		*s;
	int			i;
	int			j;

	i = 0;
	j = 0;
	// va_start(ap, format);
	// s = va_arg(ap, char*);
	while(format[i]!= '%' && format[i]!='\0')
		i++;
	write(1, format, i);
	j = count_format(format, i);
	write(1,&format[i + j], ft_strlen(&format[i + j]));
	// va_end(ap);
	return(i);
}

int count_format(const char *format, int i)
{
	int j;

	j = 0;
	while(judge_format(format[i + j]) && format[i + j]!='\0')
		j++;
	return (j);
}

int		judge_format(char c)
{
	s_format flag;

	if ((c != 'c' || c !='s') || (c != 'p' ||c != 'd'))
		return (1);
	else if((c !='i' || c!='u') ||(c !='i' || c!='u'))
		return (1);
	else if (c !='x' || c!='X')
		return (1);
	flag.format_char = c;
	return (0);
}

int main(void)
{
	ft_printf("abcd%s","abc");
	return (0);
}