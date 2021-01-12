// #include <stdio.h>
// #include "ft_printf.h"
// int test_print(char *format, ...);

// int main(void)
// {
// 	test_print("abc");
// }

// int test_print(char *format, ...)
// {
// 	va_list ap;
// 	va_start(ap, format);
// 	printf("%s", *(char*)(ap->reg_save_area+ap->fp_offset));
// 	va_end(ap);
// }

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <assert.h>

int ft_printf(const char* format, ...);

int main(void)
{
	ft_printf("%s","efg");
	return (0);
}

int ft_printf(const char* format, ...)
{
	va_list ap;
	char *s;

	va_start(ap, format);
	s = va_arg(ap, char*);
	printf("%s", s);

	va_end(ap);
	return(1);
}