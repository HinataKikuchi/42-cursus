/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_value.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 19:48:44 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/02 16:12:39 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	get_min_and_ac(va_list ap, s_format *x)
{
	int		j;
	int		i;
	char	*buf;

	j = 0;
	while (x->format_num[j] != '.')
		j++;
	buf = ft_substr(x->format_num, 0, j);
	if (x->format_num[j] == '*')
		x->min = va_arg(ap, int);
	else
		x->min = ft_atoi(buf);
	i = j;
	free(buf);
	while (x->format_num[i] != '\0')
		i++;
	buf = ft_substr(x->format_num, j + 1, i - j);
		if (x->format_num[j + 1] == '*')
		x->ac = va_arg(ap, int);
	else
		x->ac = ft_atoi(buf);
	free(buf);
}

static void	get_min(va_list ap, s_format *x)
{
	int		i;
	char	*buf;

	i = 0;
	while (x->format_num[i] != '\0')
		i++;
	buf = ft_substr(x->format_num, 0, i);
	x->min = ft_atoi(buf);
	x->ac = 0;
	free(buf);
}

void		get_min_field(va_list ap, s_format *x)
{
	if (ft_strchr(x->format_num, '.'))
		get_min_and_ac(ap, x);
	else
		get_min(ap, x);
}
