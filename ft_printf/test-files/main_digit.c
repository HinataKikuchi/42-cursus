#include <stdio.h>
#include "../ft_printf.h"
#include "../libft/ft_strlen.c"
#include "../libft/ft_substr.c"
#include "../libft/ft_calloc.c"
#include "../libft/ft_atoi.c"
#include "../libft/ft_strlcpy.c"
#include "../libft/ft_itoa.c"
#include "../libft/ft_memcpy.c"
#include "../libft/ft_bzero.c"
#include "../libft/ft_isdigit.c"
#include "../libft/ft_strchr.c"
#include "../get_value.c"
#include "../ft_write_char.c"
#include "../ft_write_string.c"
#include "../ft_write_digit.c"
#include "../ft_write_sp_zero.c"
#include "../ft_printf.c"
#include "../ft_write_unsigned.c"

int main (void)
{
	int d = 420000;
	printf("printf(\"[%%d]\",d)\n");
	printf("[%d]\n",d);
	ft_printf("[%d]\n",d);
	printf("printf(\"[%%1d]\",d)\n");
	printf("[%1d]\n",d);
	ft_printf("[%1d]\n",d);
	printf("printf(\"[%%.1d]\",d)\n");
	printf("[%.1d]\n",d);
	ft_printf("[%.1d]\n",d);
	printf("printf(\"[%%1.1d]\",d)\n");
	printf("[%1.1d]\n",d);
	ft_printf("[%1.1d]\n",d);
	printf("printf(\"[%%01d]\",d)\n");
	printf("[%01d]\n",d);
	ft_printf("[%01d]\n",d);
	printf("printf(\"[%%.01d]\",d)\n");
	printf("[%.01d]\n",d);
	ft_printf("[%.01d]\n",d);
	printf("printf(\"[%%01.01d]\",d)\n");
	printf("[%01.01d]\n",d);
	ft_printf("[%01.01d]\n",d);
	printf("printf(\"[%%-d]\",d)\n");
	printf("[%-d]\n",d);
	printf("printf(\"[%%-1d]\",d)\n");
	printf("[%-1d]\n",d);
	ft_printf("[%-1d]\n",d);
	printf("printf(\"[%%-.1d]\",d)\n");
	printf("[%-.1d]\n",d);
	ft_printf("[%-.1d]\n",d);
	printf("printf(\"[%%-1.1d]\",d)\n");
	printf("[%-1.1d]\n",d);
	ft_printf("[%-1.1d]\n",d);
	printf("printf(\"[%%-01d]\",d)\n");
	printf("[%-01d]\n",d);
	ft_printf("[%-01d]\n",d);
	printf("printf(\"[%%-.01d]\",d)\n");
	printf("[%-.01d]\n",d);
	ft_printf("[%-.01d]\n",d);
	printf("printf(\"[%%-01.01d]\",d)\n");
	printf("[%-01.01d]\n",d);
	ft_printf("[%-01.01d]\n",d);

	printf("\n\nprintf(\"[%%10d]\",d)\n");
	printf("[%10d]\n",d);
	ft_printf("[%10d]\n",d);
	printf("printf(\"[%%.10d]\",d)\n");
	printf("[%.10d]\n",d);
	ft_printf("[%.10d]\n",d);
	printf("printf(\"[%%10.10d]\",d)\n");
	printf("[%10.10d]\n",d);
	ft_printf("[%10.10d]\n",d);
	printf("printf(\"[%%010d]\",d)\n");
	printf("[%010d]\n",d);
	ft_printf("[%010d]\n",d);
	printf("printf(\"[%%.010d]\",d)\n");
	printf("[%.010d]\n",d);
	ft_printf("[%.010d]\n",d);
	printf("printf(\"[%%010.010d]\",d)\n");
	printf("[%010.010d]\n",d);
	ft_printf("[%010.010d]\n",d);
	printf("printf(\"[%%-10d]\",d)\n");
	printf("[%-10d]\n",d);
	ft_printf("[%-10d]\n",d);
	printf("printf(\"[%%-.10d]\",d)\n");
	printf("[%-.10d]\n",d);
	ft_printf("[%-.10d]\n",d);
	printf("printf(\"[%%-10.10d]\",d)\n");
	printf("[%-10.10d]\n",d);
	ft_printf("[%-10.10d]\n",d);
	printf("printf(\"[%%-010d]\",d)\n");
	printf("[%-010d]\n",d);
	ft_printf("[%-010d]\n",d);
	printf("printf(\"[%%-.010d]\",d)\n");
	printf("[%-.010d]\n",d);
	ft_printf("[%-.010d]\n",d);
	printf("printf(\"[%%-010.010d]\",d)\n");
	printf("[%-010.010d]\n",d);
	ft_printf("[%-010.010d]\n",d);

	printf("\n\nprintf(\"[%%10.1d]\",d)\n");
	printf("[%10.1d]\n",d);
	ft_printf("[%10.1d]\n",d);
	printf("printf(\"[%%10.7d]\",d)\n");
	printf("[%10.7d]\n",d);
	ft_printf("[%10.7d]\n",d);
	printf("printf(\"[%%7.10d]\",d)\n");
	printf("[%7.10d]\n",d);
	ft_printf("[%7.10d]\n",d);
	printf("printf(\"[%%010.07d]\",d)\n");
	printf("[%010.07d]\n",d);
	ft_printf("[%010.07d]\n",d);
	printf("printf(\"[%%07.010d]\",d)\n");
	printf("[%07.010d]\n",d);
	ft_printf("[%07.010d]\n",d);
	printf("printf(\"[%%020.11d]\",d)\n");
	printf("[%020.11d]\n",d);
	ft_printf("[%020.11d]\n",d);

}