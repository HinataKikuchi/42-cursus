#include "ft_printf.h"
#include <assert.h>
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
#include <limits.h>

int main(void)
{
	// int ft;
	// int or;
	// int d = 12345;

	// or = printf("[%30d]\n",30);
	// ft = ft_printf("[%30d]\n",30);
	// printf("\n__DIGIT__\n");
	// or = printf("[%10.6d]\n", d);
	// ft = ft_printf("[%10.6d]\n",d);
	// printf("or = %d\nft = %d\n",or, ft);
	// if (or != ft)
	// 	return 1;
	// printf("\n[%%10.6d]\n");
	// or = printf("[%10.6d]\n", (-1) * d);
	// ft = ft_printf("[%10.6d]\n", (-1) * d);
	// printf("or = %d\nft=%d\n",or,ft);
	// if (or != ft)
	// 	return 1;
	// printf("\n[%%-10.7d]\n");
	// or = printf("[%-10.7d]\n", (-1) * d);
	// ft = ft_printf("[%-10.7d]\n", (-1) * d);
	// printf("or = %d\nft=%d\n",or,ft);
	// if (or != ft)
	// 	return 1;
	// printf("\n[%%-8.7d]\n");
	// or = printf("[%-8.7d]\n", d);
	// ft = ft_printf("[%-8.7d]\n", d);
	// printf("or = %d\nft=%d\n",or,ft);
	// if (or != ft)
	// 	return 1;
	// printf("\n[%%-8.7d]\n");
	// or = printf("[%-8.7d]\n", (-1) * d);
	// ft = ft_printf("[%-8.7d]\n", (-1) * d);
	// printf("or = %d\nft=%d\n",or,ft);
	// if (or != ft)
	// 	return 1;


	// d = 0;
	// printf("[%%.d]=[%.d]\n",d);
	// printf("[%%.0d]=[%.0d]\n",d);
	// printf("[%%0.d]=[%0.d]\n",d);
	// printf("[%%0.0d]=[%0.0d]\n",d);
	// ft_printf("[%0d]\n",d);
	// ft_printf("[%.d]\n",d);
	// ft_printf("[%.0d]\n",d);
	// ft_printf("[%0.d]\n",d);
	// ft_printf("[%0.0d]\n",d);

	int ft;
	int or;
	char *s = "Hinata";
	or = printf("[%s]\n",s);
	ft = ft_printf("[%s]\n",s);

	printf("or = %d\nft = %d\n",or, ft);
	if (or != ft) return (0);
	printf("\n__STRING_TEST__\n");
	or = printf("[%%20.10s]=[%20.10s]\n",s);
	ft = ft_printf("[%%20.10s]=[%20.10s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);
	or = printf("[%%20.3s]=[%20.3s]\n",s);
	ft = ft_printf("[%%20.3s]=[%20.3s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);
	or = printf("[%%3.20s]=[%3.20s]\n",s);
	ft = ft_printf("[%%3.20s]=[%3.20s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);
	or = printf("[%%3.20s]=[%3.20s]\n",s);
	ft = ft_printf("[%%3.20s]=[%3.20s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);
	or = printf("[%%.3s]=[%.3s]\n",s);
	ft = ft_printf("[%%.3s]=[%.3s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);
	or = printf("[%%20.s]=[%20.s]\n",s);
	ft = ft_printf("[%%20.s]=[%20.s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);
	or = printf("[%%7.6s]=[%7.6s]\n",s);
	ft = ft_printf("[%%7.6s]=[%7.6s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);

	or = printf("[%%20.3s]=[%20.3s]\n",s);
	ft = ft_printf("[%%20.3s]=[%20.3s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);
	or = printf("[%%3.20s]=[%3.20s]\n",s);
	ft = ft_printf("[%%3.20s]=[%3.20s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);
	or = printf("[%%.3s]=[%.3s]\n",s);
	ft = ft_printf("[%%.3s]=[%.3s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);

	or = printf("[%%20.s]=[%20.s]\n",s);
	ft = ft_printf("[%%20.s]=[%20.s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);

	printf("\n__ZERO_FLAG_TEST__\n");
	or = printf("[%%020.10s]=[%020.10s]\n",s);
	ft = ft_printf("[%%020.10s]=[%020.10s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);

	or = printf("[%%020.5s]=[%020.3s]\n",s);
	ft = ft_printf("[%%020.5s]=[%020.3s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);

	or = printf("[%%05.20s]=[%03.20s]\n",s);
	ft = ft_printf("[%%05.20s]=[%03.20s]\n",s);
		printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);

	or = printf("[%%0.5s]=[%0.3s]\n",s);
	ft = ft_printf("[%%0.5s]=[%0.3s]\n",s);
		printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);

	or = printf("[%%020.s]=[%020.s]\n",s);
	ft = ft_printf("[%%020.s]=[%020.s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);

	printf("\n__MINUS_FLAG_TEST__\n");
	or = printf("[%%-20.10s]=[%-20.10s]\n",s);
	ft = ft_printf("[%%-20.10s]=[%-20.10s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);

	or = printf("[%%-20.3s]=[%-20.3s]\n",s);
	ft = ft_printf("[%%-20.3s]=[%-20.3s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);

	or = printf("[%%-3.20s]=[%-3.20s]\n",s);
	ft = printf("[%%-3.20s]=[%-3.20s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);

	or = printf("[%%-.3s]=[%-.3s]\n",s);
	ft = printf("[%%-.3s]=[%-.3s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);

	or = printf("[%%-20.s]=[%-20.s]\n",s);
	ft = printf("[%%-20.s]=[%-20.s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);

	printf("\n__ZERO_AND_MINUS_FLAG_TEST__\n");
	or = printf("[%%-020.10s]=[%-020.10s]\n",s);
	ft = ft_printf("[%%-020.10s]=[%-020.10s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);

	or = printf("[%%-020.3s]=[%-020.3s]\n",s);
	ft = ft_printf("[%%-020.3s]=[%-020.3s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);

	or = printf("[%%-03.20s]=[%-03.20s]\n",s);
	ft = ft_printf("[%%-03.20s]=[%-03.20s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);

	or = printf("[%%-0.3s]=[%-0.3s]\n",s);
	ft = ft_printf("[%%-0.3s]=[%-0.3s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);

	or = printf("[%%-020.s]=[%-020.s]\n",s);
	ft = ft_printf("[%%-020.s]=[%-020.s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);

	printf("\n__NULL_TEST__\n");
	s = NULL;
	or = printf("[%%-020.s]=[%-020.s]\n",s);
	ft = ft_printf("[%%-020.s]=[%-020.s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);

	or = printf("[%%.2s]=[%.2s]\n",s);
	ft = ft_printf("[%%.2s]=[%.2s]\n",s);
	printf("or = %d\nft = %d\n",or,ft);
	if (or != ft) return (0);

}