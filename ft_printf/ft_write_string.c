/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:24:24 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/02 16:21:14 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*cut_string(char *s, s_format x)
{
	char *res;

	res = calloc((x.ac + 1), sizeof(char));
	ft_strlcpy(res, s, x.ac + 1);
	res[x.ac] = '\0';
	free(s);
	return (res);
}

static void	write_s_with_min(char *s, s_format x)
{
	if (ft_strchr(x.flagment, '-'))
	{
		write(1, s, ft_strlen(s));
		write_blank(x.min - (int)ft_strlen(s));
		return ;
	}
	else if (ft_strchr(x.flagment, '0'))
		write_zero(x.min - (int)ft_strlen(s));
	else
		write_blank(x.min - (int)ft_strlen(s));
	write(1, s, ft_strlen(s));
}

void		write_string(va_list ap, s_format x)
{
	char	*s;

	get_min_field(ap, &x);
	s = va_arg(ap, char*);
	s = (!s) ? ft_strdup("(null)") : ft_strdup(s);
	if (!x.ac && !x.min && ft_strchr(x.format_num,'.'))
	{
		free(s);
		return ;
	}
	if ((size_t)x.ac < ft_strlen(s) && x.ac)
		s = cut_string(s, x);
	if (ft_strlen(s) < (size_t)x.min)
		write_s_with_min(s, x);
	else
		write(1, s, ft_strlen(s));
	free(s);
}
