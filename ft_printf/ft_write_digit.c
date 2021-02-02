/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:25:05 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/02 16:40:45 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned char	*s1_t;
	unsigned char	*s2_t;

	i = 0;
	s1_t = (unsigned char*)s1;
	s2_t = (unsigned char*)s2;
	while (*s1_t != '\0' || *s2_t != '\0')
	{
		if (*s1_t != *s2_t)
			return (*s1_t - *s2_t);
		s1_t++;
		s2_t++;
		i++;
	}
	return (0);
}


void	write_digit(va_list ap, s_format x)
{
	int		d;
	char	*d_s;

	get_min_field(ap,&x);
	if (ft_strcmp(x.format_num,"0.0") == 0 || ((d = va_arg(ap, int)) == 0 && !x.min && !x.ac))
		return ;
	d_s = ft_itoa(d);
	if (ft_strlen(d_s) < (size_t)x.ac)
	{
		d_s = make_string(d_s, x);
		if (!d_s)
			return ;
	}
	if (ft_strlen(d_s) < (size_t)x.min)
		write_with_min(d_s, x);
	else
		write(1, d_s, ft_strlen(d_s));
	free(d_s);
}
