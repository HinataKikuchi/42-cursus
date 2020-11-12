#include <stdio.h>
#include <bsd/string.h>
#include <fcntl.h>
#include "libft.h"
#include "ctype.h"

int main(void)
{
//int i;
//int *s;
//s=(int *)malloc(12*sizeof(int));
//for(i=0;i<3;i++)
//{
//  *s=i;
//  printf("%d\n", *s);
//  s++;
//}
//s-=3;
//ft_bzero(s, 12);
//for(i=0;i<3;i++)
//  printf("%d", *s++);

//	char str1[] = "0123456789";
//	char str2[] = "6789";
      //  char str3[] = "0123456789";
//	ft_memcpy(str1+2,str2,3);
//	printf("%s\n",str1);
//        ft_memcpy(str3+2,str2,3);
//	printf("%s\n",str3);
//	return 0;


      //  char str1[] = "0123456789";
      //  char str2[] = "6789";
      //  ft_memccpy(str1+2,str2, '4',3);
      //  printf("%s\n",str1);
      //  memccpy(str3+2,str2, '4',3);
      //  printf("%s\n",str3);
      //  char *tmp;
      //  tmp = (char *)malloc(ft_strlen("Hello World") * sizeof(char));
      //  ft_memccpy(tmp,"Hello World",' ',ft_strlen("Hello World"));
      //  printf("%sEOF\n",tmp);
      //  return 0;


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

  //  char str[] = "abcdefghijklmnabcdefghijklmn", *p;
	// int c;

	// printf("検索文字のasciiコードを10進数で入力してください。");
	// scanf("%d", &c);
	
	// p = ft_strchr(str, c);
	// if (p != NULL) {
	// 	printf("%cは文字列の%ld番目にあります。\n", c, p-str);
	// 	printf("以降の文字列は%sです。\n", p);
	// }
	// else
	// 	printf("%cは見つかりませんでした\n", c);

//    char str[] = "abcdefghijklmnabcdefghijklmn", *p;
//	int c;
//	printf("検索文字のasciiコードを10進数で入力してください。");
//	scanf("%d", &c);
//	
//	p = ft_strrchr(str, c);
//    if (p != NULL) {
//		printf("%cは文字列の%ld番目にあります。\n", c, p-str);
//		printf("以降の文字列は%sです。\n", p);
//	}
//	else
//		printf("%cは見つかりませんでした\n", c);
//
//    p = strrchr(str, c);
//    if (p != NULL) {
//		printf("%cは文字列の%ld番目にあります。\n", c, p-str);
//		printf("以降の文字列は%sです。\n", p);
//	}
//	else
//		printf("%cは見つかりませんでした\n", c);


//    char str[] = "ABC";
//	printf("ft_strncmp\n\n");
//    printf("ABC: ABD   = %d\n", ft_strncmp(str, "ABD", 2));
//    printf("ABC: ABC   = %d\n", ft_strncmp(str, "ABC", 2));
//    printf("ABC: AAA   = %d\n", ft_strncmp(str, "AAA", 2));
//    printf("ABC: ABCD  = %d\n", ft_strncmp(str, "ABCD", 2));
//    printf("ABC: AB    = %d\n", ft_strncmp(str, "AB", 2));
//    printf("ABC: B     = %d\n", ft_strncmp(str, "B", 2));
//    printf("ABC: A     = %d\n", ft_strncmp(str, "A", 2));
//
//	printf("strncmp\n\n");
//    printf("ABC: ABD   = %d\n", strncmp(str, "ABD", 2));
//    printf("ABC: ABC   = %d\n", strncmp(str, "ABC", 2));
//    printf("ABC: AAA   = %d\n", strncmp(str, "AAA", 2));
//    printf("ABC: ABCD  = %d\n", strncmp(str, "ABCD", 2));
//    printf("ABC: AB    = %d\n", strncmp(str, "AB", 2));
//    printf("ABC: B     = %d\n", strncmp(str, "B", 2));
//    printf("ABC: A     = %d\n", strncmp(str, "A", 2));

//    printf("123456\n");
//    printf("ft_atoi: %d\n", ft_atoi("123456"));
//    printf("atoi   : %d\n", atoi("123456"));
//    printf("12Three45678\n");
//    printf("ft_atoi: %d\n", ft_atoi("12Three45678"));
//    printf("atoi   : %d\n", atoi("12Three45678"));
//    printf("Hello World!\n");
//    printf("ft_atoi: %d\n", ft_atoi("Hello World!"));
//    printf("atoi   : %d\n", atoi("Hello World!"));
//    printf("+42 BLAH!\n");
//    printf("ft_atoi: %d\n", ft_atoi("+42 BLAH!"));
//    printf("atoi   : %d\n", atoi("+42 BLAH!"));
//    printf("-42\n");
//    printf("ft_atoi: %d\n", ft_atoi("-42"));
//    printf("atoi   : %d\n", atoi("-42"));
//    printf("     +42\n");
//    printf("ft_atoi: %d\n", ft_atoi("     +42"));
//    printf("atoi   : %d\n", atoi("     +42"));
//    printf("\t\n\v\f\r 42\n");
//    printf("ft_atoi: %d\n", ft_atoi("\t\n\v\f\r 42"));
//    printf("atoi   : %d\n", atoi("\t\n\v\f\r 42"));
//    printf("00042\n");
//    printf("ft_atoi: %d\n", ft_atoi("00042"));
//    printf("atoi   : %d\n", atoi("00042"));
//
//
//    printf( "%d\n", ft_atoi( "500.5abc" ) );
//    printf( "%d\n", atoi( "500.5abc" ) );
//    printf( "%d\n", ft_atoi( "    2468" ) );
//    printf( "%d\n", atoi( "    2468" ) );
//    printf( "%d\n", ft_atoi( "-1234" ) );
//    printf( "%d\n", atoi( "-1234" ) );
//    printf( "%d\n", ft_atoi( "+1234" ) );
//    printf( "%d\n", atoi( "+1234" ) );
//    printf( "%d\n", ft_atoi( "abc" ) );
//    printf( "%d\n", atoi( "abc" ) );

//    char *ascii = "AB?#\n\r12ab";
//    unsigned int i;
//
//    for (i=0; i<strlen(ascii); i++) {
//        if (ft_isalpha(ascii[i])) {
//            printf("ascii[%d] = %c is alphabet.\n", i, ascii[i]);
//        } else {
//            printf("ascii[%d] = %c is *not* alphabet.\n", i, ascii[i]);
//        }
//    }
//
//    for (i=0; i<strlen(ascii); i++) {
//        if (isalpha(ascii[i])) {
//            printf("ascii[%d] = %c is alphabet.\n", i, ascii[i]);
//        } else {
//            printf("ascii[%d] = %c is *not* alphabet.\n", i, ascii[i]);
//        }
//    }

// /* 9を判定 */
//    if ( ft_isdigit('9') ) {
//        puts("10進数の数字です．");
//    } else {
//        puts("10進数の数字ではありません．");
//    }
// /* 9を判定 */
//    if ( isdigit('9') ) {
//        puts("10進数の数字です．");
//    } else {
//        puts("10進数の数字ではありません．");
//    }
//
//    /* zを判定 */
//    if ( ft_isdigit('z') ) {
//        puts("10進数の数字です．");
//    } else {
//        puts("10進数の数字ではありません．");
//    }
//    /* zを判定 */
//    if ( isdigit('z') ) {
//        puts("10進数の数字です．");
//    } else {
//        puts("10進数の数字ではありません．");
//    }
//
//    /* _を判定 */
//    if ( ft_isdigit('_') ) {
//        puts("10進数の数字です．");
//    } else {
//        puts("10進数の数字ではありません．");
//    }
//
//    /* _を判定 */
//    if ( isdigit('_') ) {
//        puts("10進数の数字です．");
//    } else {
//        puts("10進数の数字ではありません．");
//    }

//    /* zを判定 */
//    if ( ft_isalnum('\n') ) {
//        puts("アルファベットか数字です．");
//    } else {
//        puts("アルファベットでも数字でもありません．");
//    }
///* zを判定 */
//    if ( isalnum('\n') ) {
//        puts("アルファベットか数字です．");
//    } else {
//        puts("アルファベットでも数字でもありません．");
//    }
//
//    /* 9を判定 */
//    if ( ft_isalnum('9') ) {
//        puts("アルファベットか数字です．");
//    } else {
//        puts("アルファベットでも数字でもありません．");
//    }
//    /* 9を判定 */
//    if ( isalnum('9') ) {
//        puts("アルファベットか数字です．");
//    } else {
//        puts("アルファベットでも数字でもありません．");
//    }
//
//    /* ?を判定 */
//    if ( isalnum('?') ) {
//        puts("アルファベットか数字です．");
//    } else {
//        puts("アルファベットでも数字でもありません．");
//    }
//    /* ?を判定 */
//    if (ft_isalnum('?') ) {
//        puts("アルファベットか数字です．");
//    } else {
//        puts("アルファベットでも数字でもありません．");
//    }

//// 文字がASCIIコードかどうかを確認
//    int c;
//    int ret;
//    // --------------------------------------------------------------
//    printf("0x41：");
//    c = 'A';
//    ret = isascii(c);
//    if (ret != 0) {
//        printf("ASCIIコードです\n");
//    }
//    else if (ret == 0) {
//        printf("ASCIIコードではありません\n");
//    }
//     
//    printf("0x41：");
//    c = 'A';
//    ret = isascii(c);
//    if (ret != 0) {
//        printf("ASCIIコードです\n");
//    }
//    else if (ret == 0) {
//        printf("ASCIIコードではありません\n");
//    }
//     
//    // --------------------------------------------------------------
//    // --------------------------------------------------------------
//    printf("0x7f：");
//    c = 0x7f;
//    ret = isascii(c);
//    if (ret != 0) {
//        printf("ASCIIコードです\n");
//    }
//    else if (ret == 0) {
//        printf("ASCIIコードではありません\n");
//    }
//     
//    printf("0x7f：");
//    c = 0x7f;
//    ret = isascii(c);
//    if (ret != 0) {
//        printf("ASCIIコードです\n");
//    }
//    else if (ret == 0) {
//        printf("ASCIIコードではありません\n");
//    }
//     
//    // --------------------------------------------------------------
//    printf("0x80：");
//    c = 0x80;
//    ret = isascii(c);
//    if (ret != 0) {
//        printf("ASCIIコードです\n");
//    }
//    else if (ret == 0) {
//        printf("ASCIIコードではありません\n");
//    }
//    printf("0x80：");
//    c = 0x80;
//    ret = isascii(c);
//    if (ret != 0) {
//        printf("ASCIIコードです\n");
//    }
//    else if (ret == 0) {
//        printf("ASCIIコードではありません\n");
//    }
//    // --------------------------------------------------------------


//    /* 9を判定 */
//    if ( ft_isprint('9') ) {
//        puts("表示文字です．");
//    } else {
//        puts("表示文字ではありません．");
//    }
//    if ( isprint('9') ) {
//        puts("表示文字です．");
//    } else {
//        puts("表示文字ではありません．");
//    }
//
//    /* 改行コードを判定 */
//    if ( ft_isprint('\t') ) {
//        puts("表示文字です．");
//    } else {
//        puts("表示文字ではありません．");
//    }
//    if ( isprint('\t') ) {
//        puts("表示文字です．");
//    } else {
//        puts("表示文字ではありません．");
//    }



//    int ch1, ch2;
//    /* aを大文字に変換する */
//    ch1 = ft_toupper('a');
//    printf("aを大文字に変換: %c\n", ch1);
//
//    ch1 = toupper('a');
//    printf("aを大文字に変換: %c\n", ch1);
//
//    /* Zを大文字に変換する */
//    ch2 = ft_toupper('Z');
//    printf("Zを大文字に変換: %c\n", ch2);
//
//    ch2 = toupper('Z');
//    printf("Zを大文字に変換: %c\n", ch2);
//
// /*1を大文字に変換する */
//    ch2 = toupper('1');
//    printf("Zを大文字に変換: %c\n", ch2);
//    ch2 = toupper('1');
//    printf("Zを大文字に変換: %c\n", ch2);
// int ch1, ch2;
// /* Aを小文字に変換する */
    // ch1 = ft_tolower('A');
    // printf("Aを小文字に変換: %c\n", ch1);

    // /* zを小文字に変換する */
    // ch2 = ft_tolower('z');
    // printf("zを小文字に変換: %c\n", ch2);

    // /* 1を小文字に変換する */
    // ch1 = tolower('1');
    // printf("Aを小文字に変換: %c\n", ch1);

//  int *s;
//  int i;
//
//  s=ft_calloc(5, sizeof(int));
//  for(i=0;i<5;i++)
//  {
//    printf("s[%d]:%p \n ",i,s);
//    printf("%d : %d\n", i,*s++);
//    
//  }
//

 // char *s;
 // char *a;
 // s = "ABC";
 // a = ft_strdup(s);
 // /* a = '*';
 // printf("%p\noriginal : %s\n", &s, s);
 // printf("%p\ncloned : %s\n" , &a, a);

//  char *s;
//  char *a;
//  s = "the others"; 
//  a =ft_substr(s, 3, strlen(s));
//  printf("maxlength : %ld\n", strlen(s));
//  printf("%p : %s\n",&s, s);
//  printf("%p : %s\n",&a ,a);

//    char *s1;
//    char *s2;
//    char *a;
//    s1 = "Hello ";
//    s2 = "World";
//    a = ft_strjoin(s1,s2);
//    printf("s1(%p) : %s\ns2(%p) : %s\njoined string(%p) : %s \n", &s1, s1, &s2, s2, &a, a);

//    char *s1="abbcdecdefgab";
//    char *s2="ab";
//    char *a;
//    a = ft_strtrim(s1, s2);
//    printf("%s\n",a);

//    char *s = "abf";
//   ft_putstr_fd(s,open("./test.txt", O_WRONLY));
//    ft_putendl_fd(s, open("./test.txt", O_WRONLY));

  // //ft_putnbr_fd( 0, open("./test.txt", O_WRONLY));
	// char *s = "Today is my birthday ";
	// char **ans;
  // int i ;
	// ans = ft_split(s, ' ');
  // for (i=0;i<5;i++)
	//   printf("ans[%d] : %s←\n", i,*(ans + i));

  printf("%s\n", ft_itoa(-200));

    return 0;
}
