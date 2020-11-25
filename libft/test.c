#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <strings.h>
#include "ft_memcmp.c"
#include "ctype.h"

int     main(void)
{
    printf("ft_strnstr\n");
	for (int i = 0; i < 20; i++) {
        printf("%d\n",i);
		printf("%p\n",ft_strnstr("Foo Bar Hoge", "Bar", i));
	    printf("%p\n",ft_strnstr("Foo Bar Hoge", "Foo Hoge", i));
		printf("%p\n",ft_strnstr("abcabcabc", "abc", i));
		printf("%p\n",ft_strnstr("abcabcabc", "abcd", i));
		printf("%p\n",ft_strnstr("abcabcabc", "ab\0cd", i));
		printf("%p\n",ft_strnstr("abca\0bcabc", "ab\0cd", i));
    }
}