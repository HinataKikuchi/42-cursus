#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <strings.h>
#include "ft_memcmp.c"
#include "ctype.h"

int main( void )
{
	char	c;

	c = 0x20;

	while ((unsigned char)c < 0x7F)
	{
		if ((unsigned char)c != 0x07)
			ft_putchar_fd(c, 1);
		c++;
	}
	ft_putchar_fd(c, 1);
    return 0;
}