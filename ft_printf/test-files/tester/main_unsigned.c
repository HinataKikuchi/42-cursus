/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_unsigned.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 13:07:12 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/09 13:03:54 by hkikuchi         ###   ########.fr       */
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


int	main(void)
{
	unsigned int d = 4147483650;
	int or ;
	int ft;
	printf("printf(\"[%%u]\",d)\n");
	or = printf("[%u]\n", d);
	ft = ft_printf("[%u]\n", d);
	printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	printf("printf(\"[%%3u]\",d)\n");
	or = printf("[%3u]\n", d);
	ft = ft_printf("[%3u]\n", d);
	printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	printf("printf(\"[%%.3u]\",d)\n");
	or = printf("[%.3u]\n", d);
	ft = ft_printf("[%.3u]\n", d);
	printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	printf("printf(\"[%%.11u]\",d)\n");
	or = printf("[%.11u]\n", d);
	ft = ft_printf("[%.11u]\n", d);
	printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	printf("printf(\"[%%.11u]\",d)\n");
	or = printf("[%.11u]\n", d);
	ft = ft_printf("[%.11u]\n", d);
	printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	printf("printf(\"[%%020.11u]\",d)\n");
	or = printf("[%020.11u]\n", d);
	ft = ft_printf("[%020.11u]\n", d);
	printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	unsigned int u = 12345678910;
	printf("__UNSIGNED_TEST__\n");
	or = printf("[%%20.10u]=[%20.10u]\n", u);
	ft = ft_printf("[%%20.10u]=[%20.10u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	or = printf("[%%20.3u]=[%20.3u]\n", u);
	ft = ft_printf("[%%20.3u]=[%20.3u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	or = printf("[%%3.20u]=[%3.20u]\n", u);
	ft = ft_printf("[%%3.20u]=[%3.20u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	or = printf("[%%.3u]=[%.3u]\n", u);
	ft = ft_printf("[%%.3u]=[%.3u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	or = printf("[%%20.u]=[%20.u]\n", u);
	ft = ft_printf("[%%20.u]=[%20.u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	printf("__ZERO_FLAG_TEST__\n");
	or = printf("[%%020.10u]=[%020.10u]\n", u);
	ft = ft_printf("[%%020.10u]=[%020.10u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	or = printf("[%%020.3u]=[%020.3u]\n", u);
	ft = ft_printf("[%%020.3u]=[%020.3u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	or = printf("[%%03.20u]=[%03.20u]\n", u);
	ft = ft_printf("[%%03.20u]=[%03.20u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	or = printf("[%%0.3u]=[%0.3u]\n", u);
	ft = ft_printf("[%%0.3u]=[%0.3u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	or = printf("[%%020.u]=[%020.u]\n", u);
	ft = ft_printf("[%%020.u]=[%020.u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	or = printf("[%%020u]=[%020u]\n", u);
	ft = ft_printf("[%%020u]=[%020u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	printf("__MINUS_FLAG_TEST__\n");
	or = printf("[%%-20.10u]=[%-20.10u]\n", u);
	ft = ft_printf("[%%-20.10u]=[%-20.10u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	or = printf("[%%-20.3u]=[%-20.3u]\n", u);
	ft = ft_printf("[%%-20.3u]=[%-20.3u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	or = printf("[%%-3.20u]=[%-3.20u]\n", u);
	ft = ft_printf("[%%-3.20u]=[%-3.20u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	or = printf("[%%-.3u]=[%-.3u]\n", u);
	ft = ft_printf("[%%-.3u]=[%-.3u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	or = printf("[%%-20.u]=[%-20.u]\n", u);
	ft = ft_printf("[%%-20.u]=[%-20.u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	or = printf("[%%-20u]=[%-20u]\n", u);
	ft = ft_printf("[%%-20u]=[%-20u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	printf("__ZERO_AND_MINUS_FLAG_TEST__\n");
	or = printf("[%%-020.10u]=[%-020.10u]\n", u);
	ft = ft_printf("[%%-020.10u]=[%-020.10u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	or = printf("[%%-020.3u]=[%-020.3u]\n", u);
	ft = ft_printf("[%%-020.3u]=[%-020.3u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	or = printf("[%%-03.20u]=[%-03.20u]\n", u);
	ft = ft_printf("[%%-03.20u]=[%-03.20u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	or = printf("[%%-0.3u]=[%-0.3u]\n", u);
	ft = ft_printf("[%%-0.3u]=[%-0.3u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	or = printf("[%%-020.u]=[%-020.u]\n", u);
	ft = ft_printf("[%%-020.u]=[%-020.u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	or = printf("[%%-020u]=[%-020u]\n", u);
	ft = ft = ft_printf("[%%-020u]=[%-020u]\n", u);
		printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
}