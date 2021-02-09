/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_pointer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:17:36 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/09 12:47:52 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
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
#include "./ft_utoa.c"


void	main(void)
{
	char *p ="a";
	printf("printf(\"[%%p]\",p)\n");
	printf("[%p]\n",p);
	ft_printf("printf(\"[%%p]\",p)\n");
	printf("printf(\"[%%3p]\",p)\n");
	printf("[%3p]\n",p);
	ft_printf("[%3p]\n",p);
	printf("printf(\"[%%.3p]\",p)\n");
	printf("[%.3p]\n",p);
	ft_printf("[%.3p]\n",p);
	printf("printf(\"[%%1.3p]\",p)\n");
	printf("[%1.3p]\n",p);
	ft_printf("[%1.3p]\n",p);
	printf("printf(\"[%%03p]\",p)\n");
	printf("[%03p]\n",p);
	ft_printf("[%03p]\n",p);
	printf("printf(\"[%%.03p]\",p)\n");
	printf("[%.03p]\n",p);
	ft_printf("[%.03p]\n",p);
	printf("printf(\"[%%03.03p]\",p)\n");
	printf("[%03.03p]\n",p);
	ft_printf("[%03.03p]\n",p);
	printf("printf(\"[%%-p]\",p)\n");
	printf("[%-p]\n",p); 
	ft_printf("[%-p]\n",p);
	printf("printf(\"[%%-3p]\",p)\n");
	printf("[%-3p]\n",p);
	ft_printf("[%-3p]\n",p);

	printf("printf(\"[%%-.3p]\",p)\n");
	printf("[%-.3p]\n",p);
	ft_printf("[%-.3p]\n",p);
	printf("printf(\"[%%-3.3p]\",p)\n");
	printf("[%-3.3p]\n",p);
	ft_printf("[%-3.3p]\n",p);
	printf("printf(\"[%%-03p]\",p)\n");
	printf("[%-03p]\n",p);
	ft_printf("[%-03p]\n",p);
	printf("printf(\"[%%-.03p]\",p)\n");
	printf("[%-.03p]\n",p);
	ft_printf("[%-.03p]\n",p);
	printf("printf(\"[%%-03.03p]\",p)\n");
	printf("[%-03.03p]\n",p);
	ft_printf("[%-03.03p]\n",p);

	printf("printf(\"[%%20p]\",p)\n");
	printf("[%20p]\n",p);
	ft_printf("[%20p]\n",p);
	printf("printf(\"[%%.20p]\",p);\n");
	printf("[%.20p]\n",p);
	ft_printf("[%.20p]\n",p);
	printf("[%%20.20p]\",p)\n");
	printf("[%20.20p]\n",p);
	ft_printf("[%20.20p]\n",p);
	printf("printf(\"[%%020p]\",p)\n");
	printf("[%020p]\n",p);
	ft_printf("[%020p]\n",p);
	printf("printf(\"[%%.020p]\",p)\n");
	printf("[%.020p]\n",p);
	ft_printf("[%.020p]\n",p);
	printf("printf(\"[%%020.020p]\",p)\n");
	printf("[%020.020p]\n",p);
	ft_printf("[%020.020p]\n",p);
	printf("printf(\"[%-p]\",p)\n");
	printf("[%-p]\n",p);
	ft_printf("[%-p]\n",p);
	printf("printf(\"[%%-20p]\",p)\n");
	printf("[%-20p]\n",p);
	ft_printf("[%-20p]\n",p);
	printf("printf(\"[%%-.20p]\",p)\n");
	printf("[%-.20p]\n",p);
	ft_printf("[%-.20p]\n",p);
	printf("printf(\"[%%-20.20p]\",p)\n");
	printf("[%-20.20p]\n",p);
	ft_printf("[%-20.20p]\n",p);
	printf("printf(\"[%%-020p]\",p)\n");
	printf("[%-020p]\n",p);
	ft_printf("[%-020p]\n",p);
	printf("printf(\"[%%-.020p]\",p)\n");
	printf("[%-.020p]\n",p);
	ft_printf("[%-.020p]\n",p);
	printf("printf(\"[%%-020.020p]\",p)\n");
	printf("[%-020.020p]\n",p);
	ft_printf("[%-020.020p]\n",p);

	printf("\nprintf(\"[%%20.3p]\",p)\n");
	printf("[%20.3p]\n",p);
	ft_printf("[%20.3p]\n",p);
	printf("printf(\"[%%30.20p]\",p);\n");
	printf("[%30.20p]\n",p);
	ft_printf("[%30.20p]\n",p);
	printf("printf(\"[%%20.30p]\",p)\n");
	printf("[%20.30p]\n",p);
	ft_printf("[%20.30p]\n",p);
	printf("printf(\"[%%3.20p]\",p);\n");
	printf("[%3.20p]\n",p);
	ft_printf("[%3.20p]\n",p);
	printf("printf(\"[%%20.03p]\",p)\n");
	printf("[%20.03p]\n",p);
	ft_printf("[%20.03p]\n",p);
	printf("printf(\"[%%020.3p]\",p)\n");
	printf("[%020.3p]\n",p);
	ft_printf("[%020.3p]\n",p);
	printf("printf(\"[%%020.030p]\",p)\n");
	printf("[%020.030p]\n",p);
	ft_printf("[%020.030p]\n",p);
	printf("printf(\"[%%p]\",p)\n");

	printf("\n__SEARCH_ABOUT_NEGATIVE_NUMBER__\n");
	int *q = -1;
	printf("printf(\"[%%p]\",q)\n");
	printf("[%p]\n",q);
	ft_printf("[%p]\n",q);
	printf("printf(\"[%%30p]\",q)\n");
	printf("[%30p]\n",q);
	ft_printf("[%30p]\n",q);
	printf("\n\n__NULL_TEST__\n");
	printf("[%.3p]\n",NULL);
	ft_printf("[%.3p]\n",NULL);

// int *p;
	p = NULL;
	int or;
	int ft;
	printf("\np != NULL\n");
	or = printf("[%%.p]=[%.p]\n", p);
	ft = ft_printf("[%%.p]=[%.p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);
	or = printf("[%%.0p]=[%.0p]\n", p);
	ft = ft_printf("[%%.0p]=[%.0p]\n", p);
		printf("or = %d\nft = %d\n", or, ft);
	or = printf("[%%0.p]=[%0.p]\n", p);
	ft = ft_printf("[%%0.p]=[%0.p]\n", p);
		printf("or = %d\nft = %d\n", or, ft);
	or = printf("[%%0.0p]=[%0.0p]\n", p);
	ft = ft_printf("[%%0.0p]=[%0.0p]\n", p);
		printf("or = %d\nft = %d\n", or, ft);
	or = printf("[%%0p]=[%0p]\n", p);
	ft = ft_printf("[%%0p]=[%0p]\n", p);
			printf("or = %d\nft = %d\n", or, ft);
	printf("\np != NULL\n");
	or = printf("[%%20.3p]=[%20.3p]\n", p);
	ft = printf("[%%20.3p]=[%20.3p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);	
	or = printf("[%%3.20p]=[%3.20p]\n", p);
	ft = ft_printf("[%%3.20p]=[%3.20p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);	
	or = printf("[%%20.p]=[%20.p]\n", p);
	ft = ft_printf("[%%20.p]=[%20.p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);	
	or = printf("[%%3.p]=[%3.p]\n", p);
	ft = ft_printf("[%%3.p]=[%3.p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);	
	or = printf("[%%.20p]=[%.20p]\n", p);
	ft = ft_printf("[%%.20p]=[%.20p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);	
	printf("\n-flag\n");
	or = printf("[%%-.3p]=[%-.3p]\n", p);
	ft = printf("[%%-.3p]=[%-.3p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);
	or = printf("[%%-20.3p]=[%-20.3p]\n", p);
	ft = ft_printf("[%%-20.3p]=[%-20.3p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);
	or = printf("[%%-3.20p]=[%-3.20p]\n", p);
	ft = ft_printf("[%%-3.20p]=[%-3.20p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);
	or = printf("[%%-20.p]=[%-20.p]\n", p);
	ft = ft_printf("[%%-20.p]=[%-20.p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);
	or = printf("[%%-3.p]=[%-3.p]\n", p);
	ft = ft_printf("[%%-3.p]=[%-3.p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);
	or = printf("[%%-.20p]=[%-.20p]\n", p);
	ft = ft_printf("[%%-.20p]=[%-.20p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);
	or = printf("[%%-.3p]=[%-.3p]\n", p);
	ft = ft_printf("[%%-.3p]=[%-.3p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);
	printf("\n0flag\n");
	or =printf("[%%0.3p]=[%0.3p]\n", p);
	ft = ft_printf("[%%0.3p]=[%0.3p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);
	or = printf("[%%020.3p]=[%020.3p]\n", p);
	ft = ft_printf("[%%020.3p]=[%020.3p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);
	or = printf("[%%03.20p]=[%03.20p]\n", p);
	ft = ft_printf("[%%03.20p]=[%03.20p]\n", p);
		printf("or = %d\nft = %d\n", or, ft);
	or = printf("[%%020.p]=[%020.p]\n", p);
	ft = ft_printf("[%%020.p]=[%020.p]\n", p);
		printf("or = %d\nft = %d\n", or, ft);
	or = printf("[%%03.p]=[%03.p]\n", p);
	ft = ft_printf("[%%03.p]=[%03.p]\n", p);
		printf("or = %d\nft = %d\n", or, ft);
	or = printf("[%%0.20p]=[%0.20p]\n", p);
	ft = ft_printf("[%%0.20p]=[%0.20p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);
	or = printf("[%%0.3p]=[%0.3p]\n", p);
	ft = ft_printf("[%%0.3p]=[%0.3p]\n", p);
		printf("or = %d\nft = %d\n", or, ft);
	printf("\n-0flag\n");
	or = printf("[%%0-.3p]=[%0-.3p]\n", p);
	ft = ft_printf("[%%0-.3p]=[%0-.3p]\n", p);
			printf("or = %d\nft = %d\n", or, ft);
	or = printf("[%%0-20.3p]=[%0-20.3p]\n", p);
	ft = ft_printf("[%%0-20.3p]=[%0-20.3p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);
	or = printf("[%%0-3.20p]=[%0-3.20p]\n", p);
	ft = ft_printf("[%%0-3.20p]=[%0-3.20p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);
	or = printf("[%%0-20.p]=[%0-20.p]\n", p);
	ft = ft_printf("[%%0-20.p]=[%0-20.p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);
	or = printf("[%%0-3.p]=[%0-3.p]\n", p);
	ft = ft_printf("[%%0-3.p]=[%0-3.p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);
	or = printf("[%%0-.20p]=[%0-.20p]\n", p);
	ft = ft_printf("[%%0-.20p]=[%0-.20p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);
	or = printf("[%%0-.3p]=[%0-.3p]\n", p);
	ft = ft_printf("[%%0-.3p]=[%0-.3p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);

	printf("\nwhen the 0flag works\n");
	or = printf("[%%020p]=[%020p]\n", p);
	ft = ft_printf("[%%020p]=[%020p]\n", p);
	printf("or = %d\nft = %d\n", or, ft);

}
