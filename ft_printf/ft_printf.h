/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:12:29 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/02 17:32:59 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct	t_format
{
	char			*flagment;
	char			*format_num;
	char			*min_field;
	int				min;
	long long int	ac;
	char			format_char;
}				s_format;

int			ft_printf(const char *format, ...);
int			judge_format(char c);
void		write_target(va_list ap, s_format x);
s_format	deal_format(const char *target,int *i);
void		get_min_field(va_list ap,s_format *x);
void		write_blank(int num);
void		write_zero(int num);
char		*ft_small_hex(unsigned int h);
char		*ft_large_hex(unsigned int h);


char		*make_string(char *d_s, s_format x);
void		write_with_min(char *d_s, s_format x);
void		write_character(va_list ap, s_format x);
void		write_string(va_list ap, s_format x);
void		write_digit(va_list ap, s_format x);
void		write_unsigned(va_list ap, s_format x);
void		write_small_hex(va_list ap, s_format x);
void		write_large_hex(va_list ap, s_format x);
void		write_pointer(va_list ap, s_format x);
void		free_struct(s_format x);
char		*calc_pointer(unsigned long long p);
char		*make_pstring(char *d_s, s_format x);
char		*make_dstring(char *d_s, s_format x, int d);
char		*make_pointer_string(char *d_s);



#endif

