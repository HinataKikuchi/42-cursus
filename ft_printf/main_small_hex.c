/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_small_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:51:22 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/04 14:18:20 by hkikuchi         ###   ########.fr       */
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
	unsigned int	h = 4294967295;

	printf("printf(\"[%%x]\",h)\n");
	printf("or_res = %d\n",printf("[%x]\n",h));
	printf("ft_res = %d\n",ft_printf("[%x]\n", h));
	printf("printf(\"[%%10x]\",h)\n");
	printf("or_res = %d\n",printf("[%10x]\n",h));
	printf("ft_res = %d\n",ft_printf("[%10x]\n",h));
	printf("printf(\"[%%.10x]\",h)");
	printf("or_res = %d\n",printf("[%.10x]\n",h));
	printf("ft_res = %d\n",ft_printf("[%.10x]\n",h));
	printf("printf(\"[%%20.10x]\",h)\n");
	printf("or_res = %d\n",printf("[%20.10x]\n",h));
	printf("ft_res = %d\n",ft_printf("[%20.10x]\n",h));
	printf("printf(\"[%%020.10x]\",h)\n");
	printf("or_res = %d\n",printf("[%020.10x]\n",h));
	printf("ft_res = %d\n",ft_printf("[%020.10x]\n",h));
	printf("printf(\"[%%-20.10x]\",h)\n");
	printf("or_res = %d\n",printf("[%-20.10x]\n",h));
	printf("ft_res = %d\n",ft_printf("[%-20.10x]\n",h));
}