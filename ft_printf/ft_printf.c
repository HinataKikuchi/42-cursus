/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:29:16 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/22 16:58:11 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/ft_strlen.c"
#include "./libft/ft_substr.c"
#include "./libft/ft_calloc.c"
#include "./libft/ft_atoi.c"
#include "./libft/ft_bzero.c"
#include "./libft/ft_isdigit.c"
#include "./libft/ft_strchr.c"
#include "get_value.c"
#include "ft_write_char.c"
#include "ft_write_string.c"


/*
** int		ft_printf(const char *format, ...)
** write characters till '%' appears
*/

int		ft_printf(const char *format, ...)
{
	va_list		ap;
	int			i;
	s_format	x;

	i = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			x = deal_format(format, &i, ap);
			write_target(ap, x);
		}
		write(1, &format[i], 1);
		i++;
	}
	return(i);
}

void	write_target(va_list ap, s_format x)
{
	if (x.format_char == 'c')
		write_character(ap, x);
	else if (x.format_char == 's')
		write_string(ap, x);
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

s_format deal_format(const char *format, int *i, va_list ap)
{
	int			j;
	s_format	x;

	j = 0;
	*i += 1;
	x.flagment = malloc(3 * sizeof(char));
	while (judge_format(format[*i + j]))
	{
		if (format[*i + j] == '-' || (format[*i + j] == '0'))
			x.flagment[j] = format[*i + j];
		else if (format[*i + j] == '*')
			x.min = va_arg(ap, int);
		j++;
	}
	x.format_char = format[*i + j];
	x.format_num = ft_substr(format, *i + ft_strlen(x.flagment), j - ft_strlen(x.flagment));
	*i = *i + j + 1;
	return (x);
}

/*
** int		judge_format(char c)
** judge the format of c
*/

int		judge_format(char c)
{

	if ((c == 'c' || c =='s') || (c == 'p' || c == 'd'))
		return (0);
	else if((c == 'i' || c =='u') || (c =='i' || c =='u'))
		return (0);
	else if (c == 'x' || c == 'X')
		return (0);
	else if (c == '%')
	{
		
	}
	return (1);
}

int main (void)
{
	char *s = "Hinata";
	printf("__STRING__TEST__\n");
	printf("%%s\n");
	printf("[%s]\n",s);
	ft_printf("[%s]\n",s);
	printf("%%3s\n");
	printf("[%3s]\n",s);
	ft_printf("[%3s]\n",s);
	printf("%%.3s\n");
	printf("[%.3s]\n",s);
	ft_printf("[%.3s]\n",s);
	printf("[%%3.3s]\n");
	printf("[%3.3s]\n",s);
	ft_printf("[%3.3s]\n",s);
	printf("[%%-3s]\n");
	printf("[%-3s]\n",s);
	ft_printf("[%-3s]\n",s);
	printf("[%%-.3s]\n");
	printf("[%-.3s]\n",s);
	ft_printf("[%-.3s]\n",s);
	printf("printf(\"[%%-3.3s]\",s);\n");
	printf("[%-3.3s]\n",s);
	ft_printf("[%-3.3s]\n",s);
	printf("printf(\"[%%03s]\",s);\n");
	printf("[%03s]\n",s);
	ft_printf("[%03s]\n",s);
	printf("printf(\"[%%0.3s]\",s);\n");
	printf("[%0.3s]\n",s);
	ft_printf("[%0.3s]\n",s);
	printf("printf(\"[%%.03s]\",s);\n");
	printf("[%.03s]\n",s);
	ft_printf("[%.03s]\n",s);
	printf("printf(\"[%%03.03s]\",s);\n");
	printf("[%03.03s]\n",s);
	ft_printf("[%03.03s]\n",s);
	printf("\n\n");
	printf("printf(\"[%%7s]\");\n");
	printf("[%7s]\n",s);
	ft_printf("[%7s]\n",s);
	printf("printf(\"[%%.7s]\",s);\n");
	printf("[%.7s]\n",s);
	ft_printf("[%.7s]\n",s);
	printf("printf(\"[%%7.7s]\",s);)");
	printf("[%7.7s]\n",s);
	ft_printf("[%7.7s]\n",s);
	ft_printf("[%7.7s]\n",s);
	printf("printf(\"[%%-7s]\",s);\n");
	printf("[%-7s]\n",s);
	ft_printf("[%-7s]\n",s);
	printf("printf(\"[%%-.7s]\",s);\n");
	printf("[%-.7s]\n",s);
	ft_printf("[%-.7s]\n",s);
	printf("printf(\"[%%-7.7s]\",s);\n");
	printf("[%-7.7s]\n",s);
	ft_printf("[%-7.7s]\n",s);
	printf("printf(\"[%%07s]\",s);\n");
	printf("[%07s]\n",s);
	ft_printf("[%07s]\n",s);
	printf("printf(\"[%%0.7s]\",s);\n");
	printf("[%0.7s]\n",s);
	ft_printf("[%0.7s]\n",s);
	printf("printf(\"[%%.07s]\",s);\n");
	printf("[%.07s]\n",s);
	ft_printf("[%.07s]\n",s);
	printf("printf(\"[%%07.07s]\",s);\n");
	printf("[%07.07s]\n",s);
	ft_printf("[%07.07s]\n",s);
}
