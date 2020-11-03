#include <stdio.h>
#include "libft.h"

int main(void)
{
//	char str1[] = "0123456789";
//	char str2[] = "6789";
//	ft_memcpy(str1+2,str2,3);
//	printf("%s\n",str1);
//	return 0;

//	char str[] = "abcdefghijklmnopqrstu";
//        
//    printf("before;%s\n",str);
//    
//    ft_memmove(str+5, str, 10);
//    printf("after：%s\n",str);
//    return 0;

    char str[] = "abcdef\0ghij";    /* 途中に空文字のある文字列 */
    char *p;
    
    p = ft_memchr(str, 'h', 12);
    printf("検索文字は文字列の%d番目\n",p - str);
    
    return 0;

}