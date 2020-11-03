#include "libft.h"
#include <stdio.h>
int main(void)
{
	char str[] = "0123456789";
	ft_bzero(str+2, 3);
	printf("%s\n",str);
	return 0;	
}