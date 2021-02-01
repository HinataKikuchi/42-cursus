/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_sp_zero.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 17:00:43 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/31 19:33:52 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_blank(int num)
{
	int		i;

	i = 0;
	while (i < num)
	{
		write(1, " ", 1);
		i++;
	}
}

void	write_zero(int num)
{
	int		i;

	i = 0;
	while (i < num)
	{
		write(1, "0", 1);
		i++;
	}
}

void	write_with_min(char *d_s, s_format x)
{
	if (ft_strchr(x.flagment, '-'))
	{
		write(1, d_s, ft_strlen(d_s));
		write_blank((size_t)x.min - ft_strlen(d_s));
		return ;
	}
	else if (ft_strchr(x.flagment, '0') && !x.ac)
		write_zero((size_t)x.min - ft_strlen(d_s));
	else
		write_blank((size_t)x.min - ft_strlen(d_s));
	write(1, d_s, ft_strlen(d_s));
	free(d_s);
}
