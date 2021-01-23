#include <stdio.h>
#include <unistd.h>
# include <stdarg.h>
#include <stdlib.h>
#include <string.h>
int		ft_printf(const char *format, ...);


int main (void)
{
	int p = 1;
	ft_printf("%p", &p);
	printf("%d\n",&p);
}

int		ft_printf(const char *format, ...)
{
	va_list		ap;

	va_start(ap, format);
	printf("%d\n",va_arg(ap, int));
}