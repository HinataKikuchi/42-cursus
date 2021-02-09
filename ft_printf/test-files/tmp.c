#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	ori_ret;
	int	ft__ret;

printf("case : [\"[%%d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%5d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%5d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%5d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%7d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%7d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%7d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%0d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%0d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%0d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%05d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%05d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%05d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%07d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%07d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%07d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%-d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-5d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%-5d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-5d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-7d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%-7d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-7d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%5d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%5d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%5d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%7d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%7d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%7d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%0d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%0d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%0d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%05d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%05d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%05d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%07d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%07d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%07d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%-d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-5d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%-5d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-5d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-7d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%-7d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-7d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%5d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%5d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%5d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%7d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%7d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%7d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%0d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%0d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%0d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%05d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%05d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%05d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%07d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%07d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%07d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-5d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-5d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-5d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-7d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-7d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-7d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%.d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%.d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%.d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%.0d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%.0d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%.0d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%.3d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%.3d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%.3d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%.5d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%.5d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%.5d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%.7d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%.7d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%.7d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%0.d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%0.d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%0.d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%0.0d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%0.0d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%0.0d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%0.3d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%0.3d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%0.3d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%0.5d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%0.5d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%0.5d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%0.7d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%0.7d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%0.7d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-.d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%-.d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-.d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-.0d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%-.0d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-.0d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-.3d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%-.3d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-.3d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-.7d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%-.7d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-.7d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%.d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%.d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%.d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%.0d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%.0d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%.0d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%.3d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%.3d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%.3d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%.5d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%.5d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%.5d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%.7d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%.7d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%.7d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%0.d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%0.d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%0.d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%0.0d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%0.0d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%0.0d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%0.3d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%0.3d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%0.3d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%0.5d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%0.5d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%0.5d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%0.7d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%0.7d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%0.7d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-.d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%-.d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-.d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-.0d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%-.0d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-.0d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-.3d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%-.3d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-.3d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-.7d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%-.7d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-.7d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%.d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%.d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%.d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%.0d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%.0d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%.0d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%.3d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%.3d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%.3d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%.5d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%.5d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%.5d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%.7d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%.7d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%.7d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%0.d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%0.d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%0.d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%0.0d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%0.0d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%0.0d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%0.3d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%0.3d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%0.3d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%0.5d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%0.5d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%0.5d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%0.7d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%0.7d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%0.7d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-.d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-.d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-.d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-.0d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-.0d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-.0d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-.3d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-.3d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-.3d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-.7d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-.7d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-.7d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%10.d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.0d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%10.0d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.0d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.3d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%10.3d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.3d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.5d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%10.5d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.5d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.7d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%10.7d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.7d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.10d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%10.10d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.10d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%0.10d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%0.10d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%0.10d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%3.10d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%3.10d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%3.10d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%5.10d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%5.10d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%5.10d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%7.10d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%7.10d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%7.10d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%010.d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.0d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%010.0d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.0d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.3d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%010.3d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.3d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.5d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%010.5d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.5d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.7d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%010.7d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.7d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.10d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%010.10d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.10d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%00.10d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%00.10d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%00.10d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%03.10d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%03.10d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%03.10d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%05.10d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%05.10d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%05.10d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%07.10d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%07.10d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%07.10d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%-10.d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.0d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%-10.0d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.0d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.3d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%-10.3d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.3d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.5d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%-10.5d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.5d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.7d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%-10.7d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.7d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.10d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%-10.10d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.10d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-3.10d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%-3.10d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-3.10d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-5.10d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%-5.10d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-5.10d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-7.10d]\",54321]\n");
printf("ori  : ");
ori_ret=printf("[%-7.10d]",54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-7.10d]",54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%10.d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.0d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%10.0d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.0d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.3d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%10.3d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.3d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.5d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%10.5d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.5d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.7d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%10.7d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.7d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.10d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%10.10d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.10d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%0.10d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%0.10d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%0.10d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%3.10d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%3.10d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%3.10d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%5.10d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%5.10d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%5.10d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%7.10d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%7.10d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%7.10d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%010.d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.0d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%010.0d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.0d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.3d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%010.3d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.3d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.5d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%010.5d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.5d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.7d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%010.7d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.7d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.10d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%010.10d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.10d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%00.10d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%00.10d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%00.10d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%03.10d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%03.10d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%03.10d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%05.10d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%05.10d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%05.10d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%07.10d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%07.10d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%07.10d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%-10.d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.0d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%-10.0d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.0d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.3d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%-10.3d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.3d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.5d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%-10.5d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.5d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.7d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%-10.7d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.7d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.10d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%-10.10d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.10d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-3.10d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%-3.10d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-3.10d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-5.10d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%-5.10d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-5.10d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-7.10d]\",-54321]\n");
printf("ori  : ");
ori_ret=printf("[%-7.10d]",-54321);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-7.10d]",-54321);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%10.d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.0d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%10.0d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.0d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.3d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%10.3d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.3d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.5d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%10.5d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.5d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.7d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%10.7d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.7d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%10.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%0.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%0.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%0.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%3.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%3.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%3.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%5.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%5.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%5.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%7.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%7.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%7.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%010.d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.0d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%010.0d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.0d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.3d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%010.3d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.3d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.5d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%010.5d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.5d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.7d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%010.7d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.7d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%010.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%00.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%00.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%00.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%03.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%03.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%03.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%05.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%05.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%05.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%07.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%07.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%07.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-10.d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.0d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-10.0d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.0d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.3d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-10.3d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.3d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.5d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-10.5d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.5d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.7d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-10.7d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.7d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-10.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-3.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-3.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-3.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-5.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-5.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-5.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-7.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-7.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-7.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%10.d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.0d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%10.0d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.0d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.3d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%10.3d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.3d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.5d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%10.5d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.5d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.7d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%10.7d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.7d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%10.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%10.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%10.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%0.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%0.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%0.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%3.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%3.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%3.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%5.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%5.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%5.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%7.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%7.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%7.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%010.d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.0d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%010.0d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.0d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.3d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%010.3d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.3d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.5d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%010.5d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.5d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.7d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%010.7d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.7d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%010.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%010.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%010.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%00.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%00.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%00.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%03.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%03.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%03.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%05.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%05.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%05.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%07.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%07.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%07.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-10.d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.0d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-10.0d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.0d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.3d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-10.3d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.3d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.5d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-10.5d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.5d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.7d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-10.7d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.7d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-10.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-10.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-10.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-3.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-3.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-3.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-5.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-5.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-5.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");

printf("case : [\"[%%-7.10d]\",0]\n");
printf("ori  : ");
ori_ret=printf("[%-7.10d]",0);
printf("\n");
printf("ft_  : "); fflush(stdout);
ft__ret=ft_printf("[%-7.10d]",0);
printf("\n");printf("\n");
if(ori_ret != ft__ret) printf("RET ERROR");


return (0);
}