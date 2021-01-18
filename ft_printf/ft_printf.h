/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:12:29 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/18 16:09:37 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF
# include <stdarg.h>
# include <unistd.h>

typedef struct	t_format
{
	char	*flagment;
	char	*min_field;
	char	accuracion;
	char	format_char;
}				s_format;

int		ft_printf(const char *format, ...);
int		judge_format(char c);
void	deal_format(const char *target, va_list ap, int i);
void	write_target(const char *target, va_list ap, s_format x);

#endif

