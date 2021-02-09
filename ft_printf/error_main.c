#include <stdio.h>
#include "ft_printf.h"
#include "ft_printf.h"
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
#include "./format_deal.c"
#include "./libft/ft_split.c"
#include "./libft/ft_strtrim.c"
#include "./ft_utoa.c"
#include <limits.h>

int		main(void)
{
	char *s = "sso";

	printf("-->|%-16p|<-- \n", (void*)0x1900);
	ft_printf("-->|%-16p|<-- \n", (void*)0x1900);

	printf("[%-5.p]\n", 0);
	ft_printf("[%-5.p]\n", 0);
	ft_printf("[%-5.2p]\n", 0);
	ft_printf("[%-5.2p]\n", 0);

	printf("[%-3p]\n", 0);
	ft_printf("[%-3p]\n", 0);
	printf("[%p]\n", 0);
	ft_printf("[%p]\n", 0);
puts("=====%x========");
	printf("-->|%-16x|<-- \n", (void*)0x1900);
	ft_printf("-->|%-16x|<-- \n", (void*)0x1900);

	printf("[%-5.x]\n", 0);
	ft_printf("[%-5.x]\n", 0);
	ft_printf("[%-5.2x]\n", 0);
	ft_printf("[%-5.2x]\n", 0);

	printf("[%-3x]\n", 0);
	ft_printf("[%-3x]\n", 0);
	printf("[%x]\n", 0);
	ft_printf("[%x]\n", 0);

	puts("=====%X========");
	printf("-->|%-16X|<-- \n", (void*)0x1900);
	ft_printf("-->|%-16X|<-- \n", (void*)0x1900);

	printf("[%-5.X]\n", 0);
	ft_printf("[%-5.X]\n", 0);
	ft_printf("[%-5.2X]\n", 0);
	ft_printf("[%-5.2X]\n", 0);

	printf("[%-3X]\n", 0);
	ft_printf("[%-3X]\n", 0);
	printf("[%X]\n", 0);
	ft_printf("[%X]\n", 0);

	puts("=====%U========");
	printf("-->|%-16u|<-- \n", (void*)0x1900);
	ft_printf("-->|%-16u|<-- \n", (void*)0x1900);

	printf("[%-5.u]\n", 0);
	ft_printf("[%-5.u]\n", 0);
	ft_printf("[%-5.2u]\n", 0);
	ft_printf("[%-5.2u]\n", 0);

	printf("[%-3u]\n", 0);
	ft_printf("[%-3u]\n", 0);
	printf("[%u]\n", 0);
	ft_printf("[%u]\n", 0);


	puts("============");
	printf("[%-3.5%]\n");
	ft_printf("[%-3.5%]\n");
	puts("============");
	printf("[%-3.5c]\n", 'a');
	ft_printf("[%-3.5c]\n", 'a');





printf("[%8.5d]\n", 0);
ft_printf("[%8.5d]\n", 0);
puts("============");
	printf("this %i number\n", 0);
	ft_printf("this %i number\n", 0);
puts("===========");
	printf("[%.0i]\n", 0);
	ft_printf("[%.0i]\n", 0);
puts("===========");
	printf("this %d number\n", 0);
	ft_printf("this %d number\n", 0);
puts("===========");
	printf("[%3i]\n", 0);
	ft_printf("[%3i]\n", 0);
puts("===========");
	printf("[%-3i]\n", 0);
	ft_printf("[%-3i]\n", 0);
puts("===========");
	printf("[%03i]\n", 0);
	ft_printf("[%03i]\n", 0);
puts("===========");




	printf("[%5.0i]\n", 0);
	ft_printf("[%5.0i]\n", 0);
puts("===========");
	printf("[%5.i]\n", 0);
	ft_printf("[%5.i]\n", 0);
puts("===========");
	printf("[%-5.i]\n", 0);
	ft_printf("[%-5.i]\n", 0);



puts("===========");
	printf("[%i]\n", 0);
	ft_printf("[%i]\n", 0);
puts("===========");
	printf("[%3d]\n", 0);
	ft_printf("[%3d]\n", 0);
puts("===========");
	printf("[%-3d]\n", 0);
	ft_printf("[%-3d]\n", 0);
puts("===========");
	printf("[%03d]\n", 0);
	ft_printf("[%03d]\n", 0);




puts("===========");
	printf("[%3.0d]\n", 0);
	ft_printf("[%3.0d]\n", 0);
puts("===========");
	printf("[%3.d]\n", 0);
	ft_printf("[%3.d]\n", 0);


puts("part1");
	printf("%.0i\n", 0);
	ft_printf("%.0i\n", 0);
	puts("===============");

	printf("%.i\n", 0);
	ft_printf("%.i\n", 0);
	puts("=============");
	printf("%.0u\n", 0);
	ft_printf("%.0u\n", 0);
	puts("===============");

	printf("%.u\n", 0);
	ft_printf("%.u\n", 0);
	puts("===============");

	printf("%5.0u\n", 0);
	ft_printf("%5.0u\n", 0);
	puts("===============");

	printf("%5.u\n", 0);
	ft_printf("%5.u\n", 0);
	puts("===============");

	printf("%-5.0u\n", 0);
	ft_printf("%-5.0u\n", 0);
	puts("===============");

	printf("%-5.u\n", 0);
	ft_printf("%-5.u\n", 0);
	puts("===============");

	printf("%5.0i\n", 0);
	ft_printf("%.0i\n", 0);
	puts("===============");

	printf("%5.i\n", 0);
	ft_printf("%5.i\n", 0);
	puts("===============");

	printf("%-5.i\n", 0);
	ft_printf("%-5.i\n", 0);
	puts("===============");





	printf("%.0u\n", 0);
	ft_printf("%.0u\n", 0);
	puts("===============");

	printf("%.u\n", 0);
	ft_printf("%.u\n", 0);
	puts("===============");

	printf("%5.0u\n", 0);
	ft_printf("%5.0u\n", 0);
	puts("===============");

	printf("%5.u\n", 0);
	ft_printf("%5.u\n", 0);
	puts("===============");

	printf("%-5.0i\n", 0);
	ft_printf("%-5.0i\n", 0);
	puts("===============");
	printf("%-5.u\n", 0);
	ft_printf("%-5.u\n", 0);
	puts("===============");
	printf("[%-10.c]\n", 'a');
	ft_printf("[%-10.c]\n", 'a');
	printf("this %x number\n", 0);
	ft_printf("this %x number\n", 0);
	puts("===============");



	printf("[%3x]\n", 0);
	ft_printf("[%3x]\n", 0);
	puts("===============");

	printf("%-3x\n", 0);
	ft_printf("%-3x\n", 0);
	puts("===============");


	printf("[%.p]\n", NULL);
	ft_printf("[%.p]\n", NULL);
puts("==========");
	printf("%p\n", NULL);
	ft_printf("%p\n", NULL);

	printf("%.p\n", s);
	ft_printf("%.p\n", s);

	printf("%p\n", s);
	ft_printf("%p\n", s);

	printf("%.p\n", (void *)100);
	ft_printf("%.p\n", (void *)100);

	printf("%p\n", (void *)100);
	ft_printf("%p\n", (void *)100);








}