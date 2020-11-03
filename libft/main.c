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

    //char str[] = "abcdef\0ghij";
    //char *p;
    //
    //p = ft_memchr(str, 'h', 12);
    //printf("number = %ld\n",p - str);
    //

    char buf1[] = "\0abc\0de";      /* 途中に空文字のある文字列 */
        char buf2[] = "\0abc\0de";
        char buf3[] = "\0abcdef";
        
        if (ft_memcmp(buf1, buf2, 7) == 0)
                printf("buf1 = buf2\n");
        else
                printf("buf1 != buf2\n");
        if (ft_memcmp(buf1, buf3, 7) == 0)
                printf("buf1 = buf3\n");
        else
                printf("buf1 != buf3\n");

    return 0;

}