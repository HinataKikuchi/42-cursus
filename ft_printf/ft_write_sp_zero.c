/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_sp_zero.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 17:00:43 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/23 17:02:53 by hkikuchi         ###   ########.fr       */
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
