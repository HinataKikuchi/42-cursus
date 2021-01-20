#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <assert.h>
#include "ft_printf.h"

int ft_printf(const char* format, ...);

int main(void)
{
	// printf("[%0*.0c]\n", 10,'c');
	ft_printf("[%0*.0c]\n", 10,'c');
	return (0);
}
