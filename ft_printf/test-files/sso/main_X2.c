#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	ori_ret;
	int	ft__ret;

printf("case : [\"%%X\",54321]\n");
ori_ret=printf("%X",54321);
printf("\n");
ft__ret=ft_printf("%X",54321);
printf("\n");printf("\n");
printf("case : [\"%%X\",-54321]\n");
ori_ret=printf("%X",-54321);
printf("\n");
ft__ret=ft_printf("%X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%10X\",54321]\n");
ori_ret=printf("%10X",54321);
printf("\n");
ft__ret=ft_printf("%10X",54321);
printf("\n");printf("\n");
printf("case : [\"%%10X\",-54321]\n");
ori_ret=printf("%10X",-54321);
printf("\n");
ft__ret=ft_printf("%10X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%-10X\",54321]\n");
ori_ret=printf("%-10X",54321);
printf("\n");
ft__ret=ft_printf("%-10X",54321);
printf("\n");printf("\n");
printf("case : [\"%%-10X\",-54321]\n");
ori_ret=printf("%-10X",-54321);
printf("\n");
ft__ret=ft_printf("%-10X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%010X\",54321]\n");
ori_ret=printf("%010X",54321);
printf("\n");
ft__ret=ft_printf("%010X",54321);
printf("\n");printf("\n");
printf("case : [\"%%010X\",-54321]\n");
ori_ret=printf("%010X",-54321);
printf("\n");
ft__ret=ft_printf("%010X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%.10X\",54321]\n");
ori_ret=printf("%.10X",54321);
printf("\n");
ft__ret=ft_printf("%.10X",54321);
printf("\n");printf("\n");
printf("case : [\"%%.10X\",-54321]\n");
ori_ret=printf("%.10X",-54321);
printf("\n");
ft__ret=ft_printf("%.10X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%-.10X\",54321]\n");
ori_ret=printf("%-.10X",54321);
printf("\n");
ft__ret=ft_printf("%-.10X",54321);
printf("\n");printf("\n");
printf("case : [\"%%-.10X\",-54321]\n");
ori_ret=printf("%-.10X",-54321);
printf("\n");
ft__ret=ft_printf("%-.10X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%0.10X\",54321]\n");
ori_ret=printf("%0.10X",54321);
printf("\n");
ft__ret=ft_printf("%0.10X",54321);
printf("\n");printf("\n");
printf("case : [\"%%0.10X\",-54321]\n");
ori_ret=printf("%0.10X",-54321);
printf("\n");
ft__ret=ft_printf("%0.10X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%3.10X\",54321]\n");
ori_ret=printf("%3.10X",54321);
printf("\n");
ft__ret=ft_printf("%3.10X",54321);
printf("\n");printf("\n");
printf("case : [\"%%3.10X\",-54321]\n");
ori_ret=printf("%3.10X",-54321);
printf("\n");
ft__ret=ft_printf("%3.10X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%10.3X\",54321]\n");
ori_ret=printf("%10.3X",54321);
printf("\n");
ft__ret=ft_printf("%10.3X",54321);
printf("\n");printf("\n");
printf("case : [\"%%10.3X\",-54321]\n");
ori_ret=printf("%10.3X",-54321);
printf("\n");
ft__ret=ft_printf("%10.3X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%03.10X\",54321]\n");
ori_ret=printf("%03.10X",54321);
printf("\n");
ft__ret=ft_printf("%03.10X",54321);
printf("\n");printf("\n");
printf("case : [\"%%03.10X\",-54321]\n");
ori_ret=printf("%03.10X",-54321);
printf("\n");
ft__ret=ft_printf("%03.10X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%010.3X\",54321]\n");
ori_ret=printf("%010.3X",54321);
printf("\n");
ft__ret=ft_printf("%010.3X",54321);
printf("\n");printf("\n");
printf("case : [\"%%010.3X\",-54321]\n");
ori_ret=printf("%010.3X",-54321);
printf("\n");
ft__ret=ft_printf("%010.3X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%-3.10X\",54321]\n");
ori_ret=printf("%-3.10X",54321);
printf("\n");
ft__ret=ft_printf("%-3.10X",54321);
printf("\n");printf("\n");
printf("case : [\"%%-3.10X\",-54321]\n");
ori_ret=printf("%-3.10X",-54321);
printf("\n");
ft__ret=ft_printf("%-3.10X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%-10.3X\",54321]\n");
ori_ret=printf("%-10.3X",54321);
printf("\n");
ft__ret=ft_printf("%-10.3X",54321);
printf("\n");printf("\n");
printf("case : [\"%%-10.3X\",-54321]\n");
ori_ret=printf("%-10.3X",-54321);
printf("\n");
ft__ret=ft_printf("%-10.3X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%0X\",123]\n");
ori_ret=printf("%0X",123);
printf("\n");
ft__ret=ft_printf("%0X",123);
printf("\n");printf("\n");
printf("case : [\"%%.0X\",123]\n");
ori_ret=printf("%.0X",123);
printf("\n");
ft__ret=ft_printf("%.0X",123);
printf("\n");printf("\n");
printf("case : [\"%%.X\",123]\n");
ori_ret=printf("%.X",123);
printf("\n");
ft__ret=ft_printf("%.X",123);
printf("\n");printf("\n");
printf("case : [\"%%X\",54321]\n");
ori_ret=printf("%X",54321);
printf("\n");
ft__ret=ft_printf("%X",54321);
printf("\n");printf("\n");
printf("case : [\"%%X\",-54321]\n");
ori_ret=printf("%X",-54321);
printf("\n");
ft__ret=ft_printf("%X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%10X\",54321]\n");
ori_ret=printf("%10X",54321);
printf("\n");
ft__ret=ft_printf("%10X",54321);
printf("\n");printf("\n");
printf("case : [\"%%10X\",-54321]\n");
ori_ret=printf("%10X",-54321);
printf("\n");
ft__ret=ft_printf("%10X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%-10X\",54321]\n");
ori_ret=printf("%-10X",54321);
printf("\n");
ft__ret=ft_printf("%-10X",54321);
printf("\n");printf("\n");
printf("case : [\"%%-10X\",-54321]\n");
ori_ret=printf("%-10X",-54321);
printf("\n");
ft__ret=ft_printf("%-10X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%010X\",54321]\n");
ori_ret=printf("%010X",54321);
printf("\n");
ft__ret=ft_printf("%010X",54321);
printf("\n");printf("\n");
printf("case : [\"%%010X\",-54321]\n");
ori_ret=printf("%010X",-54321);
printf("\n");
ft__ret=ft_printf("%010X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%.10X\",54321]\n");
ori_ret=printf("%.10X",54321);
printf("\n");
ft__ret=ft_printf("%.10X",54321);
printf("\n");printf("\n");
printf("case : [\"%%.10X\",-54321]\n");
ori_ret=printf("%.10X",-54321);
printf("\n");
ft__ret=ft_printf("%.10X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%-.10X\",54321]\n");
ori_ret=printf("%-.10X",54321);
printf("\n");
ft__ret=ft_printf("%-.10X",54321);
printf("\n");printf("\n");
printf("case : [\"%%-.10X\",-54321]\n");
ori_ret=printf("%-.10X",-54321);
printf("\n");
ft__ret=ft_printf("%-.10X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%0.10X\",54321]\n");
ori_ret=printf("%0.10X",54321);
printf("\n");
ft__ret=ft_printf("%0.10X",54321);
printf("\n");printf("\n");
printf("case : [\"%%0.10X\",-54321]\n");
ori_ret=printf("%0.10X",-54321);
printf("\n");
ft__ret=ft_printf("%0.10X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%3.10X\",54321]\n");
ori_ret=printf("%3.10X",54321);
printf("\n");
ft__ret=ft_printf("%3.10X",54321);
printf("\n");printf("\n");
printf("case : [\"%%3.10X\",-54321]\n");
ori_ret=printf("%3.10X",-54321);
printf("\n");
ft__ret=ft_printf("%3.10X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%10.3X\",54321]\n");
ori_ret=printf("%10.3X",54321);
printf("\n");
ft__ret=ft_printf("%10.3X",54321);
printf("\n");printf("\n");
printf("case : [\"%%10.3X\",-54321]\n");
ori_ret=printf("%10.3X",-54321);
printf("\n");
ft__ret=ft_printf("%10.3X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%03.10X\",54321]\n");
ori_ret=printf("%03.10X",54321);
printf("\n");
ft__ret=ft_printf("%03.10X",54321);
printf("\n");printf("\n");
printf("case : [\"%%03.10X\",-54321]\n");
ori_ret=printf("%03.10X",-54321);
printf("\n");
ft__ret=ft_printf("%03.10X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%010.3X\",54321]\n");
ori_ret=printf("%010.3X",54321);
printf("\n");
ft__ret=ft_printf("%010.3X",54321);
printf("\n");printf("\n");
printf("case : [\"%%010.3X\",-54321]\n");
ori_ret=printf("%010.3X",-54321);
printf("\n");
ft__ret=ft_printf("%010.3X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%-3.10X\",54321]\n");
ori_ret=printf("%-3.10X",54321);
printf("\n");
ft__ret=ft_printf("%-3.10X",54321);
printf("\n");printf("\n");
printf("case : [\"%%-3.10X\",-54321]\n");
ori_ret=printf("%-3.10X",-54321);
printf("\n");
ft__ret=ft_printf("%-3.10X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%-10.3X\",54321]\n");
ori_ret=printf("%-10.3X",54321);
printf("\n");
ft__ret=ft_printf("%-10.3X",54321);
printf("\n");printf("\n");
printf("case : [\"%%-10.3X\",-54321]\n");
ori_ret=printf("%-10.3X",-54321);
printf("\n");
ft__ret=ft_printf("%-10.3X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%0X\",54321]\n");
ori_ret=printf("%0X",54321);
printf("\n");
ft__ret=ft_printf("%0X",54321);
printf("\n");printf("\n");
printf("case : [\"%%.0X\",54321]\n");
ori_ret=printf("%.0X",54321);
printf("\n");
ft__ret=ft_printf("%.0X",54321);
printf("\n");printf("\n");
printf("case : [\"%%.X\",54321]\n");
ori_ret=printf("%.X",54321);
printf("\n");
ft__ret=ft_printf("%.X",54321);
printf("\n");printf("\n");
printf("case : [\"%%0X\",-54321]\n");
ori_ret=printf("%0X",-54321);
printf("\n");
ft__ret=ft_printf("%0X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%.0X\",-54321]\n");
ori_ret=printf("%.0X",-54321);
printf("\n");
ft__ret=ft_printf("%.0X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%.X\",-54321]\n");
ori_ret=printf("%.X",-54321);
printf("\n");
ft__ret=ft_printf("%.X",-54321);
printf("\n");printf("\n");
printf("case : [\"%%X\",0]\n");
ori_ret=printf("%X",0);
printf("\n");
ft__ret=ft_printf("%X",0);
printf("\n");printf("\n");
printf("case : [\"%%X\",-0]\n");
ori_ret=printf("%X",-0);
printf("\n");
ft__ret=ft_printf("%X",-0);
printf("\n");printf("\n");
printf("case : [\"%%10X\",0]\n");
ori_ret=printf("%10X",0);
printf("\n");
ft__ret=ft_printf("%10X",0);
printf("\n");printf("\n");
printf("case : [\"%%10X\",-0]\n");
ori_ret=printf("%10X",-0);
printf("\n");
ft__ret=ft_printf("%10X",-0);
printf("\n");printf("\n");
printf("case : [\"%%-10X\",0]\n");
ori_ret=printf("%-10X",0);
printf("\n");
ft__ret=ft_printf("%-10X",0);
printf("\n");printf("\n");
printf("case : [\"%%-10X\",-0]\n");
ori_ret=printf("%-10X",-0);
printf("\n");
ft__ret=ft_printf("%-10X",-0);
printf("\n");printf("\n");
printf("case : [\"%%010X\",0]\n");
ori_ret=printf("%010X",0);
printf("\n");
ft__ret=ft_printf("%010X",0);
printf("\n");printf("\n");
printf("case : [\"%%010X\",-0]\n");
ori_ret=printf("%010X",-0);
printf("\n");
ft__ret=ft_printf("%010X",-0);
printf("\n");printf("\n");
printf("case : [\"%%.10X\",0]\n");
ori_ret=printf("%.10X",0);
printf("\n");
ft__ret=ft_printf("%.10X",0);
printf("\n");printf("\n");
printf("case : [\"%%.10X\",-0]\n");
ori_ret=printf("%.10X",-0);
printf("\n");
ft__ret=ft_printf("%.10X",-0);
printf("\n");printf("\n");
printf("case : [\"%%-.10X\",0]\n");
ori_ret=printf("%-.10X",0);
printf("\n");
ft__ret=ft_printf("%-.10X",0);
printf("\n");printf("\n");
printf("case : [\"%%-.10X\",-0]\n");
ori_ret=printf("%-.10X",-0);
printf("\n");
ft__ret=ft_printf("%-.10X",-0);
printf("\n");printf("\n");
printf("case : [\"%%0.10X\",0]\n");
ori_ret=printf("%0.10X",0);
printf("\n");
ft__ret=ft_printf("%0.10X",0);
printf("\n");printf("\n");
printf("case : [\"%%0.10X\",-0]\n");
ori_ret=printf("%0.10X",-0);
printf("\n");
ft__ret=ft_printf("%0.10X",-0);
printf("\n");printf("\n");
printf("case : [\"%%3.10X\",0]\n");
ori_ret=printf("%3.10X",0);
printf("\n");
ft__ret=ft_printf("%3.10X",0);
printf("\n");printf("\n");
printf("case : [\"%%3.10X\",-0]\n");
ori_ret=printf("%3.10X",-0);
printf("\n");
ft__ret=ft_printf("%3.10X",-0);
printf("\n");printf("\n");
printf("case : [\"%%10.3X\",0]\n");
ori_ret=printf("%10.3X",0);
printf("\n");
ft__ret=ft_printf("%10.3X",0);
printf("\n");printf("\n");
printf("case : [\"%%10.3X\",-0]\n");
ori_ret=printf("%10.3X",-0);
printf("\n");
ft__ret=ft_printf("%10.3X",-0);
printf("\n");printf("\n");
printf("case : [\"%%03.10X\",0]\n");
ori_ret=printf("%03.10X",0);
printf("\n");
ft__ret=ft_printf("%03.10X",0);
printf("\n");printf("\n");
printf("case : [\"%%03.10X\",-0]\n");
ori_ret=printf("%03.10X",-0);
printf("\n");
ft__ret=ft_printf("%03.10X",-0);
printf("\n");printf("\n");
printf("case : [\"%%010.3X\",0]\n");
ori_ret=printf("%010.3X",0);
printf("\n");
ft__ret=ft_printf("%010.3X",0);
printf("\n");printf("\n");
printf("case : [\"%%010.3X\",-0]\n");
ori_ret=printf("%010.3X",-0);
printf("\n");
ft__ret=ft_printf("%010.3X",-0);
printf("\n");printf("\n");
printf("case : [\"%%-3.10X\",0]\n");
ori_ret=printf("%-3.10X",0);
printf("\n");
ft__ret=ft_printf("%-3.10X",0);
printf("\n");printf("\n");
printf("case : [\"%%-3.10X\",-0]\n");
ori_ret=printf("%-3.10X",-0);
printf("\n");
ft__ret=ft_printf("%-3.10X",-0);
printf("\n");printf("\n");
printf("case : [\"%%-10.3X\",0]\n");
ori_ret=printf("%-10.3X",0);
printf("\n");
ft__ret=ft_printf("%-10.3X",0);
printf("\n");printf("\n");
printf("case : [\"%%-10.3X\",-0]\n");
ori_ret=printf("%-10.3X",-0);
printf("\n");
ft__ret=ft_printf("%-10.3X",-0);
printf("\n");printf("\n");
printf("case : [\"%%0X\",123]\n");
ori_ret=printf("%0X",123);
printf("\n");
ft__ret=ft_printf("%0X",123);
printf("\n");printf("\n");
printf("case : [\"%%.0X\",123]\n");
ori_ret=printf("%.0X",123);
printf("\n");
ft__ret=ft_printf("%.0X",123);
printf("\n");printf("\n");
printf("case : [\"%%.X\",123]\n");
ori_ret=printf("%.X",123);
printf("\n");
ft__ret=ft_printf("%.X",123);
printf("\n");printf("\n");
printf("case : [\"%%X\",0]\n");
ori_ret=printf("%X",0);
printf("\n");
ft__ret=ft_printf("%X",0);
printf("\n");printf("\n");
printf("case : [\"%%X\",-0]\n");
ori_ret=printf("%X",-0);
printf("\n");
ft__ret=ft_printf("%X",-0);
printf("\n");printf("\n");
printf("case : [\"%%10X\",0]\n");
ori_ret=printf("%10X",0);
printf("\n");
ft__ret=ft_printf("%10X",0);
printf("\n");printf("\n");
printf("case : [\"%%10X\",-0]\n");
ori_ret=printf("%10X",-0);
printf("\n");
ft__ret=ft_printf("%10X",-0);
printf("\n");printf("\n");
printf("case : [\"%%-10X\",0]\n");
ori_ret=printf("%-10X",0);
printf("\n");
ft__ret=ft_printf("%-10X",0);
printf("\n");printf("\n");
printf("case : [\"%%-10X\",-0]\n");
ori_ret=printf("%-10X",-0);
printf("\n");
ft__ret=ft_printf("%-10X",-0);
printf("\n");printf("\n");
printf("case : [\"%%010X\",0]\n");
ori_ret=printf("%010X",0);
printf("\n");
ft__ret=ft_printf("%010X",0);
printf("\n");printf("\n");
printf("case : [\"%%010X\",-0]\n");
ori_ret=printf("%010X",-0);
printf("\n");
ft__ret=ft_printf("%010X",-0);
printf("\n");printf("\n");
printf("case : [\"%%.10X\",0]\n");
ori_ret=printf("%.10X",0);
printf("\n");
ft__ret=ft_printf("%.10X",0);
printf("\n");printf("\n");
printf("case : [\"%%.10X\",-0]\n");
ori_ret=printf("%.10X",-0);
printf("\n");
ft__ret=ft_printf("%.10X",-0);
printf("\n");printf("\n");
printf("case : [\"%%-.10X\",0]\n");
ori_ret=printf("%-.10X",0);
printf("\n");
ft__ret=ft_printf("%-.10X",0);
printf("\n");printf("\n");
printf("case : [\"%%-.10X\",-0]\n");
ori_ret=printf("%-.10X",-0);
printf("\n");
ft__ret=ft_printf("%-.10X",-0);
printf("\n");printf("\n");
printf("case : [\"%%0.10X\",0]\n");
ori_ret=printf("%0.10X",0);
printf("\n");
ft__ret=ft_printf("%0.10X",0);
printf("\n");printf("\n");
printf("case : [\"%%0.10X\",-0]\n");
ori_ret=printf("%0.10X",-0);
printf("\n");
ft__ret=ft_printf("%0.10X",-0);
printf("\n");printf("\n");
printf("case : [\"%%3.10X\",0]\n");
ori_ret=printf("%3.10X",0);
printf("\n");
ft__ret=ft_printf("%3.10X",0);
printf("\n");printf("\n");
printf("case : [\"%%3.10X\",-0]\n");
ori_ret=printf("%3.10X",-0);
printf("\n");
ft__ret=ft_printf("%3.10X",-0);
printf("\n");printf("\n");
printf("case : [\"%%10.3X\",0]\n");
ori_ret=printf("%10.3X",0);
printf("\n");
ft__ret=ft_printf("%10.3X",0);
printf("\n");printf("\n");
printf("case : [\"%%10.3X\",-0]\n");
ori_ret=printf("%10.3X",-0);
printf("\n");
ft__ret=ft_printf("%10.3X",-0);
printf("\n");printf("\n");
printf("case : [\"%%03.10X\",0]\n");
ori_ret=printf("%03.10X",0);
printf("\n");
ft__ret=ft_printf("%03.10X",0);
printf("\n");printf("\n");
printf("case : [\"%%03.10X\",-0]\n");
ori_ret=printf("%03.10X",-0);
printf("\n");
ft__ret=ft_printf("%03.10X",-0);
printf("\n");printf("\n");
printf("case : [\"%%010.3X\",0]\n");
ori_ret=printf("%010.3X",0);
printf("\n");
ft__ret=ft_printf("%010.3X",0);
printf("\n");printf("\n");
printf("case : [\"%%010.3X\",-0]\n");
ori_ret=printf("%010.3X",-0);
printf("\n");
ft__ret=ft_printf("%010.3X",-0);
printf("\n");printf("\n");
printf("case : [\"%%-3.10X\",0]\n");
ori_ret=printf("%-3.10X",0);
printf("\n");
ft__ret=ft_printf("%-3.10X",0);
printf("\n");printf("\n");
printf("case : [\"%%-3.10X\",-0]\n");
ori_ret=printf("%-3.10X",-0);
printf("\n");
ft__ret=ft_printf("%-3.10X",-0);
printf("\n");printf("\n");
printf("case : [\"%%-10.3X\",0]\n");
ori_ret=printf("%-10.3X",0);
printf("\n");
ft__ret=ft_printf("%-10.3X",0);
printf("\n");printf("\n");
printf("case : [\"%%-10.3X\",-0]\n");
ori_ret=printf("%-10.3X",-0);
printf("\n");
ft__ret=ft_printf("%-10.3X",-0);
printf("\n");printf("\n");
printf("case : [\"%%0X\",0]\n");
ori_ret=printf("%0X",0);
printf("\n");
ft__ret=ft_printf("%0X",0);
printf("\n");printf("\n");
printf("case : [\"%%.0X\",0]\n");
ori_ret=printf("%.0X",0);
printf("\n");
ft__ret=ft_printf("%.0X",0);
printf("\n");printf("\n");
printf("case : [\"%%.X\",0]\n");
ori_ret=printf("%.X",0);
printf("\n");
ft__ret=ft_printf("%.X",0);
printf("\n");printf("\n");
printf("case : [\"%%0X\",-0]\n");
ori_ret=printf("%0X",-0);
printf("\n");
ft__ret=ft_printf("%0X",-0);
printf("\n");printf("\n");
printf("case : [\"%%.0X\",-0]\n");
ori_ret=printf("%.0X",-0);
printf("\n");
ft__ret=ft_printf("%.0X",-0);
printf("\n");printf("\n");
printf("case : [\"%%.X\",-0]\n");
ori_ret=printf("%.X",-0);
printf("\n");
ft__ret=ft_printf("%.X",-0);
printf("\n");printf("\n");

return (0);
}