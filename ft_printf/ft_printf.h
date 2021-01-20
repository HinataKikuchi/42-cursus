/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:12:29 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/20 20:01:21 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "./libft/libft.h"

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
s_format	deal_format(const char *target, int *i, va_list ap);
void		write_target(va_list ap, s_format x);
void		write_character(va_list ap, s_format x);
void		get_min_field(s_format *x);
void		get_min_and_ac(s_format *x);
void		get_min(s_format *x);
void		write_left_justified(int min_field, char c);
void		fill_zero(int min_field, char c);
void		fill_blanc(int min_field, char c);
void		write_string(va_list ap, s_format x);




#endif

