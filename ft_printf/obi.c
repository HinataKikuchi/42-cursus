#include <limits.h>
#include "ft_printf.h"
#include "./libft/ft_strlen.c"
#include "./libft/ft_substr.c"
#include "./libft/ft_calloc.c"
#include "./libft/ft_atoi.c"
#include "./libft/ft_strlcpy.c"
#include "./libft/ft_itoa.c"
#include "./libft/ft_memcpy.c"
#include "./libft/ft_bzero.c"
#include "./libft/ft_isdigit.c"
#include "./libft/ft_strchr.c"
#include "./get_value.c"
#include "./ft_write_char.c"
#include "./ft_write_string.c"
#include "./ft_write_digit.c"
#include "./ft_write_sp_zero.c"
#include "./ft_printf.c"
#include "./ft_write_unsigned.c"
#include "./ft_write_small_hex.c"
#include "./ft_write_large_hex.c"
#include "./ft_write_pointer.c"
#include "./make_string.c"
#include "./calc_hex.c"
#include "./libft/ft_strdup.c"



int main(void)
{

	int  ret;
    printf("----INT_MAX----\n");
    ret = ft_printf("[%.*s]\n", INT_MAX, "123");
    printf("ret_ftp: %d\n", ret);
    ret = printf("[%.*s]\n", INT_MAX, "123");
    printf("ret_ori: %d\n", ret);

    printf("----INT_MAX + 1----\n");
    ret =ft_printf("[%.*s]\n", INT_MAX + 1, "123");
    printf("ret_ftp: %d\n", ret);
    ret = printf("[%.*s]\n", INT_MAX + 1, "123");
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