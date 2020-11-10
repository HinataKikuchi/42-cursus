/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 13:09:23 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/10 14:26:56 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;
	char			c;
	int				tmp1;
	int				tmp2;
	i = n;
	if(n < 0)
	{
		i = (-1) * i;
		write(fd, "-", 1);
	}
	tmp1 = i / 10;
	tmp2 = i % 10;
	c = tmp2 + '0';
	if(tmp2)
		ft_putnbr_fd(tmp1, fd);
	else
		return ;
	ft_putchar_fd(c, fd);
}
