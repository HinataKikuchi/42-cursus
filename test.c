#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <strings.h>
#include "ft_memcmp.c"
#include "ctype.h"

int main( void )
{
    char **ans = ft_split(",,,,", ',');
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", ans[i]);
    }
    return 0;
}