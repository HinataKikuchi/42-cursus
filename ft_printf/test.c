#include <stdio.h>
#include "ft_printf.h"
int test_print(char *format, ...);

int main(void)
{
	test_print("abc");
}

int test_print(char *format, ...)
{
	va_list ap;
	va_start(ap, format);
	printf("%s", *(char*)(ap->reg_save_area+ap->fp_offset));
	va_end(ap);
}
