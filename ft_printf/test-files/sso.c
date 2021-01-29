
#include <stdio.h>
#include "ft_printf.h"

#define RET_CHECK   if (ft__ret != ori_ret) printf("\nERROR  - ret error No. %d - \n\n",i);
#define CASE        i++; printf("\n- case = %d -\n", i);

int     main(void)
{
    int i;
    int ori_ret;
    int ft__ret;

    char    str[10];
    unsigned int u_val;
    
    i = 0;

    printf("\n --- %%d --- \n");

    CASE
    ori_ret = printf("ori [%d]\n", i);
    ft__ret = ft_printf("ft_ [%d]\n", i);
    RET_CHECK

    printf("\n\n - WIDTH - \n");
    CASE
    ori_ret = printf("ori [%10d]\n", i);
    ft__ret = ft_printf("ft_ [%10d]\n",i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%0d]\n", i);
    ft__ret = ft_printf("ft_ [%0d]\n",i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%010d]\n", i);
    ft__ret = ft_printf("ft_ [%010d]\n", i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%-10d]\n", i);
    ft__ret = ft_printf("ft_ [%-10d]\n", i);
    RET_CHECK

    
    printf("\n\n - PRECISION - \n");

    CASE
    ori_ret = printf("ori [%.10d]\n", i);
    ft__ret = ft_printf("ft_ [%.10d]\n", i);
    RET_CHECK

    CASE
    printf("PRECISION = 0 & arg = 0\n");
    ori_ret = printf("ori [%.0d]\n", i);
    ft__ret = ft_printf("ft_ [%.0d]\n", i);
    RET_CHECK

    CASE
    printf("PRECISION = 0 & arg = 0\n");
    ori_ret = printf("ori [%.0d]\n", 0);
    ft__ret = ft_printf("ft_ [%.0d]\n", 0);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%10d]\n", i);
    ft__ret = ft_printf("ft_ [%10d]\n",i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%0.10d]\n", i);
    ft__ret = ft_printf("ft_ [%0.10d]\n", i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%-.10d]\n", i);
    ft__ret = ft_printf("ft_ [%-.10d]\n", i);
    RET_CHECK

    printf("\n\n - WIDTH & PRECISION - \n");

    CASE
    ori_ret = printf("ori [%10.3d]\n", i);
    ft__ret = ft_printf("ft_ [%10.3d]\n", i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%-10.3d]\n", i);
    ft__ret = ft_printf("ft_ [%-10.3d]\n", i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%010.3d]\n", i);
    ft__ret = ft_printf("ft_ [%010.3d]\n", i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%010.15d]\n", i);
    ft__ret = ft_printf("ft_ [%010.15d]\n", i);
    RET_CHECK




    printf("\n --- %%x --- \n");

    CASE
    ori_ret = printf("ori [%x]\n", i);
    ft__ret = ft_printf("ft_ [%x]\n", i);
    RET_CHECK

    printf("\n\n - WIDTH - \n");
    CASE
    ori_ret = printf("ori [%10x]\n", i);
    ft__ret = ft_printf("ft_ [%10x]\n",i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%0x]\n", i);
    ft__ret = ft_printf("ft_ [%0x]\n",i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%010x]\n", i);
    ft__ret = ft_printf("ft_ [%010x]\n", i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%-10x]\n", i);
    ft__ret = ft_printf("ft_ [%-10x]\n", i);
    RET_CHECK

    
    printf("\n\n - PRECISION - \n");

    CASE
    ori_ret = printf("ori [%.10x]\n", i);
    ft__ret = ft_printf("ft_ [%.10x]\n", i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%.0x]\n", i);
    ft__ret = ft_printf("ft_ [%.0x]\n", i);
    RET_CHECK

    //add
    CASE
    ori_ret = printf("ori [%.0x]\n", 3);
    ft__ret = ft_printf("ft_ [%.0x]\n", 3);
    RET_CHECK

    //add
    CASE
    ori_ret = printf("ori [%.0x]\n", 11);
    ft__ret = ft_printf("ft_ [%.0x]\n", 11);
    RET_CHECK

    CASE

    printf("PRECISION = 0 & arg = 0\n");
    ori_ret = printf("ori [%.0x]\n", 0);
    ft__ret = ft_printf("ft_ [%.0x]\n", 0);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%10x]\n", i);
    ft__ret = ft_printf("ft_ [%10x]\n",i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%0.10x]\n", i);
    ft__ret = ft_printf("ft_ [%0.10x]\n", i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%-.10x]\n", i);
    ft__ret = ft_printf("ft_ [%-.10x]\n", i);
    RET_CHECK

    printf("\n\n - WIDTH & PRECISION - \n");

    CASE
    ori_ret = printf("ori [%10.3x]\n", i);
    ft__ret = ft_printf("ft_ [%10.3x]\n", i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%-10.3x]\n", i);
    ft__ret = ft_printf("ft_ [%-10.3x]\n", i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%010.3x]\n", i);
    ft__ret = ft_printf("ft_ [%010.3x]\n", i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%010.15x]\n", i);
    ft__ret = ft_printf("ft_ [%010.15x]\n", i);
    RET_CHECK









    printf("\n --- %%p --- \n");

    CASE
    ori_ret = printf("ori [%p]\n", str);
    ft__ret = ft_printf("ft_ [%p]\n", str);
    RET_CHECK

    printf("\n\n - WIDTH - \n");
    CASE
    ori_ret = printf("ori [%20p]\n", str);
    ft__ret = ft_printf("ft_ [%20p]\n",str);
    RET_CHECK

    printf("\n - original %%p 0 flag is warning - \n");

    /*
    CASE
    ori_ret = printf("ori [%0p]\n", str);
    ft__ret = ft_printf("ft_ [%0p]\n",str);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%010p]\n", str);
    ft__ret = ft_printf("ft_ [%010p]\n", str);
    RET_CHECK
    */

    CASE
    ori_ret = printf("ori [%-20p]\n", str);
    ft__ret = ft_printf("ft_ [%-20p]\n", str);
    RET_CHECK

    
    printf("\n\n - PRECISION - \n");
    printf("\n - original %%p precision is warning - \n");

    /*
    CASE
    ori_ret = printf("ori [%.20p]\n", str);
    ft__ret = ft_printf("ft_ [%.20p]\n", str);
    RET_CHECK

    CASE
    printf("PRECISION = 0 & arg = 0\n");
    ori_ret = printf("ori [%.0p]\n", 0);
    ft__ret = ft_printf("ft_ [%.0p]\n", 0);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%20p]\n", str);
    ft__ret = ft_printf("ft_ [%20p]\n",str);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%0.10p]\n", str);
    ft__ret = ft_printf("ft_ [%0.10p]\n", str);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%-.10p]\n", str);
    ft__ret = ft_printf("ft_ [%-.10p]\n", str);
    RET_CHECK


    printf("\n\n - WIDTH & PRECISION - \n");

    CASE
    ori_ret = printf("ori [%20.3p]\n", str);
    ft__ret = ft_printf("ft_ [%20.3p]\n", str);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%-20.3p]\n", str);
    ft__ret = ft_printf("ft_ [%-20.3p]\n", str);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%020.3p]\n", str);
    ft__ret = ft_printf("ft_ [%020.3p]\n", str);
    RET_CHECK
    */








   printf("\n --- %%u --- \n");

    u_val = 2147483647;
    //int max;

    CASE
    ori_ret = printf("ori [%u]\n", u_val + i);
    ft__ret = ft_printf("ft_ [%u]\n", u_val + i);
    RET_CHECK

    printf("\n\n - WIDTH - \n");
    CASE
    ori_ret = printf("ori [%20u]\n", u_val + i);
    ft__ret = ft_printf("ft_ [%20u]\n",u_val + i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%0u]\n", u_val + i);
    ft__ret = ft_printf("ft_ [%0u]\n",u_val + i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%020u]\n", u_val + i);
    ft__ret = ft_printf("ft_ [%020u]\n", u_val + i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%-20u]\n", u_val + i);
    ft__ret = ft_printf("ft_ [%-20u]\n", u_val + i);
    RET_CHECK

    
    printf("\n\n - PRECISION - \n");

    CASE
    ori_ret = printf("ori [%.20u]\n", u_val + i);
    ft__ret = ft_printf("ft_ [%.20u]\n", u_val + i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%.0u]\n", i);
    ft__ret = ft_printf("ft_ [%.0u]\n", i);
    RET_CHECK

    CASE
    printf("PRECISION = 0 & arg = 0\n");
    ori_ret = printf("ori [%.0u]\n", 0);
    ft__ret = ft_printf("ft_ [%.0u]\n", 0);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%20u]\n", u_val + i);
    ft__ret = ft_printf("ft_ [%20u]\n",u_val + i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%0.20u]\n", u_val + i);
    ft__ret = ft_printf("ft_ [%0.20u]\n", u_val + i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%-.20u]\n", u_val + i);
    ft__ret = ft_printf("ft_ [%-.20u]\n", u_val + i);
    RET_CHECK

    printf("\n\n - WIDTH & PRECISION - \n");

    CASE
    ori_ret = printf("ori [%20.3u]\n", u_val + i);
    ft__ret = ft_printf("ft_ [%20.3u]\n", u_val + i);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%-20.3u]\n", u_val + i);
    ft__ret = ft_printf("ft_ [%-20.3u]\n", u_val + i);
    RET_CHECK


    CASE
    ori_ret = printf("ori [%010.3u]\n", u_val + i);
    ft__ret = ft_printf("ft_ [%010.3u]\n", u_val + i);
    RET_CHECK

    //add
    CASE
    ori_ret = printf("ori [%-20.15u]\n", u_val + i);
    ft__ret = ft_printf("ft_ [%-20.15u]\n", u_val + i);
    RET_CHECK

    //add
    CASE
    ori_ret = printf("ori [%-10.15u]\n", u_val + i);
    ft__ret = ft_printf("ft_ [%-10.15u]\n", u_val + i);
    RET_CHECK

















    printf("\n --- %%s --- \n");

    char    s1[10] = "abcde";
    char    s2[10];

    CASE
    ori_ret = printf("ori [%s]\n", s1);
    ft__ret = ft_printf("ft_ [%s]\n", s1);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%s]\n", s2);
    ft__ret = ft_printf("ft_ [%s]\n", s2);
    RET_CHECK

    printf("\n\n - WIDTH - \n");
    CASE
    ori_ret = printf("ori [%10s]\n", s1);
    ft__ret = ft_printf("ft_ [%10s]\n", s1);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%10s]\n", s2);
    ft__ret = ft_printf("ft_ [%10s]\n", s2);
    RET_CHECK

    printf("\n - original %%s 0 flag is warning - \n");
    /*
    CASE
    ori_ret = printf("ori [%0s]\n", s1);
    ft__ret = ft_printf("ft_ [%0]\n",s1);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%020s]\n", s1);
    ft__ret = ft_printf("ft_ [%020s]\n", s1);
    RET_CHECK
    */

    CASE
    ori_ret = printf("ori [%-10s]\n", s1);
    ft__ret = ft_printf("ft_ [%-10s]\n", s1);
    RET_CHECK

    
    printf("\n\n - PRECISION - \n");


    CASE
    ori_ret = printf("ori [%.10s]\n", s1);
    ft__ret = ft_printf("ft_ [%.10s]\n", s1);
    RET_CHECK

    /*
    CASE
    printf("PRECISION = 0 & arg = 0\n");
    ori_ret = printf("ori [%.0s]\n", s1);
    ft__ret = ft_printf("ft_ [%.0s]\n", s1);
    RET_CHECK
    */


    CASE
    printf("PRECISION = 0\n");
    ori_ret = printf("ori [%.0s]\n", s1);
    ft__ret = ft_printf("ft_ [%.0s]\n", s1);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%.0s]\n", s2);
    ft__ret = ft_printf("ft_ [%.0s]\n", s2);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%.20s]\n", s1);
    ft__ret = ft_printf("ft_ [%.20s]\n",s1);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%.2s]\n", s1);
    ft__ret = ft_printf("ft_ [%.2s]\n", s1);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%.2s]\n", s2);
    ft__ret = ft_printf("ft_ [%.2s]\n", s2);
    RET_CHECK



    printf("\n\n - WIDTH & PRECISION - \n");

    CASE
    ori_ret = printf("ori [%20.3s]\n", s1);
    ft__ret = ft_printf("ft_ [%20.3s]\n", s1);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%-20.3s]\n", s1);
    ft__ret = ft_printf("ft_ [%-20.3s]\n", s1);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%-10.15s]\n", s1);
    ft__ret = ft_printf("ft_ [%-10.15s]\n", s1);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%.s]\n", s1);
    ft__ret = ft_printf("ft_ [%.s]\n", s1);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%5.s]\n", s1);
    ft__ret = ft_printf("ft_ [%5.s]\n", s1);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%-5.s]\n", s1);
    ft__ret = ft_printf("ft_ [%-5.s]\n", s1);
    RET_CHECK

    printf("\n\n - NULL - \n");

    CASE
    ori_ret = printf("ori [%s]\n", NULL);
    ft__ret = ft_printf("ft_ [%s]\n", NULL);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%10s]\n", NULL);
    ft__ret = ft_printf("ft_ [%10s]\n", NULL);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%3s]\n", NULL);
    ft__ret = ft_printf("ft_ [%3s]\n", NULL);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%-10s]\n", NULL);
    ft__ret = ft_printf("ft_ [%-10s]\n", NULL);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%-3s]\n", NULL);
    ft__ret = ft_printf("ft_ [%-3s]\n", NULL);
    RET_CHECK
    
    CASE
    ori_ret = printf("ori [%.10s]\n", NULL);
    ft__ret = ft_printf("ft_ [%.10s]\n", NULL);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%.6s]\n", NULL);
    ft__ret = ft_printf("ft_ [%.6s]\n", NULL);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%.3s]\n", NULL);
    ft__ret = ft_printf("ft_ [%.3s]\n", NULL);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%.0s]\n", NULL);
    ft__ret = ft_printf("ft_ [%.0s]\n", NULL);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%.s]\n", NULL);
    ft__ret = ft_printf("ft_ [%.s]\n", NULL);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%10.3s]\n", NULL);
    ft__ret = ft_printf("ft_ [%10.3s]\n", NULL);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%10.7s]\n", NULL);
    ft__ret = ft_printf("ft_ [%10.7s]\n", NULL);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%3.7s]\n", NULL);
    ft__ret = ft_printf("ft_ [%3.7s]\n", NULL);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%-10.3s]\n", NULL);
    ft__ret = ft_printf("ft_ [%-10.3s]\n", NULL);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%-10.7s]\n", NULL);
    ft__ret = ft_printf("ft_ [%-10.7s]\n", NULL);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%-3.7s]\n", NULL);
    ft__ret = ft_printf("ft_ [%-3.7s]\n", NULL);
    RET_CHECK


    


    printf("\n --- %%c --- \n");

    char    c;

    c = 'r';

    CASE
    ori_ret = printf("ori [%c]\n", c);
    ft__ret = ft_printf("ft_ [%c]\n", c);
    RET_CHECK

    printf("\n\n - WIDTH - \n");
    CASE
    ori_ret = printf("ori [%10c]\n", c);
    ft__ret = ft_printf("ft_ [%10c]\n",c);
    RET_CHECK

    printf("\n - original %%c 0 flag is warning - \n");
    /*
    CASE
    ori_ret = printf("ori [%0c]\n", c);
    ft__ret = ft_printf("ft_ [%0c]\n",c);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%010c]\n", c);
    ft__ret = ft_printf("ft_ [%010c]\n", c);
    RET_CHECK
    */
    CASE
    ori_ret = printf("ori [%-10c]\n", c);
    ft__ret = ft_printf("ft_ [%-10c]\n", c);
    RET_CHECK

    
    printf("\n\n - PRECISION - \n");
    printf("\n - original %%c PRECISION is warning - \n");
    /*
    CASE
    ori_ret = printf("ori [%.10c]\n", c);
    ft__ret = ft_printf("ft_ [%.10c]\n", c);
    RET_CHECK

    CASE
    printf("PRECISION = 0 & arg = 0\n");
    ori_ret = printf("ori [%.0c]\n", c);
    ft__ret = ft_printf("ft_ [%.0c]\n", c);
    RET_CHECK

    CASE
    printf("PRECISION = 0 & arg = 0\n");
    ori_ret = printf("ori [%.0c]\n", 0);
    ft__ret = ft_printf("ft_ [%.0c]\n", 0);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%10c]\n", c);
    ft__ret = ft_printf("ft_ [%10c]\n",c);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%0.10c]\n", c);
    ft__ret = ft_printf("ft_ [%0.10c]\n", c);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%-.10c]\n", c);
    ft__ret = ft_printf("ft_ [%-.10c]\n", c);
    RET_CHECK

    printf("\n\n - WIDTH & PRECISION - \n");

    CASE
    ori_ret = printf("ori [%10.3c]\n", c);
    ft__ret = ft_printf("ft_ [%10.3c]\n", c);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%-10.3c]\n", c);
    ft__ret = ft_printf("ft_ [%-10.3c]\n", c);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%010.3c]\n", c);
    ft__ret = ft_printf("ft_ [%010.3c]\n", c);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%010.15c]\n", c);
    ft__ret = ft_printf("ft_ [%010.15c]\n", c);
    RET_CHECK
    */

    CASE
    ori_ret = printf("ori [%-1c]\n", c);
    ft__ret = ft_printf("ft_ [%-1c]\n", c);
    RET_CHECK
    

    printf("c = 0 or c = -10 \n");

    CASE
    ori_ret = printf("ori [%c]\n", 0);
    ft__ret = ft_printf("ft_ [%c]\n", 0);
    RET_CHECK
    
    CASE
    ori_ret = printf("ori [%10c]\n", 0);
    ft__ret = ft_printf("ft_ [%10c]\n", 0);
    RET_CHECK

    CASE
    ori_ret = printf("ori [%c]\n", -10);
    ft__ret = ft_printf("ft_ [%c]\n", -10);
    RET_CHECK


    printf("\n --- %%%% --- \n");

    CASE
    ori_ret = printf("ori %%\n");
    ft__ret = ft_printf("ft_ %%\n");
    RET_CHECK

    CASE
    ori_ret = printf("ori %3%\n");
    ft__ret = ft_printf("ft_ %3%\n");
    RET_CHECK

    CASE
    ori_ret = printf("ori %05%\n");
    ft__ret = ft_printf("ft_ %05%\n");
    RET_CHECK

    CASE
    ori_ret = printf("ori %-5%\n");
    ft__ret = ft_printf("ft_ %-5%\n");
    RET_CHECK

    CASE
    ori_ret = printf("ori %0%\n");
    ft__ret = ft_printf("ft_ %0%\n");
    RET_CHECK

    CASE
    ori_ret = printf("ori %-10%\n");
    ft__ret = ft_printf("ft_ %-10%\n");
    RET_CHECK

    CASE
    ori_ret = printf("ori %.%\n");
    ft__ret = ft_printf("ft_ %.%\n");
    RET_CHECK

    CASE
    ori_ret = printf("ori %.0%\n");
    ft__ret = ft_printf("ft_ %.0%\n");
    RET_CHECK

    CASE
    ori_ret = printf("ori %.10%\n");
    ft__ret = ft_printf("ft_ %.10%\n");
    RET_CHECK

    CASE
    ori_ret = printf("ori %10.3%\n");
    ft__ret = ft_printf("ft_ %10.3%\n");
    RET_CHECK

    CASE
    ori_ret = printf("ori %-10.3%\n");
    ft__ret = ft_printf("ft_ %-10.3%\n");
    RET_CHECK

    CASE
    ori_ret = printf("ori %010.3%\n");
    ft__ret = ft_printf("ft_ %010.3%\n");
    RET_CHECK

    CASE
    ori_ret = printf("ori %%%%%%%%\n");
    ft__ret = ft_printf("ft_ %%%%%%%%\n");
    RET_CHECK



    // others test

    printf("ori %p\n", NULL);
    ft_printf("ft_ %p\n", NULL);

    printf("ori %p\n", &i);
    ft_printf("ft_ %p\n", &i);

    CASE
    ori_ret = printf("test_   printf: [%20p]\n", (void*)-213213156677);
    ft__ret = ft_printf("test_ft_printf: [%20p]\n", (void*)-213213156677);
    RET_CHECK

    CASE
    ori_ret = printf("test_   printf: [%20p]\n", (void*)-213213);
    ft__ret = ft_printf("test_ft_printf: [%20p]\n", (void*)-213213);
    RET_CHECK

    unsigned int test;

    test = 2147483648;

    CASE
    ori_ret = printf("test_   printf: [%20d]\n", test);
    ft__ret = ft_printf("test_ft_printf: [%20d]\n", test);
    RET_CHECK

    printf("case : [\"%%d\",10]\n");
