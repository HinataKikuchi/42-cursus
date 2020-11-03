#include "libft.h"
#include <stdio.h>
int main(void)
{
	char str1[] = "0123456789";
	char str2[] = "6789";
	ft_memcpy(str1+2,str2,3);
	printf("%s\n",str1);
	return 0;	
}