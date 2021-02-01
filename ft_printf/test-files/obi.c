#include <limits.h>
#include "ft_printf.h"


int main(void)
{

	int  ret;
    printf("----INT_MAX----\n");
    ret =ft_printf("%.*s\n", INT_MAX, "123");
    printf("ret_ftp: %d\n", ret);
    ret = printf("%.*s\n", INT_MAX, "123");
    printf("ret_ori: %d\n", ret);

    printf("----INT_MAX + 1----\n");
    ret =ft_printf("%.*s\n", INT_MAX + 1, "123");
    printf("ret_ftp: %d\n", ret);
    ret = printf("%.*s\n", INT_MAX + 1, "123");
    printf("ret_ori: %d\n", ret);

    
    printf("----INT_MAX - 1----\n");
    ret =ft_printf("%.*s\n", INT_MAX - 1, "123");
    printf("ret_ftp: %d\n", ret);
    ret = printf("%.*s\n", INT_MAX - 1, "123");
    printf("ret_ori: %d\n", ret);


    printf("----INT_MAX - 2----\n");
    ret =ft_printf("%.*s\n", INT_MAX - 2, "123");
    printf("ret_ftp: %d\n", ret);
    ret = printf("%.*s\n", INT_MAX - 2, "123");
    printf("ret_ori: %d\n", ret);


    printf("----INT_MAX - 3----\n");
    ret =ft_printf("%.*s\n", INT_MAX - 3, "123");
    printf("ret_ftp: %d\n", ret);
    ret = printf("%.*s\n", INT_MAX - 3, "123");
    printf("ret_ori: %d\n", ret);

    printf("----INT_MAX + 2----\n");
    ret =ft_printf("%.*s\n", INT_MAX + 2, "123");
    printf("ret_ftp: %d\n", ret);
    ret = printf("%.*s\n", INT_MAX + 2, "123");
    printf("ret_ori: %d\n", ret);

	printf("----INT_MAX + 3----\n");
	ret = ft_printf("%.*s\n", INT_MAX + 3, "123");
	printf("ret_ftp: %d\n", ret);
	ret = printf("%.*s\n", INT_MAX + 3, "123");
	printf("ret_ori: %d\n", ret);
	printf("----UINT_MAX----\n");
	ret = ft_printf("%.*s\n", UINT_MAX, "123");
	printf("ret_ftp: %d\n", ret);
	ret = printf("%.*s\n", UINT_MAX, "123");
	printf("ret_ori: %d\n", ret);

	printf("----UINT_MAX + 1----\n");
	ret = ft_printf("%.*s\n", UINT_MAX + 1, "123");
	printf("ret_ftp: %d\n", ret);
	ret = printf("%.*s\n", UINT_MAX + 1, "123");
	printf("ret_ori: %d\n", ret);

	printf("----INT_MIN----\n");
	ret = ft_printf("%.*s\n", INT_MIN, "123");
	printf("ret_ftp: %d\n", ret);
	ret = printf("%.*s\n", INT_MIN, "123");
	printf("ret_ori: %d\n", ret);

	printf("----INT_MIN - 1----\n");
	ret = ft_printf("%.*s\n", INT_MIN - 1, "123");
	printf("ret_ftp: %d\n", ret);
	ret = printf("%.*s\n", INT_MIN - 1, "123");
	printf("ret_ori: %d\n", ret);

	printf("----INT_MIN - 2----\n");
	ret = ft_printf("%.*s\n", INT_MIN - 2, "123");
	printf("ret_ftp: %d\n", ret);
	ret = printf("%.*s\n", INT_MIN - 2, "123");
	printf("ret_ori: %d\n", ret);
}