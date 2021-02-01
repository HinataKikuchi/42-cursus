#include <assert.h>
// #include "./libft/ft_strlen.c"
// #include "./libft/ft_substr.c"
// #include "./libft/ft_calloc.c"
// #include "./libft/ft_atoi.c"
// #include "./libft/ft_bzero.c"
// #include "./libft/ft_isdigit.c"
// #include "./libft/ft_strchr.c"
// #include "get_value.c"
// #include "ft_write_char.c"
// #include "ft_write_string.c"
#include "ft_printf.h"
#include <limits.h>

int main(void)
{
	// int ret;
	printf("----INT_MAX++ part1 direct conv'd' and -1 ----\n");
    //ret =ft_printf("%.2147483647d\n", -1);
    //printf("ret_ftp: %d\n", ret);
    // printf("%.2147483648d\n", -1);
    int ret = ft_printf("[%.*s]\n", INT_MAX, "123");
    // printf("ret_ori: %d\n", ret);
}
