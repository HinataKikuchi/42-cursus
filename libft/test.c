#include "libft.h"
#include <string.h>
#include <stdio.h>

int main( void )
{
    char *s2 = "";
    char *s3 = "";
    printf("man=%lu\n",strlcat(s2,"",0));
    printf("man=%s\n",s2);
    write(1,s2,1);
    write(1,"\n",1);
    printf("ft=%lu\n",ft_strlcat(s3,"",0));
    printf("ft=%s\n",s3);
    write(1,s3,1);
    write(1,"\n",1);
}