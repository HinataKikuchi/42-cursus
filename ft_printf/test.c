#include <assert.h>
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
#include "ft_printf.h"
#include <limits.h>

int main(void)
{
	// printf("%d\n\n", printf("8chiffre 1 %*d chiffre 2 %*d\n\n", 42, 6, 6, 6));
	// printf("%d\n\n", ft_printf("8chiffre 1 %*d chiffre 2 %*d\n\n", 42, 6, 6, 6));
	printf("%d\n\n", printf("1unsigned 1 %u unsigned 2 %u\n\n", 42, -42));
	printf("%d\n\n", ft_printf("1unsigned 1 %u unsigned 2 %u\n\n", 42, -42));
}
