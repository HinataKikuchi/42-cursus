#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
<<<<<<< HEAD
#include <string.h>
int main (void)
{
printf("%zu, %s\n",ft_strlen(ft_substr("abcdef", 3, 2)), ft_substr("abcdef",3,2));
}
=======
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
>>>>>>> 019598d84b20b4021aa0883f407e0f9827fe8d3c
