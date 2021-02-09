/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_small_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:51:22 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/09 13:34:49 by hkikuchi         ###   ########.fr       */
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
#include "./ft_write_char.c"
#include "./ft_write_string.c"
#include "./ft_write_digit.c"
#include "./ft_write_sp_zero.c"
#include "./ft_printf.c"
#include "./ft_write_unsigned.c"
#include "./ft_write_small_hex.c"
#include "./ft_write_large_hex.c"
#include "./ft_write_pointer.c"
#include "./calc_hex.c"
#include "./libft/ft_strdup.c"
#include "./format_deal.c"
#include "./libft/ft_split.c"
#include "./libft/ft_strtrim.c"
#include "./ft_utoa.c"
#include <limits.h>

int	main(void)
{
	unsigned int	h = 4294967295;
	int ft;
	int or;

	printf("printf(\"[%%x]\",h)\n");
	or = printf("[%x]\n", h);
	ft = ft_printf("[%x]\n", h);
	printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	printf("printf(\"[%%10x]\",h)\n");
	or = printf("[%10x]\n", h);
	ft = ft_printf("[%10x]\n", h);
	printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	printf("printf(\"[%%.10x]\",h)");
	or = printf("[%.10x]\n", h);
	ft = ft_printf("[%.10x]\n", h);
	printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	printf("printf(\"[%%20.10x]\",h)\n");
	or = printf("[%20.10x]\n", h);
	ft = ft_printf("[%20.10x]\n", h);
	printf("or = %d\nft = %d\n", or, ft);
	if (or != ft)
		return (0);
	printf("printf(\"[%%020.10x]\",h)\n");
	or = printf("[%020.10x]\n", h);
	ft = ft_printf("[%020.10x]\n",h);
	printf("or = %d\nft = %d\n",or , ft);
	if (or != ft) return (0);
	printf("printf(\"[%%-20.10x]\",h)\n");
	or = printf("[%-20.10x]\n",h);
	ft = ft_printf("[%-20.10x]\n",h);
	printf("or = %d\nft = %d\n",or , ft);
	if (or != ft) return (0);
	unsigned int x = 0;
	printf("\nx = 0\n");
	or = printf("[%%.x]=[%.x]\n", x);
	ft = ft_printf("[%%.x]=[%.x]\n", x);
	printf("or = %d\nft = %d\n",or , ft);
	if (or != ft) return (0);
	or = printf("[%%.0x]=[%.0x]\n", x);
	ft = ft_printf("[%%.0x]=[%.0x]\n", x);
	or = printf("[%%0.x]=[%0.x]\n", x);
	ft = ft_printf("[%%0.x]=[%0.x]\n", x);
	printf("or = %d\nft = %d\n",or , ft);
	if (or != ft) return (0);
	or = printf("[%%0.0x]=[%0.0x]\n", x);
	ft = ft_printf("[%%0.0x]=[%0.0x]\n", x);
	printf("or = %d\nft = %d\n",or , ft);
	if (or != ft) return (0);
	or = printf("[%%0x]=[%0x]\n", x);
	ft = ft_printf("[%%0x]=[%0x]\n", x);
	printf("or = %d\nft = %d\n",or , ft);
	if (or != ft) return (0);

	printf("\nX = 0\n");
	printf("[%%.X]=[%.X]\n", x);
	printf("[%%.0X]=[%.0X]\n", x);
	printf("[%%0.X]=[%0.X]\n", x);
	printf("[%%0.0X]=[%0.0X]\n", x);
	printf("[%%0x]=[%0x]\n", x);

	printf("\nx = 0\n");
	or = printf("[%%10.3x]=[%10.3x]\n", x);
	ft = ft_printf("[%%10.3x]=[%10.3x]\n", x);
	printf("or = %d\nft = %d\n",or , ft);
	if (or != ft) return (0);
	or = printf("[%%3.10x]=[%3.10x]\n", x);
	ft = ft_printf("[%%3.10x]=[%3.10x]\n", x);
	printf("or = %d\nft = %d\n",or , ft);
	if (or != ft) return (0);
	or = printf("[%%10.x]=[%10.x]\n", x);
	ft = ft_printf("[%%10.x]=[%10.x]\n", x);
	printf("or = %d\nft = %d\n",or , ft);
	if (or != ft) return (0);
	or = printf("[%%3.x]=[%3.x]\n", x);
	ft = ft_printf("[%%3.x]=[%3.x]\n", x);
	printf("or = %d\nft = %d\n",or , ft);
	if (or != ft) return (0);
	or = printf("[%%.10x]=[%.10x]\n", x);
	ft = ft_printf("[%%.10x]=[%.10x]\n", x);
	printf("or = %d\nft = %d\n",or , ft);
	if (or != ft) return (0);
	or = printf("[%%.3x]=[%.3x]\n", x);
	ft = ft_printf("[%%.3x]=[%.3x]\n", x);
	printf("or = %d\nft = %d\n",or , ft);
	if (or != ft) return (0);

	printf("\nx = NULL\n");
	printf("[%%10.3x]=[%10.3x]\n", x);
	printf("[%%3.10x]=[%3.10x]\n", x);
	printf("[%%10.x]=[%10.x]\n", x);
	printf("[%%3.x]=[%3.x]\n", x);
	printf("[%%.10x]=[%.10x]\n", x);
	printf("[%%.3x]=[%.3x]\n", x);
}