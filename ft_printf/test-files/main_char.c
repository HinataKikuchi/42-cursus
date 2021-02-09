/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 17:14:36 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/09 13:04:53 by hkikuchi         ###   ########.fr       */
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
	char c = 'A';

	printf("__CHAR_FORMAT_TEST__\n\n");
	printf("printf(\"[%%c]\",c)\n");
	printf("or_ret = %d\n",printf("[%c]\n",c));
	printf("ft_ret = %d\n",ft_printf("[%c]\n",c));
	printf("printf(\"[%%7c]\",c)\n");
	printf("or_ret = %d\n",printf("[%7c]\n",c));
	printf("ft_ret = %d\n",ft_printf("[%7c]\n",c));
	printf("printf(\"%%.7c\",c)\n");
	printf("or_ret = %d\n",printf("[%.7c]\n",c));
	printf("ft_ret = %d\n",ft_printf("[%.7c]\n",c));
	printf("printf(\"[%%07c]\",c)\n");
	printf("or_ret = %d\n",printf("[%07c]\n",c));
	printf("ft_ret = %d\n",ft_printf("[%07c]\n",c));
	printf("printf(\"%%.07c\",c)\n");
	printf("or_ret = %d\n",	printf("[%.07c]\n",c));
	printf("ft_ret = %d\n",ft_printf("[%.07c]\n",c));
	printf("printf(\"[%%-7c]\",c)\n");
	printf("or_ret = %d\n",printf("[%-7c]\n",c));
	printf("ft_ret = %d\n",ft_printf("[%-7c]\n",c));
	printf("printf(\"%%-.7c\",c)\n");
	printf("or_ret = %d\n",printf("[%-.7c]\n",c));
	printf("ft_ret = %d\n",ft_printf("[%-.7c]\n",c));
	printf("printf(\"[%%-07c]\",c)\n");
	printf("or_ret = %d\n",printf("[%-07c]\n",c));
	printf("ft_ret = %d\n",ft_printf("[%-07c]\n",c));
	printf("printf(\"%%-.07c\",c)\n");
	printf("or_ret = %d\n",printf("[%-.07c]\n",c));
	printf("ft_ret = %d\n",ft_printf("[%-.07c]\n",c));
	
}
