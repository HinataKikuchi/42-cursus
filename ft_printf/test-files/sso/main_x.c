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
#include "./ft_utoa.c"
#include "./format_deal.c"
#include "./libft/ft_strnstr.c"

int	main(void)
{
	int	ori_ret;
	int	ft__ret;

printf("case : [\"%%x\",54321]\n");
ori_ret=printf("%x",54321);
printf("\n");
ft__ret=ft_printf("%x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%x\",-54321]\n");
ori_ret=printf("%x",-54321);
printf("\n");
ft__ret=ft_printf("%x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%10x\",54321]\n");
ori_ret=printf("%10x",54321);
printf("\n");
ft__ret=ft_printf("%10x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%10x\",-54321]\n");
ori_ret=printf("%10x",-54321);
printf("\n");
ft__ret=ft_printf("%10x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-10x\",54321]\n");
ori_ret=printf("%-10x",54321);
printf("\n");
ft__ret=ft_printf("%-10x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-10x\",-54321]\n");
ori_ret=printf("%-10x",-54321);
printf("\n");
ft__ret=ft_printf("%-10x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%010x\",54321]\n");
ori_ret=printf("%010x",54321);
printf("\n");
ft__ret=ft_printf("%010x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%010x\",-54321]\n");
ori_ret=printf("%010x",-54321);
printf("\n");
ft__ret=ft_printf("%010x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%.10x\",54321]\n");
ori_ret=printf("%.10x",54321);
printf("\n");
ft__ret=ft_printf("%.10x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%.10x\",-54321]\n");
ori_ret=printf("%.10x",-54321);
printf("\n");
ft__ret=ft_printf("%.10x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-.10x\",54321]\n");
ori_ret=printf("%-.10x",54321);
printf("\n");
ft__ret=ft_printf("%-.10x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-.10x\",-54321]\n");
ori_ret=printf("%-.10x",-54321);
printf("\n");
ft__ret=ft_printf("%-.10x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%0.10x\",54321]\n");
ori_ret=printf("%0.10x",54321);
printf("\n");
ft__ret=ft_printf("%0.10x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%0.10x\",-54321]\n");
ori_ret=printf("%0.10x",-54321);
printf("\n");
ft__ret=ft_printf("%0.10x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%3.10x\",54321]\n");
ori_ret=printf("%3.10x",54321);
printf("\n");
ft__ret=ft_printf("%3.10x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%3.10x\",-54321]\n");
ori_ret=printf("%3.10x",-54321);
printf("\n");
ft__ret=ft_printf("%3.10x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%10.3x\",54321]\n");
ori_ret=printf("%10.3x",54321);
printf("\n");
ft__ret=ft_printf("%10.3x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%10.3x\",-54321]\n");
ori_ret=printf("%10.3x",-54321);
printf("\n");
ft__ret=ft_printf("%10.3x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%03.10x\",54321]\n");
ori_ret=printf("%03.10x",54321);
printf("\n");
ft__ret=ft_printf("%03.10x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%03.10x\",-54321]\n");
ori_ret=printf("%03.10x",-54321);
printf("\n");
ft__ret=ft_printf("%03.10x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%010.3x\",54321]\n");
ori_ret=printf("%010.3x",54321);
printf("\n");
ft__ret=ft_printf("%010.3x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%010.3x\",-54321]\n");
ori_ret=printf("%010.3x",-54321);
printf("\n");
ft__ret=ft_printf("%010.3x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-3.10x\",54321]\n");
ori_ret=printf("%-3.10x",54321);
printf("\n");
ft__ret=ft_printf("%-3.10x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-3.10x\",-54321]\n");
ori_ret=printf("%-3.10x",-54321);
printf("\n");
ft__ret=ft_printf("%-3.10x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-10.3x\",54321]\n");
ori_ret=printf("%-10.3x",54321);
printf("\n");
ft__ret=ft_printf("%-10.3x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-10.3x\",-54321]\n");
ori_ret=printf("%-10.3x",-54321);
printf("\n");
ft__ret=ft_printf("%-10.3x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%0x\",123]\n");
ori_ret=printf("%0x",123);
printf("\n");
ft__ret=ft_printf("%0x",123);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%.0x\",123]\n");
ori_ret=printf("%.0x",123);
printf("\n");
ft__ret=ft_printf("%.0x",123);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%.x\",123]\n");
ori_ret=printf("%.x",123);
printf("\n");
ft__ret=ft_printf("%.x",123);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%x\",54321]\n");
ori_ret=printf("%x",54321);
printf("\n");
ft__ret=ft_printf("%x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%x\",-54321]\n");
ori_ret=printf("%x",-54321);
printf("\n");
ft__ret=ft_printf("%x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%10x\",54321]\n");
ori_ret=printf("%10x",54321);
printf("\n");
ft__ret=ft_printf("%10x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%10x\",-54321]\n");
ori_ret=printf("%10x",-54321);
printf("\n");
ft__ret=ft_printf("%10x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-10x\",54321]\n");
ori_ret=printf("%-10x",54321);
printf("\n");
ft__ret=ft_printf("%-10x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-10x\",-54321]\n");
ori_ret=printf("%-10x",-54321);
printf("\n");
ft__ret=ft_printf("%-10x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%010x\",54321]\n");
ori_ret=printf("%010x",54321);
printf("\n");
ft__ret=ft_printf("%010x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%010x\",-54321]\n");
ori_ret=printf("%010x",-54321);
printf("\n");
ft__ret=ft_printf("%010x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%.10x\",54321]\n");
ori_ret=printf("%.10x",54321);
printf("\n");
ft__ret=ft_printf("%.10x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%.10x\",-54321]\n");
ori_ret=printf("%.10x",-54321);
printf("\n");
ft__ret=ft_printf("%.10x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-.10x\",54321]\n");
ori_ret=printf("%-.10x",54321);
printf("\n");
ft__ret=ft_printf("%-.10x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-.10x\",-54321]\n");
ori_ret=printf("%-.10x",-54321);
printf("\n");
ft__ret=ft_printf("%-.10x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%0.10x\",54321]\n");
ori_ret=printf("%0.10x",54321);
printf("\n");
ft__ret=ft_printf("%0.10x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%0.10x\",-54321]\n");
ori_ret=printf("%0.10x",-54321);
printf("\n");
ft__ret=ft_printf("%0.10x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%3.10x\",54321]\n");
ori_ret=printf("%3.10x",54321);
printf("\n");
ft__ret=ft_printf("%3.10x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%3.10x\",-54321]\n");
ori_ret=printf("%3.10x",-54321);
printf("\n");
ft__ret=ft_printf("%3.10x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%10.3x\",54321]\n");
ori_ret=printf("%10.3x",54321);
printf("\n");
ft__ret=ft_printf("%10.3x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%10.3x\",-54321]\n");
ori_ret=printf("%10.3x",-54321);
printf("\n");
ft__ret=ft_printf("%10.3x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%03.10x\",54321]\n");
ori_ret=printf("%03.10x",54321);
printf("\n");
ft__ret=ft_printf("%03.10x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%03.10x\",-54321]\n");
ori_ret=printf("%03.10x",-54321);
printf("\n");
ft__ret=ft_printf("%03.10x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%010.3x\",54321]\n");
ori_ret=printf("%010.3x",54321);
printf("\n");
ft__ret=ft_printf("%010.3x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%010.3x\",-54321]\n");
ori_ret=printf("%010.3x",-54321);
printf("\n");
ft__ret=ft_printf("%010.3x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-3.10x\",54321]\n");
ori_ret=printf("%-3.10x",54321);
printf("\n");
ft__ret=ft_printf("%-3.10x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-3.10x\",-54321]\n");
ori_ret=printf("%-3.10x",-54321);
printf("\n");
ft__ret=ft_printf("%-3.10x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-10.3x\",54321]\n");
ori_ret=printf("%-10.3x",54321);
printf("\n");
ft__ret=ft_printf("%-10.3x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-10.3x\",-54321]\n");
ori_ret=printf("%-10.3x",-54321);
printf("\n");
ft__ret=ft_printf("%-10.3x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%0x\",54321]\n");
ori_ret=printf("%0x",54321);
printf("\n");
ft__ret=ft_printf("%0x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%.0x\",54321]\n");
ori_ret=printf("%.0x",54321);
printf("\n");
ft__ret=ft_printf("%.0x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%.x\",54321]\n");
ori_ret=printf("%.x",54321);
printf("\n");
ft__ret=ft_printf("%.x",54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%0x\",-54321]\n");
ori_ret=printf("%0x",-54321);
printf("\n");
ft__ret=ft_printf("%0x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%.0x\",-54321]\n");
ori_ret=printf("%.0x",-54321);
printf("\n");
ft__ret=ft_printf("%.0x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%.x\",-54321]\n");
ori_ret=printf("%.x",-54321);
printf("\n");
ft__ret=ft_printf("%.x",-54321);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%x\",0]\n");
ori_ret=printf("%x",0);
printf("\n");
ft__ret=ft_printf("%x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%x\",-0]\n");
ori_ret=printf("%x",-0);
printf("\n");
ft__ret=ft_printf("%x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%10x\",0]\n");
ori_ret=printf("%10x",0);
printf("\n");
ft__ret=ft_printf("%10x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%10x\",-0]\n");
ori_ret=printf("%10x",-0);
printf("\n");
ft__ret=ft_printf("%10x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-10x\",0]\n");
ori_ret=printf("%-10x",0);
printf("\n");
ft__ret=ft_printf("%-10x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-10x\",-0]\n");
ori_ret=printf("%-10x",-0);
printf("\n");
ft__ret=ft_printf("%-10x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%010x\",0]\n");
ori_ret=printf("%010x",0);
printf("\n");
ft__ret=ft_printf("%010x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%010x\",-0]\n");
ori_ret=printf("%010x",-0);
printf("\n");
ft__ret=ft_printf("%010x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%.10x\",0]\n");
ori_ret=printf("%.10x",0);
printf("\n");
ft__ret=ft_printf("%.10x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%.10x\",-0]\n");
ori_ret=printf("%.10x",-0);
printf("\n");
ft__ret=ft_printf("%.10x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-.10x\",0]\n");
ori_ret=printf("%-.10x",0);
printf("\n");
ft__ret=ft_printf("%-.10x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-.10x\",-0]\n");
ori_ret=printf("%-.10x",-0);
printf("\n");
ft__ret=ft_printf("%-.10x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%0.10x\",0]\n");
ori_ret=printf("%0.10x",0);
printf("\n");
ft__ret=ft_printf("%0.10x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%0.10x\",-0]\n");
ori_ret=printf("%0.10x",-0);
printf("\n");
ft__ret=ft_printf("%0.10x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%3.10x\",0]\n");
ori_ret=printf("%3.10x",0);
printf("\n");
ft__ret=ft_printf("%3.10x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%3.10x\",-0]\n");
ori_ret=printf("%3.10x",-0);
printf("\n");
ft__ret=ft_printf("%3.10x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%10.3x\",0]\n");
ori_ret=printf("%10.3x",0);
printf("\n");
ft__ret=ft_printf("%10.3x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%10.3x\",-0]\n");
ori_ret=printf("%10.3x",-0);
printf("\n");
ft__ret=ft_printf("%10.3x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%03.10x\",0]\n");
ori_ret=printf("%03.10x",0);
printf("\n");
ft__ret=ft_printf("%03.10x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%03.10x\",-0]\n");
ori_ret=printf("%03.10x",-0);
printf("\n");
ft__ret=ft_printf("%03.10x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%010.3x\",0]\n");
ori_ret=printf("%010.3x",0);
printf("\n");
ft__ret=ft_printf("%010.3x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%010.3x\",-0]\n");
ori_ret=printf("%010.3x",-0);
printf("\n");
ft__ret=ft_printf("%010.3x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-3.10x\",0]\n");
ori_ret=printf("%-3.10x",0);
printf("\n");
ft__ret=ft_printf("%-3.10x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-3.10x\",-0]\n");
ori_ret=printf("%-3.10x",-0);
printf("\n");
ft__ret=ft_printf("%-3.10x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-10.3x\",0]\n");
ori_ret=printf("%-10.3x",0);
printf("\n");
ft__ret=ft_printf("%-10.3x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-10.3x\",-0]\n");
ori_ret=printf("%-10.3x",-0);
printf("\n");
ft__ret=ft_printf("%-10.3x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%0x\",123]\n");
ori_ret=printf("%0x",123);
printf("\n");
ft__ret=ft_printf("%0x",123);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%.0x\",123]\n");
ori_ret=printf("%.0x",123);
printf("\n");
ft__ret=ft_printf("%.0x",123);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%.x\",123]\n");
ori_ret=printf("%.x",123);
printf("\n");
ft__ret=ft_printf("%.x",123);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%x\",0]\n");
ori_ret=printf("%x",0);
printf("\n");
ft__ret=ft_printf("%x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%x\",-0]\n");
ori_ret=printf("%x",-0);
printf("\n");
ft__ret=ft_printf("%x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%10x\",0]\n");
ori_ret=printf("%10x",0);
printf("\n");
ft__ret=ft_printf("%10x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%10x\",-0]\n");
ori_ret=printf("%10x",-0);
printf("\n");
ft__ret=ft_printf("%10x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-10x\",0]\n");
ori_ret=printf("%-10x",0);
printf("\n");
ft__ret=ft_printf("%-10x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-10x\",-0]\n");
ori_ret=printf("%-10x",-0);
printf("\n");
ft__ret=ft_printf("%-10x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%010x\",0]\n");
ori_ret=printf("%010x",0);
printf("\n");
ft__ret=ft_printf("%010x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%010x\",-0]\n");
ori_ret=printf("%010x",-0);
printf("\n");
ft__ret=ft_printf("%010x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%.10x\",0]\n");
ori_ret=printf("%.10x",0);
printf("\n");
ft__ret=ft_printf("%.10x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%.10x\",-0]\n");
ori_ret=printf("%.10x",-0);
printf("\n");
ft__ret=ft_printf("%.10x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-.10x\",0]\n");
ori_ret=printf("%-.10x",0);
printf("\n");
ft__ret=ft_printf("%-.10x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-.10x\",-0]\n");
ori_ret=printf("%-.10x",-0);
printf("\n");
ft__ret=ft_printf("%-.10x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%0.10x\",0]\n");
ori_ret=printf("%0.10x",0);
printf("\n");
ft__ret=ft_printf("%0.10x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%0.10x\",-0]\n");
ori_ret=printf("%0.10x",-0);
printf("\n");
ft__ret=ft_printf("%0.10x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%3.10x\",0]\n");
ori_ret=printf("%3.10x",0);
printf("\n");
ft__ret=ft_printf("%3.10x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%3.10x\",-0]\n");
ori_ret=printf("%3.10x",-0);
printf("\n");
ft__ret=ft_printf("%3.10x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%10.3x\",0]\n");
ori_ret=printf("%10.3x",0);
printf("\n");
ft__ret=ft_printf("%10.3x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%10.3x\",-0]\n");
ori_ret=printf("%10.3x",-0);
printf("\n");
ft__ret=ft_printf("%10.3x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%03.10x\",0]\n");
ori_ret=printf("%03.10x",0);
printf("\n");
ft__ret=ft_printf("%03.10x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%03.10x\",-0]\n");
ori_ret=printf("%03.10x",-0);
printf("\n");
ft__ret=ft_printf("%03.10x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%010.3x\",0]\n");
ori_ret=printf("%010.3x",0);
printf("\n");
ft__ret=ft_printf("%010.3x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%010.3x\",-0]\n");
ori_ret=printf("%010.3x",-0);
printf("\n");
ft__ret=ft_printf("%010.3x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-3.10x\",0]\n");
ori_ret=printf("%-3.10x",0);
printf("\n");
ft__ret=ft_printf("%-3.10x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-3.10x\",-0]\n");
ori_ret=printf("%-3.10x",-0);
printf("\n");
ft__ret=ft_printf("%-3.10x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-10.3x\",0]\n");
ori_ret=printf("%-10.3x",0);
printf("\n");
ft__ret=ft_printf("%-10.3x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%-10.3x\",-0]\n");
ori_ret=printf("%-10.3x",-0);
printf("\n");
ft__ret=ft_printf("%-10.3x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%0x\",0]\n");
ori_ret=printf("%0x",0);
printf("\n");
ft__ret=ft_printf("%0x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%.0x\",0]\n");
ori_ret=printf("%.0x",0);
printf("\n");
ft__ret=ft_printf("%.0x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%.x\",0]\n");
ori_ret=printf("%.x",0);
printf("\n");
ft__ret=ft_printf("%.x",0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%0x\",-0]\n");
ori_ret=printf("%0x",-0);
printf("\n");
ft__ret=ft_printf("%0x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%.0x\",-0]\n");
ori_ret=printf("%.0x",-0);
printf("\n");
ft__ret=ft_printf("%.0x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);
printf("case : [\"%%.x\",-0]\n");
ori_ret=printf("%.x",-0);
printf("\n");
ft__ret=ft_printf("%.x",-0);
printf("\nori = %d\nft_ = %d\n",ori_ret,ft__ret);printf("\n");
if (ori_ret != ft__ret) return (0);

return (0);
}