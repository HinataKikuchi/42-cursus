#include "ft_printf.h"
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
#include "./ft_write_char.c"
#include "./ft_write_string.c"
#include "./ft_write_digit.c"
#include "./ft_write_sp_zero.c"
#include "./ft_printf.c"
#include "./ft_write_unsigned.c"
#include "./ft_write_small_hex.c"
#include "./ft_write_large_hex.c"
#include "./ft_write_pointer.c"
#include "./calc_hex.c"
#include "./libft/ft_strdup.c"
#include "./format_deal.c"
#include "./libft/ft_split.c"
#include "./libft/ft_strtrim.c"
#include "./ft_utoa.c"
#include <limits.h>

int main(void)
{
	printf("[%0*.*d]\n",5,0,0);
	ft_printf("[%0*.*d]\n",5,0,0);

char c = 'A';

ft_printf("[%%20.5%]=[%20.5%]\n");
ft_printf("[%%20%]=[%20%]\n");
ft_printf("[%%20.%]=[%20.%]\n");
ft_printf("[%%020.5%]=[%020.5%]\n");
ft_printf("[%%020%]=[%020%]\n");
ft_printf("[%%020.%]=[%020.%]\n");
ft_printf("[%%-20.5%]=[%-20.5%]\n");
ft_printf("[%%-20%]=[%-20%]\n");
ft_printf("[%%-20.%]=[%-20.%]\n");
ft_printf("[%%-020.5%]=[%-020.5%]\n");
ft_printf("[%%-020%]=[%-020%]\n");
ft_printf("[%%-020.%]=[%-020.%]\n");

ft_printf("[%%20.5%]=[%20.5%]\n");
ft_printf("[%%20%]=[%20%]\n");
ft_printf("[%%20.%]=[%20.%]\n");
ft_printf("[%%020.0%]=[%020.0%]\n");
ft_printf("[%%020%]=[%020%]\n");
ft_printf("[%%020.%]=[%020.%]\n");
ft_printf("[%%-20.0%]=[%-20.0%]\n");
ft_printf("[%%-20%]=[%-20%]\n");
ft_printf("[%%-20.%]=[%-20.%]\n");
ft_printf("[%%-020.0%]=[%-020.0%]\n");
ft_printf("[%%-020%]=[%-020%]\n");
ft_printf("[%%-020.%]=[%-020.%]\n");

ft_printf("[%%05.0%]=[%05.0%]\n");
ft_printf("[%%.0%]=[%.0%]\n");
ft_printf("[%%020.5%]=[%020.5%]\n");
ft_printf("[%%05.20%]=[%05.20%]\n");
ft_printf("[%%-20.5%]=[%-20.5%]\n");
ft_printf("[%%-5.20%]=[%-5.20%]\n");
ft_printf("[%%0-20.5%]=[%0-20.5%]\n");
ft_printf("[%%0-5.20%]=[%0-5.20%]\n");
}