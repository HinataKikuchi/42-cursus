/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_value.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 19:48:44 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/19 20:03:00 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int		get_min_field(s_format x)
{
	int		j;
	char	*buf;

	j = 0;
	while (x.format_num[j] != '.')
		j++;
	buf = ft_substr(x.format_num, 0, j);
	j = ft_atoi(buf);
	free(buf);
	return (j);
}