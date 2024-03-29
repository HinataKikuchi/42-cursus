/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_digit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:14:17 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/09 13:05:39 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
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
#include "./format_deal.c"
#include "./libft/ft_split.c"
#include "./libft/ft_strtrim.c"
#include "./ft_utoa.c"
#include <limits.h>


void	main(void)
{
	int d = 420000;
	printf("printf(\"[%%d]\",d)\n");
	printf("or_res = %d\n", printf("[%d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%d]\n",d));
	printf("printf(\"[%%1d]\",d)\n");
	printf("or_res = %d\n",printf("[%1d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%1d]\n",d));
	printf("printf(\"[%%.1d]\",d)\n");
	printf("or_res = %d\n",printf("[%.1d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%.1d]\n",d));
	printf("printf(\"[%%1.1d]\",d)\n");
	printf("or_res = %d\n",printf("[%1.1d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%1.1d]\n",d));
	printf("printf(\"[%%01d]\",d)\n");
	printf("or_res = %d\n",printf("[%01d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%01d]\n",d));
	printf("printf(\"[%%.01d]\",d)\n");
	printf("or_res = %d\n",printf("[%.01d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%.01d]\n",d));
	printf("printf(\"[%%01.01d]\",d)\n");
	printf("or_res = %d\n",printf("[%01.01d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%01.01d]\n",d));
	printf("printf(\"[%%-d]\",d)\n");
	printf("or_res = %d\n",printf("[%-d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%-d]\n",d));
	printf("printf(\"[%%-1d]\",d)\n");
	printf("or_res = %d\n",printf("[%-1d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%-1d]\n",d));
	printf("printf(\"[%%-.1d]\",d)\n");
	printf("or_res = %d\n",printf("[%-.1d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%-.1d]\n",d));
	printf("printf(\"[%%-1.1d]\",d)\n");
	printf("or_res = %d\n",printf("[%-1.1d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%-1.1d]\n",d));
	printf("printf(\"[%%-01d]\",d)\n");
	printf("or_res = %d\n",printf("[%-01d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%-01d]\n",d));
	printf("printf(\"[%%-.01d]\",d)\n");
	printf("or_res = %d\n",printf("[%-.01d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%-.01d]\n",d));
	printf("printf(\"[%%-01.01d]\",d)\n");
	printf("or_res = %d\n",printf("[%-01.01d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%-01.01d]\n",d));

	printf("\n\nprintf(\"[%%10d]\",d)\n");
	printf("or_res = %d\n",printf("[%10d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%10d]\n",d));
	printf("printf(\"[%%.10d]\",d)\n");
	printf("or_res = %d\n",printf("[%.10d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%.10d]\n",d));
	printf("printf(\"[%%10.10d]\",d)\n");
	printf("or_res = %d\n",printf("[%10.10d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%10.10d]\n",d));
	printf("printf(\"[%%010d]\",d)\n");
	printf("or_res = %d\n",printf("[%010d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%010d]\n",d));
	printf("printf(\"[%%.010d]\",d)\n");
	printf("or_res = %d\n",printf("[%.010d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%.010d]\n",d));
	printf("printf(\"[%%010.010d]\",d)\n");
	printf("or_res = %d\n",printf("[%010.010d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%010.010d]\n",d));
	printf("printf(\"[%%-10d]\",d)\n");
	printf("or_res = %d\n",printf("[%-10d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%-10d]\n",d));
	printf("printf(\"[%%-.10d]\",d)\n");
	printf("or_res = %d\n",printf("[%-.10d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%-.10d]\n",d));
	printf("printf(\"[%%-10.10d]\",d)\n");
	printf("or_res = %d\n",printf("[%-10.10d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%-10.10d]\n",d));
	printf("printf(\"[%%-010d]\",d)\n");
	printf("or_res = %d\n",printf("[%-010d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%-010d]\n",d));
	printf("printf(\"[%%-.010d]\",d)\n");
	printf("or_res = %d\n",printf("[%-.010d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%-.010d]\n",d));
	printf("printf(\"[%%-010.010d]\",d)\n");
	printf("or_res = %d\n",printf("[%-010.010d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%-010.010d]\n",d));

	printf("\n\nprintf(\"[%%10.1d]\",d)\n");
	printf("or_res = %d\n",printf("[%10.1d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%10.1d]\n",d));
	printf("printf(\"[%%10.7d]\",d)\n");
	printf("or_res = %d\n",printf("[%10.7d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%10.7d]\n",d));
	printf("printf(\"[%%7.10d]\",d)\n");
	printf("or_res = %d\n",printf("[%7.10d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%7.10d]\n",d));
	printf("printf(\"[%%010.07d]\",d)\n");
	printf("or_res = %d\n",printf("[%010.07d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%010.07d]\n",d));
	printf("printf(\"[%%07.010d]\",d)\n");
	printf("or_res = %d\n",printf("[%07.010d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%07.010d]\n",d));
	printf("printf(\"[%%020.11d]\",d)\n");
	printf("or_res = %d\n",printf("[%020.11d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%020.11d]\n",d));
	printf("printf(\"[%%-020.11d]\",d)\n");
	printf("or_res = %d\n",printf("[%-020.11d]\n",d));
	printf("ft_res = %d\n",ft_printf("[%-020.11d]\n",d));
	printf("printf(\"[%%.30d]\",-1)\n");
	printf("or_res = %d\n",printf("[%.30d]",-1));
	printf("ft_res = %d\n",ft_printf("[%.30d]",-1));

	d = 12345;
	printf("or_res = %d\n",printf("\n__DIGIT__\n"));
	printf("\n[%%10.6d]\n");
	printf("or_res = %d\n",printf("[%10.6d]\n", d));
	printf("ft_res = %d\n",ft_printf("[%10.6d]\n",d));
	printf("\n[%%10.6d]\n");
	printf("or_res = %d\n",printf("[%10.6d]\n", (-1) * d));
	printf("ft_res = %d\n",ft_printf("[%10.6d]\n", (-1) * d));
	printf("or_res = %d\n",printf("[%-10.7d]\n", (-1) * d));
	printf("ft_res = %d\n",ft_printf("[%-10.7d]\n", (-1) * d));
	printf("or_res = %d\n",printf("[%-8.7d]\n", d));
	printf("ft_res = %d\n",ft_printf("[%-8.7d]\n", d));
	printf("or_res = %d\n",printf("[%-8.7d]\n", (-1) * d));
	printf("ft_res = %d\n",ft_printf("[%-8.7d]\n", (-1) * d));

	d = 0;
	printf("[%%.d]=[%.d]\n",d);
	printf("[%%.0d]=[%.0d]\n",d);
	printf("[%%0.d]=[%0.d]\n",d);
	printf("[%%0.0d]=[%0.0d]\n",d);
	ft_printf("[%0d]\n",d);
	ft_printf("[%.d]\n",d);
	ft_printf("[%.0d]\n",d);
	ft_printf("[%0.d]\n",d);
	ft_printf("[%0.0d]\n",d);

	unsigned int u = 4294967295;
	printf("\n__UNSIGNED__INT__\n");
	printf("or_res = %d\n",printf("[%d]\n",u));
	printf("ft_res = %d\n",ft_printf("[%d]\n",u));

}