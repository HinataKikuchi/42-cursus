/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 13:03:06 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/06 16:42:24 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int ans;
	int sign;

	sign = 1;
	ans = 0;	
	while (('\t' <= *nptr && *nptr  <= '\r')|| *nptr == ' ')
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if(*nptr == '+')
		nptr++;
	while(*nptr != '\0' && ('0' <= *nptr && *nptr <= '9'))
	{
		ans = ans * 10;
		ans += (int)*nptr - '0';
		nptr++;
	}
	return ans * sign;
}