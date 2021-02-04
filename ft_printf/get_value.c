/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_value.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 19:48:44 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/04 11:39:05 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	get_min_and_ac(va_list ap, t_format *x)
{
	int		j;
	int		i;
	char	*buf;

	j = 0;
	while (x->format_num[j] != '.')
		j++;
	buf = ft_substr(x->format_num, 0, j);
	if (ft_strchr(buf,'*'))
		x->min = va_arg(ap, int);
	else
		x->min = ft_atoi(buf);
	i = j;
	free(buf);
	while (x->format_num[i] != '\0')
		i++;
	buf = ft_substr(x->format_num, j + 1, i - j);
		if (ft_strchr(buf, '*'))
		x->ac = va_arg(ap, int);
	else
		x->ac = ft_atoi(buf);
	free(buf);
}

static void	get_min(va_list ap, t_format *x)
{
	int		i;
	char	*buf;

	i = 0;
	while (x->format_num[i] != '\0')
		i++;
	buf = ft_substr(x->format_num, 0, i);
	if (x->format_num[i + 1] == '*')
		x->min = va_arg(ap, int);
	else
		x->min = ft_atoi(buf);
	x->ac = 0;
	free(buf);
}

void		get_min_field(va_list ap, t_format *x)
{
	if (ft_strchr(x->format_num, '.'))
		get_min_and_ac(ap, x);
	else
		get_min(ap, x);
}

int	ft_strcmp(const char *s1, const char *s2)
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