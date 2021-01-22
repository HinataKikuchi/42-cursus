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

int main(void)
{
	// printf("[%0*.0c]\n", 10,'c');
	char *s = "hinata";
	printf("[%-07s]\n",s);
	ft_printf("[%-07s]\n",s);
	return (0);
}
