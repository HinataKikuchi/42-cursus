#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>
int main(void)
{
    char ft_str[] = "ABCDE";
    char ft_src[] = "123";
    
    char ori_str[] = "ABCDE";
    char ori_src[] = "123";

	char s1[200] = "";
	char s2[200] = "";

	char *s3 = "hoge";
	char *s4 = "hoge";

	char *s5 = "A\0BC";
	char *s6 = "A\0BC";

/*if n == 0*/
    printf("return_ft : %lu \n",ft_strlcpy(ft_str,ft_src,0));
    printf("return_origin : %lu\n",strlcpy(ori_str,ori_src,0));
    
    printf("ft  %s\n",ft_str);
    printf("ori %s\n",ori_str);
/*if buf2 == "" */
	printf("return_ft : %lu \n",ft_strlcpy(s1,"",4));
	printf("return_origin : %lu\n",strlcpy(s2,"",4));


	printf("ft_ %s\n",s1);
	printf("origin_ %s\n",s2);

/*if size of buf1 has enough size*/
	ft_strlcpy(s1, "A", 2);
	strlcpy(s2, "A",2);
	printf("sizeof s1 = %lu : ft_ %s\n",sizeof(s1),s1);
	printf("sizeof s2 = %lu : origin_ %s\n",sizeof(s2),s2);

/*if buf2 < n < buf1*/
//	printf("ft_ : return %lu :buf1 %s\n", ft_strlcpy(s3,"fu",4), s3);
//	printf("origin : return %lu :buf1 ",strlcpy(s4,"",4));
//	printf("%s \n",s4);

	printf("return_ft : %lu \ns5 = %s\n",ft_strlcpy(s1,s5,5),s5);
	printf("return_origin : %lu\ns6 = %s\n",strlcpy(s2,s6,5),s6);

	char *s = "hogeab";
	printf("%lu : %s\n", strlcpy(s, "",2),s);

    return (0);
    
}
