/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_value.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 19:48:44 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/21 17:55:03 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	get_min_and_ac(s_format *x)
{
	int		j;
	int		i;
	char	*buf;

	j = 0;
	while (x->format_num[j] != '.')
		j++;
	buf = ft_substr(x->format_num, 0, j);
	x->min = ft_atoi(buf);
	i = j;
	while (x->format_num[i] != '\0')
		i++;
	buf = ft_substr(x->format_num, j, i - j);
	x->ac = ft_atoi(buf);
	free(buf);
}

static void	get_min(s_format *x)
{
	int		i;
	char	*buf;

	i = 0;
	while (x->format_num[i] != '\0')
		i++;
	buf = ft_substr(x->format_num, 0, i);
	x->min = ft_atoi(buf);
	free(buf);
}

void		get_min_field(s_format *x)
{
	if (ft_strchr(x->format_num, '.'))
		get_min_and_ac(x);
	else
		get_min(x);
}
