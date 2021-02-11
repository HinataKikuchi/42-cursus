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
#include "./ft_write_char.c"
#include "./ft_write_string.c"
#include "./ft_write_digit.c"
#include "./ft_write_sp_zero.c"
#include "./ft_printf.c"
#include "./ft_write_unsigned.c"
#include "./ft_write_small_hex.c"
#include "./ft_write_large_hex.c"
#include "./ft_write_pointer.c"
#include "./calc_hex.c"
#include "./libft/ft_strdup.c"
#include "ft_printf.h"
#include <limits.h>

#include <stdio.h>

int main(void)
{
	char c = 0;
	printf("c=0\n");
	printf("[%%.c]=[%.c]\n",c);
	printf("[%%.0c]=[%.0c]\n",c);
	printf("[%%0.c]=[%0.c]\n",c);
	printf("[%%0.0c]=[%0.0c]\n",c);
	printf("[%%0c]=[%0c]\n",c);

	char *s = NULL;
	printf("\ns=NULL\n");
	printf("[%%.s]=[%.s]\n",s);
	printf("[%%.0s]=[%.0s]\n",s);
	printf("[%%0.s]=[%0.s]\n",s);
	printf("[%%0.0s]=[%0.0s]\n",s);
	printf("[%%0s]=[%0s]\n",s);

	int d = 0;
	printf("\nd=0\n");
	printf("[%%.d]=[%.d]\n",d);
	printf("[%%.0d]=[%.0d]\n",d);
	printf("[%%0.d]=[%0.d]\n",d);
	printf("[%%0.0d]=[%0.0d]\n",d);
	printf("[%%0d]=[%0d]\n",d);

	unsigned int u = 0;
	printf("\nu=0\n");
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

	int p = NULL;
	printf("\np = NULL\n");
	printf("[%%.p]=[%.p]\n",p);
	printf("[%%.0p]=[%.0p]\n",p);
	printf("[%%0.p]=[%0.p]\n",p);
	printf("[%%0.0p]=[%0.0p]\n",p);
	printf("[%%0p]=[%0p]\n",p);

	printf("\nd = 0\n");
	printf("[%%10.3d]=[%10.3d]\n",d);
	printf("[%%3.10d]=[%3.10d]\n",d);
	printf("[%%10.d]=[%10.d]\n",d);
	printf("[%%3.d]=[%3.d]\n",d);
	printf("[%%.10d]=[%.10d]\n",d);
	printf("[%%.3d]=[%.3d]\n",d);

	printf("\nu = 0\n");
	printf("[%%10.3u]=[%10.3u]\n",u);
	printf("[%%3.10u]=[%3.10u]\n",u);
	printf("[%%10.u]=[%10.u]\n",u);
	printf("[%%3.u]=[%3.u]\n",u);
	printf("[%%.10u]=[%.10u]\n",u);
	printf("[%%.3u]=[%.3u]\n",u);

	printf("\nx = 0\n");
	printf("[%%10.3x]=[%10.3x]\n",x);
	printf("[%%3.10x]=[%3.10x]\n",x);
	printf("[%%10.x]=[%10.x]\n",x);
	printf("[%%3.x]=[%3.x]\n",x);
	printf("[%%.10x]=[%.10x]\n",x);
	printf("[%%.3x]=[%.3x]\n",x);

	printf("\nc = 0\n");
	printf("[%%10.3c]=[%10.3c]\n",c);
	printf("[%%3.10c]=[%3.10c]\n",c);
	printf("[%%10.c]=[%10.c]\n",c);
	printf("[%%3.c]=[%3.c]\n",c);
	printf("[%%.10c]=[%.10c]\n",c);
	printf("[%%.3c]=[%.3c]\n",c);

	printf("\ns = NULL\n");
	printf("[%%10.3s]=[%10.3s]\n",s);
	printf("[%%3.10s]=[%3.10s]\n",s);
	printf("[%%10.s]=[%10.s]\n",s);
	printf("[%%3.s]=[%3.s]\n",s);
	printf("[%%.10s]=[%.10s]\n",s);
	printf("[%%.3s]=[%.3s]\n",s);

	printf("\nd = NULL\n");
	printf("[%%10.3d]=[%10.3d]\n",d);
	printf("[%%3.10d]=[%3.10d]\n",d);
	printf("[%%10.d]=[%10.d]\n",d);
	printf("[%%3.d]=[%3.d]\n",d);
	printf("[%%.10d]=[%.10d]\n",d);
	printf("[%%.3d]=[%.3d]\n",d);

	printf("\nu = NULL\n");
	printf("[%%10.3u]=[%10.3u]\n",u);
	printf("[%%3.10u]=[%3.10u]\n",u);
	printf("[%%10.u]=[%10.u]\n",u);
	printf("[%%3.u]=[%3.u]\n",u);
	printf("[%%.10u]=[%.10u]\n",u);
	printf("[%%.3u]=[%.3u]\n",u);

	printf("\nx = NULL\n");
	printf("[%%10.3x]=[%10.3x]\n",x);
	printf("[%%3.10x]=[%3.10x]\n",x);
	printf("[%%10.x]=[%10.x]\n",x);
	printf("[%%3.x]=[%3.x]\n",x);
	printf("[%%.10x]=[%.10x]\n",x);
	printf("[%%.3x]=[%.3x]\n",x);

	printf("\nu = NULL\n");
	printf("[%%10.3u]=[%10.3u]\n",u);
	printf("[%%3.10u]=[%3.10u]\n",u);
	printf("[%%10.u]=[%10.u]\n",u);
	printf("[%%3.u]=[%3.u]\n",u);
	printf("[%%.10u]=[%.10u]\n",u);
	printf("[%%.3u]=[%.3u]\n",u);


	printf("\np = NULL\n");
	printf("[%%10.3p]=[%10.3p]\n",p);
	printf("[%%3.10p]=[%3.10p]\n",p);
	printf("[%%10.p]=[%10.p]\n",p);
	printf("[%%3.p]=[%3.p]\n",p);
	printf("[%%.10p]=[%.10p]\n",p);
	printf("[%%.3p]=[%.3p]\n",p);
	
}
