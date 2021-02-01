#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	ori_ret;
	int	ft__ret;
	char *str = "abc";

printf("case : [\"%%p\",str]\n");
ori_ret=printf("%p",str);
printf("\n");
ft__ret=ft_printf("%p",str);
printf("\n");printf("\n");
printf("case : [\"%%15p\",str]\n");
ori_ret=printf("%15p",str);
printf("\n");
ft__ret=ft_printf("%15p",str);
printf("\n");printf("\n");
printf("case : [\"%%5p\",str]\n");
ori_ret=printf("%5p",str);
printf("\n");
ft__ret=ft_printf("%5p",str);
printf("\n");printf("\n");
printf("case : [\"%%-15p\",str]\n");
ori_ret=printf("%-15p",str);
printf("\n");
ft__ret=ft_printf("%-15p",str);
printf("\n");printf("\n");
printf("case : [\"%%-5p\",str]\n");
ori_ret=printf("%-5p",str);
printf("\n");
ft__ret=ft_printf("%-5p",str);
printf("\n");printf("\n");
printf("case : [\"%%p\",NULL]\n");
ori_ret=printf("%p",NULL);
printf("\n");
ft__ret=ft_printf("%p",NULL);
printf("\n");printf("\n");
printf("case : [\"%%15p\",NULL]\n");
ori_ret=printf("%15p",NULL);
printf("\n");
ft__ret=ft_printf("%15p",NULL);
printf("\n");printf("\n");
printf("case : [\"%%3p\",NULL]\n");
ori_ret=printf("%3p",NULL);
printf("\n");
ft__ret=ft_printf("%3p",NULL);
printf("\n");printf("\n");
printf("case : [\"%%-15p\",NULL]\n");
ori_ret=printf("%-15p",NULL);
printf("\n");
ft__ret=ft_printf("%-15p",NULL);
printf("\n");printf("\n");
printf("case : [\"%%-3p\",NULL]\n");
ori_ret=printf("%-3p",NULL);
printf("\n");
ft__ret=ft_printf("%-3p",NULL);
printf("\n");printf("\n");

return (0);
}