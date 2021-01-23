/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:12:29 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/23 12:49:23 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct	t_format
{
	char	*flagment;
	char	*format_num;
	char	*min_field;
	int		min;
	char	accuracion;
	int		ac;
	char	format_char;
}				s_format;

int			ft_printf(const char *format, ...);
int			judge_format(char c);
void		write_target(va_list ap, s_format x);
s_format	deal_format(const char *target, int *i, va_list ap);
void		get_min_field(s_format *x);
void		write_character(va_list ap, s_format x);
void		write_string(va_list ap, s_format x);
void		write_digit(va_list ap, s_format x);




#endif

