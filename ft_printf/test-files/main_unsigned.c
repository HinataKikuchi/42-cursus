/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_unsigned.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 13:07:12 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/25 16:08:23 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/ft_strlen.c"
#include "../libft/ft_substr.c"
#include "../libft/ft_calloc.c"
#include "../libft/ft_atoi.c"
#include "../libft/ft_strlcpy.c"
#include "../libft/ft_itoa.c"
#include "../libft/ft_memcpy.c"
#include "../libft/ft_bzero.c"
#include "../libft/ft_isdigit.c"
#include "../libft/ft_strchr.c"
#include "../get_value.c"
#include "../ft_write_char.c"
#include "../ft_write_string.c"
#include "../ft_write_digit.c"
#include "../ft_write_sp_zero.c"
#include "../ft_printf.c"
#include "../ft_write_unsigned.c"

int main (void)
{
	unsigned int d =4147483650;
	printf("printf(\"[%%u]\",d)\n");
	printf("[%u]\n",d);
	ft_printf("[%u]\n",d);
	printf("printf(\"[%%3u]\",d)\n");
	printf("[%3u]\n",d);
	ft_printf("[%3u]\n",d);
	printf("printf(\"[%%.3u]\",d)\n");
	printf("[%.3u]\n",d);
	ft_printf("[%.3u]\n",d);
	printf("printf(\"[%%.11u]\",d)\n");
	printf("[%.11u]\n",d);
	ft_printf("[%.11u]\n",d);
	printf("printf(\"[%%.11u]\",d)\n");
	printf("[%.11u]\n",d);
	ft_printf("[%.11u]\n",d);
	printf("printf(\"[%%020.11u]\",d)\n");
	printf("[%020.11u]\n",d);
	ft_printf("[%020.11u]\n",d);
	
}