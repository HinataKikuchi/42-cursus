/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 19:53:22 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/13 19:53:24 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	judge(const char *n)
{
	if (ft_strncmp(n, "9223372036854775807", 18) >= 0)
		return (1);
	else if (ft_strlen(n) > 19)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int ans;
	int sign;

	if (judge(nptr))
		return (-1);
	sign = 1;
	ans = 0;
	while (('\t' <= *nptr && *nptr <= '\r') || *nptr == ' ')
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr != '\0' && ('0' <= *nptr && *nptr <= '9'))
	{
		ans = ans * 10;
		ans += (int)*nptr - '0';
		nptr++;
	}
	return (ans * sign);
}
