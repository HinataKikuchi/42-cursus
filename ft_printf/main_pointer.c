#include <stdio.h>
#include <unistd.h>
# include <stdarg.h>
#include <stdlib.h>
#include <string.h>
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
#include "./make_string.c"
#include "./calc_hex.c"
#include "./ft_write_large_hex.c"
#include "./ft_write_pointer.c"
#include "./ft_printf.h"

int main (void)
{
	int *p;
	*p = -1;
	printf("printf(\"[%%p]\",p)\n");
	printf("[%p]\n",p);
	ft_printf("[%p]\n",p);
	printf("printf(\"[%%3p]\",p)\n");
	printf("[%3p]\n",p);
	printf("printf(\"[%%.3p]\",p)\n");

	printf("[%.3p]\n",p);
	printf("[%1.3p]\n",p);
	printf("[%03p]\n",p);
	printf("[%.03p]\n",p);
	printf("[%03.03p]\n",p);
	printf("[%-p]\n",p);
	printf("[%-3p]\n",p);
	printf("[%-.3p]\n",p);
	printf("[%-3.3p]\n",p);
	printf("[%-03p]\n",p);
	printf("[%-.03p]\n",p);
	printf("[%-03.03p]\n",p);

	printf("printf(\"[%%20p]\",p)\n");
	printf("[%20p]\n",p);
	printf("printf(\"[%%.20p]\",p);\n");
	printf("[%.20p]\n",p);
	printf("[%%20.20p]\",p)\n");
	printf("[%20.20p]\n",p);
	printf("printf(\"[%%020p]\",p)\n");
	printf("[%020p]\n",p);
	printf("printf(\"[%%.020p]\",p)\n");
	printf("[%.020p]\n",p);
	printf("printf(\"[%%020.020p]\",p)\n");
	printf("[%020.020p]\n",p);
	printf("printf(\"[%-p]\",p)\n");
	printf("[%-p]\n",p);
	printf("printf(\"[%%-20p]\",p)\n");
	printf("[%-20p]\n",p);
	printf("printf(\"[%%-.20p]\",p)\n");
	printf("[%-.20p]\n",p);
	printf("printf(\"[%%-20.20p]\",p)\n");
	printf("[%-20.20p]\n",p);
	printf("printf(\"[%%-020p]\",p)\n");
	printf("[%-020p]\n",p);
	printf("printf(\"[%%-.020p]\",p)\n");
	printf("[%-.020p]\n",p);
	printf("printf(\"[%%-020.020p]\",p)\n");
	printf("[%-020.020p]\n",p);

	printf("\nprintf(\"[%%20.3p]\",p)\n");
	printf("[%20.3p]\n",p);
	printf("printf(\"[%%30.20p]\",p);\n");
	printf("[%30.20p]\n",p);
	printf("printf(\"[%%20.30p]\",p)\n");
	printf("[%20.30p]\n",p);
	printf("printf(\"[%%3.20p]\",p);\n");
	printf("[%3.20p]\n",p);
	printf("printf(\"[%%20.03p]\",p)\n");
	printf("[%20.03p]\n",p);
	printf("printf(\"[%%020.3p]\",p)\n");
	printf("[%020.3p]\n",p);
	printf("printf(\"[%%020.030p]\",p)\n");
	printf("[%020.030p]\n",p);
	printf("printf(\"[%%p]\",p)\n");

	printf("\n__SEARCH_ABOUT_NEGATIVE_NUMBER__\n");
	int *q = -1;
	printf("[%p]\n",q);
	printf("[%30p]\n",q);

}
