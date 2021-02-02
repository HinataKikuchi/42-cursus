/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_large_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:24:57 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/02 18:12:43 by hkikuchi         ###   ########.fr       */
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

void	write_large_hex(va_list ap, s_format x)
{
	unsigned int	h;
	char			*h_s;

	get_min_field(ap,&x);
	if (ft_strcmp(x.format_num,"0.0") == 0 || \
	(((h = va_arg(ap, unsigned int)) == 0) && !x.min && !x.ac && ft_strchr(x.format_num,'.')))
		return ;
	h_s = ft_large_hex(h);
	if (ft_strlen(h_s) < (size_t)x.ac)
	{
		h_s = make_string(h_s, x);
		if (!h_s)
			return ;
	}
	if (ft_strlen(h_s) < (size_t)x.min)
		write_with_min(h_s, x);
	else
		write(1, h_s, ft_strlen(h_s));
	free(h_s);
}