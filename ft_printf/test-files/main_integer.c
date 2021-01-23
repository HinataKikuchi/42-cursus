#include <stdio.h>
#include "../ft_printf.h"
// #include "../libft/ft_strlen.c"
// #include "../libft/ft_substr.c"
// #include "../libft/ft_calloc.c"
// #include "../libft/ft_atoi.c"
// #include "../libft/ft_strlcpy.c"
// #include "../libft/ft_itoa.c"
// #include "../libft/ft_memcpy.c"
// #include "../libft/ft_bzero.c"
// #include "../libft/ft_isdigit.c"
// #include "../libft/ft_strchr.c"
// #include "../get_value.c"
// #include "../ft_write_char.c"
// #include "../ft_write_string.c"
// #include "../ft_write_digit.c"
// #include "../ft_write_sp_zero.c"
// #include "../ft_printf.c"

int main (void)
{
	int d = 420000;
	printf("printf(\"[%%i]\",d)\n");
	printf("[%i]\n",d);
	ft_printf("[%i]\n",d);
	printf("printf(\"[%%1i]\",d)\n");
	printf("[%1i]\n",d);
	ft_printf("[%1i]\n",d);
	printf("printf(\"[%%.1i]\",d)\n");
	printf("[%.1i]\n",d);
	ft_printf("[%.1i]\n",d);
	printf("printf(\"[%%1.1i]\",d)\n");
	printf("[%1.1i]\n",d);
	ft_printf("[%1.1i]\n",d);
	printf("printf(\"[%%01i]\",d)\n");
	printf("[%01i]\n",d);
	ft_printf("[%01i]\n",d);
	printf("printf(\"[%%.01i]\",d)\n");
	printf("[%.01i]\n",d);
	ft_printf("[%.01i]\n",d);
	printf("printf(\"[%%01.01i]\",d)\n");
	printf("[%01.01i]\n",d);
	ft_printf("[%01.01i]\n",d);
	printf("printf(\"[%%-i]\",d)\n");
	printf("[%-i]\n",d);
	printf("printf(\"[%%-1i]\",d)\n");
	printf("[%-1i]\n",d);
	ft_printf("[%-1i]\n",d);
	printf("printf(\"[%%-.1i]\",d)\n");
	printf("[%-.1i]\n",d);
	ft_printf("[%-.1i]\n",d);
	printf("printf(\"[%%-1.1i]\",d)\n");
	printf("[%-1.1i]\n",d);
	ft_printf("[%-1.1i]\n",d);
	printf("printf(\"[%%-01i]\",d)\n");
	printf("[%-01i]\n",d);
	ft_printf("[%-01i]\n",d);
	printf("printf(\"[%%-.01i]\",d)\n");
	printf("[%-.01i]\n",d);
	ft_printf("[%-.01i]\n",d);
	printf("printf(\"[%%-01.01i]\",d)\n");
	printf("[%-01.01i]\n",d);
	ft_printf("[%-01.01i]\n",d);

	printf("\n\nprintf(\"[%%10i]\",d)\n");
	printf("[%10i]\n",d);
	ft_printf("[%10d]\n",d);
	printf("printf(\"[%%.10i]\",d)\n");
	printf("[%.10i]\n",d);
	ft_printf("[%.10d]\n",d);
	printf("printf(\"[%%10.10i]\",d)\n");
	printf("[%10.10i]\n",d);
	ft_printf("[%10.10d]\n",d);
	printf("printf(\"[%%010i]\",d)\n");
	printf("[%010i]\n",d);
	ft_printf("[%010i]\n",d);
	printf("printf(\"[%%.010i]\",d)\n");
	printf("[%.010i]\n",d);
	ft_printf("[%.010i]\n",d);
	printf("printf(\"[%%010.010i]\",d)\n");
	printf("[%010.010i]\n",d);
	ft_printf("[%010.010i]\n",d);
	printf("printf(\"[%%-10i]\",d)\n");
	printf("[%-10i]\n",d);
	ft_printf("[%-10i]\n",d);
	printf("printf(\"[%%-.10i]\",d)\n");
	printf("[%-.10i]\n",d);
	ft_printf("[%-.10i]\n",d);
	printf("printf(\"[%%-10.10i]\",d)\n");
	printf("[%-10.10i]\n",d);
	ft_printf("[%-10.10i]\n",d);
	printf("printf(\"[%%-010i]\",d)\n");
	printf("[%-010i]\n",d);
	ft_printf("[%-010i]\n",d);
	printf("printf(\"[%%-.010i]\",d)\n");
	printf("[%-.010i]\n",d);
	ft_printf("[%-.010i]\n",d);
	printf("printf(\"[%%-010.010i]\",d)\n");
	printf("[%-010.010i]\n",d);
	ft_printf("[%-010.010i]\n",d);

	printf("\n\nprintf(\"[%%10.1i]\",d)\n");
	printf("[%10.1i]\n",d);
	ft_printf("[%10.1i]\n",d);
	printf("printf(\"[%%10.7i]\",d)\n");
	printf("[%10.7i]\n",d);
	ft_printf("[%10.7i]\n",d);
	printf("printf(\"[%%7.10i]\",d)\n");
	printf("[%7.10i]\n",d);
	ft_printf("[%7.10i]\n",d);
}