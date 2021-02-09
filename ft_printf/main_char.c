/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 17:14:36 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/09 16:04:09 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

int	main(void)
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
	
	int or;
	int ft;
	printf("\n__CHAR_TEST__\n");
	or = printf("[%%20.5c]=[%020.5c]\n\n",c);
	ft = ft_printf("[%%20.5c]=[%020.5c]\n\n",c);
	printf("or = %d\nft=%d\n",or,ft);
	if(or != ft)return (0);
	or = printf("[%%5.20c]=[%5.20c]\n\n",c);
	ft = ft_printf("[%%5.20c]=[%5.20c]\n\n",c);
	printf("or = %d\nft=%d\n",or,ft);
	if(or != ft)return (0);
	or = printf("[%%20.c]=[%20.c]\n\n",c);
	ft = ft_printf("[%%20.c]=[%20.c]\n\n",c);
	printf("or = %d\nft=%d\n",or,ft);
	if(or != ft)return (0);
	or = printf("[%%.5c]=[%.5c]\n\n",c);
	ft = ft_printf("[%%.5c]=[%.5c]\n",c);
	printf("or = %d\nft=%d\n",or,ft);
	if(or != ft)return (0);
	or = printf("[%%.20c]=[%.20c]\n",c);
	ft = ft_printf("[%%.20c]=[%.20c]\n",c);
	printf("or = %d\nft=%d\n",or,ft);
	if(or != ft)return (0);
	or = printf("[%%5.c]=[%5.c]\n",c);
	ft = ft_printf("[%%5.c]=[%5.c]\n",c);
	printf("or = %d\nft=%d\n",or,ft);
	if(or != ft)return (0);


	printf("\n__MINUS_FLAG_TEST__\n");
	or = printf("[%%-20.5c]=[%-20.5c]\n",c);
	ft = ft_printf("[%%-20.5c]=[%-20.5c]\n",c);
	printf("or = %d\nft=%d\n",or,ft);
	if(or != ft)return (0);
	or = printf("[%%-5.20c]=[%-5.20c]\n",c);
	ft = ft_printf("[%%-5.20c]=[%-5.20c]\n",c);
	printf("or = %d\nft=%d\n",or,ft);
	if(or != ft)return (0);
	or = printf("[%%-20.c]=[%-20.c]\n",c);
	ft = ft_printf("[%%-20.c]=[%-20.c]\n",c);
	printf("or = %d\nft=%d\n",or,ft);
	if(or != ft)return (0);
	or = printf("[%%-.5c]=[%-.5c]\n",c);
	ft = ft_printf("[%%-.5c]=[%-.5c]\n",c);
	printf("or = %d\nft=%d\n",or,ft);
	if(or != ft)return (0);
	or = printf("[%%-.20c]=[%-.20c]\n",c);
	ft = ft_printf("[%%-.20c]=[%-.20c]\n",c);
	printf("or = %d\nft=%d\n",or,ft);
	if(or != ft)return (0);
	or = printf("[%%-5.c]=[%-5.c]\n",c);
	ft = ft_printf("[%%-5.c]=[%-5.c]\n",c);
	printf("or = %d\nft=%d\n",or,ft);
	if(or != ft)return (0);







}
