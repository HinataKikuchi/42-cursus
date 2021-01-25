#include <stdio.h>
#include <unistd.h>
# include <stdarg.h>
#include <stdlib.h>
#include <string.h>
int		ft_printf(const char *format, ...);


int main (void)
{
	char *p ="a";
	printf("[%p]\n",p);
	printf("[%10p]\n",p);
	printf("[%.10p]\n",p);
	printf("[%10.10p]\n",p);
}
