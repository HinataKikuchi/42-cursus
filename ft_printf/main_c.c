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

printf("case : [\"%%c\",'a']\n");
ori_ret=printf("[%c]",'a');
printf("\n");
ft__ret=ft_printf("[%c]",'a');
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
printf("case : [\"%%10c\",'a']\n");
ori_ret=printf("[%10c]",'a');
printf("\n");
ft__ret=ft_printf("[%10c]",'a');
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
printf("case : [\"%%1c\",'a']\n");
ori_ret=printf("[%1c]",'a');
printf("\n");
ft__ret=ft_printf("[%1c]",'a');
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
printf("case : [\"%%-10c\",'a']\n");
ori_ret=printf("[%-10c]",'a');
printf("\n");
ft__ret=ft_printf("[%-10c]",'a');
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
printf("case : [\"%%-1c\",'a']\n");
ori_ret=printf("[%-1c]",'a');
printf("\n");
ft__ret=ft_printf("[%-1c]",'a');
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
printf("case : [\"%%.c\",'a']\n");
ori_ret=printf("[%.c]",'a');
printf("\n");
ft__ret=ft_printf("[%.c]",'a');
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
printf("case : [\"%%c\",'\\0']\n");
ori_ret=printf("%c",'\0');
printf("\n");
ft__ret=ft_printf("%c",'\0');
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
printf("case : [\"%%10c\",'\\0']\n");
ori_ret=printf("%10c",'\0');
printf("\n");
ft__ret=ft_printf("%10c",'\0');
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
printf("case : [\"%%-10c\",'\\0']\n");
ori_ret=printf("%-10c",'\0');
printf("\n");
ft__ret=ft_printf("%-10c",'\0');
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
printf("case : [\"%%1c\",'\\0']\n");
ori_ret=printf("%1c",'\0');
printf("\n");
ft__ret=ft_printf("%1c",'\0');
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
printf("case : [\"%%-1c\",'\\0']\n");
ori_ret=printf("[%-1c]",'\0');
printf("\n");
ft__ret=ft_printf("[%-1c]",'\0');
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");

return (0);
}