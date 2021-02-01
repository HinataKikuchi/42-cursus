#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	ori_ret;
	int	ft__ret;

printf("case : [\"%%c\",'a']\n");
ori_ret=printf("%c",'a');
printf("\n");
ft__ret=ft_printf("%c",'a');
printf("\n");printf("\n");
printf("case : [\"%%10c\",'a']\n");
ori_ret=printf("%10c",'a');
printf("\n");
ft__ret=ft_printf("%10c",'a');
printf("\n");printf("\n");
printf("case : [\"%%1c\",'a']\n");
ori_ret=printf("%1c",'a');
printf("\n");
ft__ret=ft_printf("%1c",'a');
printf("\n");printf("\n");
printf("case : [\"%%-10c\",'a']\n");
ori_ret=printf("%-10c",'a');
printf("\n");
ft__ret=ft_printf("%-10c",'a');
printf("\n");printf("\n");
printf("case : [\"%%-1c\",'a']\n");
ori_ret=printf("%-1c",'a');
printf("\n");
ft__ret=ft_printf("%-1c",'a');
printf("\n");printf("\n");
printf("case : [\"%%.c\",'a']\n");
ori_ret=printf("%.c",'a');
printf("\n");
ft__ret=ft_printf("%.c",'a');
printf("\n");printf("\n");
printf("case : [\"%%c\",'\\0']\n");
ori_ret=printf("%c",'\0');
printf("\n");
ft__ret=ft_printf("%c",'\0');
printf("\n");printf("\n");
printf("case : [\"%%10c\",'\\0']\n");
ori_ret=printf("%10c",'\0');
printf("\n");
ft__ret=ft_printf("%10c",'\0');
printf("\n");printf("\n");
printf("case : [\"%%-10c\",'\\0']\n");
ori_ret=printf("%-10c",'\0');
printf("\n");
ft__ret=ft_printf("%-10c",'\0');
printf("\n");printf("\n");
printf("case : [\"%%1c\",'\\0']\n");
ori_ret=printf("%1c",'\0');
printf("\n");
ft__ret=ft_printf("%1c",'\0');
printf("\n");printf("\n");
printf("case : [\"%%-1c\",'\\0']\n");
ori_ret=printf("%-1c",'\0');
printf("\n");
ft__ret=ft_printf("%-1c",'\0');
printf("\n");printf("\n");

return (0);
}