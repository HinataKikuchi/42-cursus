/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:12:29 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/04 19:28:29 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct	s_format
{
	char			*flagment;
	char			*format_num;
	int	word_count;
	int	min;
	long long int	ac;
	char			format_char;
}				t_format;

int			ft_printf(const char *format, ...);
int			judge_format(char c);
void		write_target(va_list ap, t_format *x);
t_format	deal_format(const char *target, int *i);
void		get_min_field(va_list ap,t_format *x);
void		write_blank(int num);
void		write_zero(int num);
char		*ft_small_hex(unsigned int h);
char		*ft_large_hex(unsigned int h);
int			ft_strcmp(const char *s1, const char *s2);

char		*make_string(char *d_s, t_format x);
char		*calc_pointer(unsigned long long p);
char		*make_pstring(char *d_s, t_format x);
char		*make_dstring(char *d_s, t_format x, int d);
char		*make_pointer_string(char *d_s);
int			ft_strcmp(const char *s1, const char *s2);
int			write_with_min(char *d_s, t_format x);
void		write_character(va_list ap, t_format *x);
void		write_string(va_list ap, t_format *x);
void		write_pointer(va_list ap, t_format *x);
void		write_digit(va_list ap, t_format *x);
void		write_unsigned(va_list ap, t_format *x);
void		write_small_hex(va_list ap, t_format *x);
void		write_large_hex(va_list ap, t_format *x);

#endif