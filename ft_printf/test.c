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
#include "ft_printf.h"
#include <limits.h>

// int main(void)
// {
// 	// int or = printf("42%46c42",'0');
// 	// printf("\n");
// 	// int ft = printf("42%46c42",'0');
// 	// printf("\nor = %d\nft = %d\n",or,ft);
// 	// printf("%.d\n",-100);
// 	// ft_printf("%.d\n",-100);
// 	int		a = -4;
// 	char	c = 'a';
// 	int		d = 2147483647;
// 	int		e = -2147483648;
// 	int		i = 8;
// 	int		j = -12;
// 	int		k = 123456789;
// 	int		l = 0;
// 	int		m = -12345678;
// 	// while (a < 5) //T34-69
// 	// {
// 	// 	printf(" --- Return : %d\n", ft_printf("%*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d));
// 	// 	printf(" --- Return : %d\n", ft_printf("%0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d));
// 	// 	printf(" --- Return : %d\n", ft_printf("%-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d));
// 	// 	printf(" --- Return : %d\n", ft_printf("%.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d));
// 	// 	printf(" --- ori_Return : %d\n", printf("%.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d));

// 	// 	a++;
// 	// }

// // printf("%.*d\n",-4,0);
// // ft_printf("%.*d\n",-4,0);

// printf("%d",ft_itoa("-2147483648"));

// 	// printf("%s\n",ft_strdup("\0"));
// }


#include <stdio.h>

int main(void)
{
	char *s = NULL;
	printf("s=NULL\n");
	printf("[%%.s]=[%.s]\n",s);
	printf("[%%.0s]=[%.0s]\n",s);
	printf("[%%0.s]=[%0.s]\n",s);
	printf("[%%0.0s]=[%0.0s]\n",s);
	printf("[%%0s]=[%0s]\n",s);

	int d = 0;
	printf("d=0\n");
	printf("[%%.d]=[%.d]\n",d);
	printf("[%%.0d]=[%.0d]\n",d);
	printf("[%%0.d]=[%0.d]\n",d);
	printf("[%%0.0d]=[%0.0d]\n",d);
	printf("[%%0d]=[%0d]\n",d);

	unsigned int u = 0;
	printf("u=0\n");
	printf("[%%.u]=[%.u]\n",u);
	printf("[%%.0u]=[%.0u]\n",u);
	printf("[%%0.u]=[%0.u]\n",u);
	printf("[%%0.0u]=[%0.0u]\n",u);
	printf("[%%0u]=[%0u]\n",u);

	unsigned int x = 0;
	printf("\nx = 0\n");
	printf("[%%.x]=[%.x]\n",x);
	printf("[%%.0x]=[%.0x]\n",x);
	printf("[%%0.x]=[%0.x]\n",x);
	printf("[%%0.0x]=[%0.0x]\n",x);
	printf("[%%0x]=[%0x]\n",x);

	printf("\nX = 0\n");
	printf("[%%.X]=[%.X]\n",x);
	printf("[%%.0X]=[%.0X]\n",x);
	printf("[%%0.X]=[%0.X]\n",x);
	printf("[%%0.0X]=[%0.0X]\n",x);
	printf("[%%0x]=[%0x]\n",x);
	printf("\nx = 0\n[%%10.3x]\n[%%3.10x]\n[%%10.x]\n[%%3.x]\n[%%.10x]\n[%%.3x]\n");
	printf("[%%10.3x]=[%10.3x]\n",x);
	printf("[%%3.10x]=[%3.10x]\n",x);
	printf("[%%10.x]=[%10.x]\n",x);
	printf("[%%3.x]=[%3.x]\n",x);
	printf("[%%.10x]=[%.10x]\n",x);
	printf("[%%.3x]=[%.3x]\n",x);

	int p = NULL;
	printf("\np = NULL\n");
	printf("[%%.p]=[%.p]\n",p);
	printf("[%%.0p]=[%.0p]\n",p);
	printf("[%%0.p]=[%0.p]\n",p);
	printf("[%%0.0p]=[%0.0p]\n",p);
	printf("[%%0p]=[%0p]\n",p);
	printf("\np = NULL\n");
	printf("[%%10.3p]=[%10.3p]\n",p);
	printf("[%%3.10p]=[%3.10p]\n",p);
	printf("[%%10.p]=[%10.p]\n",p);
	printf("[%%3.p]=[%3.p]\n",p);
	printf("[%%.10p]=[%.10p]\n",p);
	printf("[%%.3p]=[%.3p]\n",p);
	
}
