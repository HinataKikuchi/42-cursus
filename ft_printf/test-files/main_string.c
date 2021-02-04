/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:13:42 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/04 12:22:58 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"
#include "./libft/ft_strlen.c"
#include "./libft/ft_substr.c"
#include "./libft/ft_calloc.c"
#include "./libft/ft_atoi.c"
#include "./libft/ft_strlcpy.c"
#include "./libft/ft_itoa.c"
#include "./libft/ft_memcpy.c"
#include "./libft/ft_bzero.c"
#include "./libft/ft_isdigit.c"
#include "./libft/ft_strchr.c"
#include "./get_value.c"
#include "./ft_write_char.c"
#include "./ft_write_string.c"
#include "./ft_write_digit.c"
#include "./ft_write_sp_zero.c"
#include "./ft_printf.c"
#include "./ft_write_unsigned.c"
#include "./ft_write_small_hex.c"
#include "./ft_write_large_hex.c"
#include "./ft_write_pointer.c"
#include "./make_string.c"
#include "./calc_hex.c"
#include "./libft/ft_strdup.c"



void	main(void)
{
	char *s = "Hinata";
	printf("__STRING__TEST__\n");
	printf("%%s\n");
	printf("or_ret = %d\n",printf("[%s]\n",s));
	printf("ft_ret = %d\n",ft_printf("[%s]\n",s));
	printf("%%3s\n");
	printf("or_ret = %d\n",printf("[%3s]\n",s));
	printf("ft_ret = %d\n",ft_printf("[%3s]\n",s));
	printf("%%.3s\n");
	printf("or_ret = %d\n",printf("[%.3s]\n",s));
	printf("ft_ret = %d\n",ft_printf("[%.3s]\n",s));
	printf("[%%3.3s]\n");
	printf("or_ret = %d\n",printf("[%3.3s]\n",s));
	printf("ft_ret = %d\n",ft_printf("[%3.3s]\n",s));
	printf("[%%-3s]\n");
	printf("or_ret = %d\n",printf("[%-3s]\n",s));
	printf("ft_ret = %d\n",ft_printf("[%-3s]\n",s));
	printf("[%%-.3s]\n");
	printf("or_ret = %d\n",printf("[%-.3s]\n",s));
	printf("ft_ret = %d\n",ft_printf("[%-.3s]\n",s));
	printf("printf(\"[%%-3.3s]\",s);\n");
	printf("or_ret = %d\n",printf("[%-3.3s]\n",s));
	printf("ft_ret = %d\n",ft_printf("[%-3.3s]\n",s));
	printf("printf(\"[%%03s]\",s);\n");
	printf("or_ret = %d\n",printf("[%03s]\n",s));
	printf("ft_ret = %d\n",ft_printf("[%03s]\n",s));
	printf("printf(\"[%%0.3s]\",s);\n");
	printf("or_ret = %d\n",printf("[%0.3s]\n",s));
	printf("ft_ret = %d\n",ft_printf("[%0.3s]\n",s));
	printf("printf(\"[%%.03s]\",s);\n");
	printf("or_ret = %d\n",printf("[%.03s]\n",s));
	printf("ft_ret = %d\n",ft_printf("[%.03s]\n",s));
	printf("printf(\"[%%03.03s]\",s);\n");
	printf("or_ret = %d\n",printf("[%03.03s]\n",s));
	printf("ft_ret = %d\n",ft_printf("[%03.03s]\n",s));
	printf("\n\n");
	printf("printf(\"this[%%7s]\");\n");
	printf("or_ret = %d\n",printf("[%7s]\n",s));
	printf("ft_ret = %d\n",ft_printf("[%7s]\n",s));
	printf("printf(\"[%%.7s]\",s);\n");
	printf("or_ret = %d\n",printf("[%.7s]\n",s));
	printf("ft_ret = %d\n",ft_printf("[%.7s]\n",s));
	printf("printf(\"[%%7.7s]\",s);)");
	printf("or_ret = %d\n",printf("[%7.7s]\n",s));
	printf("ft_ret = %d\n",ft_printf("[%7.7s]\n",s));
	printf("ft_ret = %d\n",ft_printf("[%7.7s]\n",s));
	printf("printf(\"[%%-7s]\",s);\n");
	printf("or_ret = %d\n",printf("[%-7s]\n",s));
	printf("ft_ret = %d\n",ft_printf("[%-7s]\n",s));
	printf("printf(\"[%%-.7s]\",s);\n");
	printf("or_ret = %d\n",printf("[%-.7s]\n",s));
	printf("ft_ret = %d\n",ft_printf("[%-.7s]\n",s));
	printf("printf(\"[%%-7.7s]\",s);\n");
	printf("or_ret = %d\n",printf("[%-7.7s]\n",s));
	printf("ft_ret = %d\n",ft_printf("[%-7.7s]\n",s));
	printf("printf(\"[%%07s]\",s);\n");
	printf("or_ret = %d\n",printf("[%07s]\n",s));
	printf("ft_ret = %d\n",ft_printf("[%07s]\n",s));
	printf("printf(\"[%%0.7s]\",s);\n");
	printf("or_ret = %d\n",printf("[%0.7s]\n",s));
	printf("ft_ret = %d\n",ft_printf("[%0.7s]\n",s));
	printf("printf(\"[%%.07s]\",s);\n");
	printf("or_ret = %d\n",printf("[%.07s]\n",s));
	printf("ft_ret = %d\n",ft_printf("[%.07s]\n",s));
	printf("printf(\"[%%07.07s]\",s);\n");
	printf("or_ret = %d\n",printf("[%07.07s]\n",s));
	printf("ft_ret = %d\n",ft_printf("[%07.07s]\n",s));
	printf("\n\nNULL_TEST\n");
	printf("or_ret = %d\n",printf("[%s]\n",NULL));
	printf("ft_ret = %d\n",ft_printf("[%s]\n",NULL));
	printf("or_ret = %d\n",printf("[%.3s]\n","(nu"));
	printf("ft_ret = %d\n",ft_printf("[%.3s]\n",NULL));

	printf("or_ret = %d\n",printf("[%.3s], [%s]\n","(nu",s));
	printf("ft_ret = %d\n",ft_printf("[%.3s], [%s]\n",NULL,s));
}
