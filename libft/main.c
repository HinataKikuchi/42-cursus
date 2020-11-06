#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

int main(void)
{
//	char str1[] = "0123456789";
//	char str2[] = "6789";
//        char str3[] = "0123456789";
//	ft_memcpy(str1+2,str2,3);
//	printf("%s\n",str1);
//        ft_memcpy(str3+2,str2,3);
//	printf("%s\n",str3);
//	return 0;


//        char str1[] = "0123456789";
//        char str2[] = "6789";
//        ft_memccpy(str1+2,str2, '4',3);
//        printf("%s\n",str1);
//        memccpy(str3+2,str2, '4',3);
//        printf("%s\n",str3);
//        return 0;
//

//	char str[] = "abcdefghijklmnopqrstu";
//        
//    printf("before;%s\n",str);
//    
//    ft_memmove(str+5, str, 10);
//    printf("after:%s\n",str);
//    return 0;

    //char str[] = "abcdef\0ghij";
    //char *p;
    //
    //p = ft_memchr(str, 'h', 12);
    //printf("number = %ld\n",p - str);
    //

//    char buf1[] = "\0abc\0de";
//        char buf2[] = "\0abc\0de";
//        char buf3[] = "\0abcdef";
//        
//        if (ft_memcmp(buf1, buf2, 7) == 0)
//                printf("buf1 = buf2\n");
//        else
//                printf("buf1 != buf2\n");
//        if (ft_memcmp(buf1, buf3, 7) == 0)
//                printf("buf1 = buf3\n");
//        else
//                printf("buf1 != buf3\n");
//

//		char s[] = "abcd";
//        printf("%ld\n",ft_strlen(s));
//        printf("%ld\n",strlen(s));
//        return 0;	

//	//char s[] = "abcde";
//	char s1[] = "abcde";
//	char s2[] = "123456";
//	printf("%ld, %s\n", ft_strlcpy(s1, s2, 1) ,s1);
//	strlcpy(s, s2, 1);
//	printf("%s\n",s);
//
  //  printf("%ld, %s\n", ft_strlcat(s1, s2, 0), s1);
//	char s3[] = "abcde";
//    printf("%d, %s\n", strlcat(s1, s2, 11), s1);

//    char str[] = "abcdefghijklmnabcdefghijklmn", *p;
//	int c;
//
//	printf("検索文字のasciiコードを10進数で入力してください。");
//	scanf("%d", &c);
//	
//	p = ft_strchr(str, c);
//	if (p != NULL) {
//		printf("%cは文字列の%ld番目にあります。\n", c, p-str);
//		printf("以降の文字列は%sです。\n", p);
//	}
//	else
//		printf("%cは見つかりませんでした\n", c);

    char str[] = "abcdefghijklmnabcdefghijklmn", *p;
	int c;
	printf("検索文字のasciiコードを10進数で入力してください。");
	scanf("%d", &c);
	
	p = ft_strrchr(str, c);
    if (p != NULL) {
		printf("%cは文字列の%ld番目にあります。\n", c, p-str);
		printf("以降の文字列は%sです。\n", p);
	}
	else
		printf("%cは見つかりませんでした\n", c);

    p = strrchr(str, c);
    if (p != NULL) {
		printf("%cは文字列の%ld番目にあります。\n", c, p-str);
		printf("以降の文字列は%sです。\n", p);
	}
	else
		printf("%cは見つかりませんでした\n", c);
	return 0;
}
