#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <strings.h>
#include "ft_memcmp.c"
#include "ctype.h"

int main( void )
{
    printf("%ld", strlen(NULL));
}

int ft_skip_simbol(const char *nptr)
{
    if (*nptr == '-' || *nptr == '+')
    {
        if (*nptr == '-')
            return (-1);
        nptr++;
    }
    return (1);
}