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
}