ori_ret=printf("%d",10);
printf("\n");
ft__ret=ft_printf("%d",10);
printf("\n");
printf("case : [\"%%10.3d\",1]\n");
ori_ret=printf("%10.3d",1);
printf("\n");
ft__ret=ft_printf("%10.3d",1);
printf("\n");



printf("case : [\"%%d\",10]\n");
ori_ret=printf("%d",10);
printf("\n");
ft__ret=ft_printf("%d",10);
printf("\n");
printf("case : [\"%%10.3s\",\"test\"]\n");
ori_ret=printf("%10.3s","test");
printf("\n");
ft__ret=ft_printf("%10.3s","test");
printf("\n");
printf("case : [\"%%10.5s\",NULL]\n");
ori_ret=printf("%10.5s",NULL);
printf("\n");
ft__ret=ft_printf("%10.5s",NULL);
printf("\n");


printf("case : [\"%%d\",10]\n");
ori_ret=printf("%d",10);
printf("\n");
ft__ret=ft_printf("%d",10);
printf("\n");
printf("case : [\"%%10.3s\",\"test\"]\n");
ori_ret=printf("%10.3s","test");
printf("\n");
ft__ret=ft_printf("%10.3s","test");
printf("\n");
printf("case : [\"%%10.5s\",NULL]\n");
ori_ret=printf("%10.5s",NULL);
printf("\n");
ft__ret=ft_printf("%10.5s",NULL);
printf("\n");
printf("case : [\"%%10s %%3d %%p\", \"test\", 100, 1]\n");
ori_ret=printf("%10s %3d %p", "test", 100, 1);
printf("\n");
ft__ret=ft_printf("%10s %3d %p", "test", 100, 1);
printf("\n");
    //while(1);
    //system("leaks a.out");
    return (0);
}
