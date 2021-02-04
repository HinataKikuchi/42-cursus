/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:24:24 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/04 18:06:10 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*cut_string(char *s, t_format x)
{
	char *res;

	res = calloc((x.ac + 1), sizeof(char));
	ft_strlcpy(res, s, x.ac + 1);
	res[x.ac] = '\0';
	free(s);
	return (res);
}

static int	write_s_with_min(char *s, t_format *x)
{
	if (ft_strchr(x->flagment, '-'))
	{
		write(1, s, ft_strlen(s));
		write_blank(x->min - (int)ft_strlen(s));
		return (x->min);
	}
	else if (ft_strchr(x->flagment, '0'))
		write_zero(x->min - (int)ft_strlen(s));
	else
		write_blank(x->min - (int)ft_strlen(s));
	write(1, s, ft_strlen(s));
	return (x->min);
}

void		write_string(va_list ap, t_format *x)
{
	char	*s;

	get_min_field(ap, x);
	s = va_arg(ap, char*);
	s = (!s) ? ft_strdup("(null)") : ft_strdup(s);
	if (!x->ac && !x->min && ft_strchr(x->format_num,'.'))
	{
		x->word_count = 0;
		free(s);
		return ;
	}
	if ((size_t)x->ac < ft_strlen(s) && x->ac)
		s = cut_string(s, *x);
	else if (!x->ac && ft_strchr(x->format_num, '.'))
		s = ft_strdup("\0");
	if (ft_strlen(s) < (size_t)x->min)
		x->word_count =  write_s_with_min(s, x);
	else
	{
		write(1, s, ft_strlen(s));
		x->word_count = ft_strlen(s);
	}
	free(s);
}
