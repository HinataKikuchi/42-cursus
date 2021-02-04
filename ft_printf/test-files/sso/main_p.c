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


int	main(void)
{
	int	ori_ret;
	int	ft__ret;
	char *str = "abc";

printf("case : [\"%%p\",str]\n");
ori_ret=printf("[%p]",str);
printf("\n");
ft__ret=ft_printf("[%p]",str);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
printf("case : [\"%%15p\",str]\n");
ori_ret=printf("[%15p]",str);
printf("\n");
ft__ret=ft_printf("[%15p]",str);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
printf("case : [\"%%5p\",str]\n");
ori_ret=printf("[%5p]",str);
printf("\n");
ft__ret=ft_printf("[%5p]",str);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
printf("case : [\"%%-15p\",str]\n");
ori_ret=printf("[%-15p]",str);
printf("\n");
ft__ret=ft_printf("[%-15p]",str);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
printf("case : [\"%%-5p\",str]\n");
ori_ret=printf("[%-5p]",str);
printf("\n");
ft__ret=ft_printf("[%-5p]",str);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
printf("case : [\"%%p\",NULL]\n");
ori_ret=printf("[%p]",NULL);
printf("\n");
ft__ret=ft_printf("%p",NULL);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
printf("case : [\"%%15p\",NULL]\n");
ori_ret=printf("[%15p]",NULL);
printf("\n");
ft__ret=ft_printf("[%15p]",NULL);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
printf("case : [\"%%3p\",NULL]\n");
ori_ret=printf("[%3p]",NULL);
printf("\n");
ft__ret=ft_printf("[%3p]",NULL);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
printf("case : [\"%%-15p\",NULL]\n");
ori_ret=printf("[%-15p]",NULL);
printf("\n");
ft__ret=ft_printf("[%-15p]",NULL);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
printf("case : [\"%%-3p\",NULL]\n");
ori_ret=printf("[%-3p]",NULL);
printf("\n");
ft__ret=ft_printf("[%-3p]",NULL);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");

return (0);
}