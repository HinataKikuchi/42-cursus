/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 19:53:22 by hkikuchi          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/11/18 16:44:26 by hkikuchi         ###   ########.fr       */
/*   Updated: 2020/11/18 16:16:44 by hkikuchi         ###   ########.fr       */
=======
/*   Updated: 2020/11/19 12:07:48 by hkikuchi         ###   ########.fr       */
>>>>>>> 019598d84b20b4021aa0883f407e0f9827fe8d3c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char*	ft_skip_blank(const char *nptr)
{
	while (('\t' <= *nptr && *nptr <= '\r') || *nptr == ' ')
		nptr++;
	return (char *)(nptr);
}

int		ft_atoi(const char *nptr)
{
	unsigned long	ans;
	int				sign;
	char			*tmp;

	sign = 1;
	ans = 0;
	nptr = (const char *)ft_skip_blank(nptr);
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	tmp = (char *)nptr;
	while (*nptr != '\0' && ft_isdigit(*nptr))
	{
		ans = ans * 10;
		ans += (int)*nptr - '0';
		nptr++;
		if (((nptr - tmp) > 19 || ans >= 9223372036854775807)&& sign == 1)
			return (-1);
		else if (ans > 9223372036854775807)
			return (0);	
		if (((nptr - tmp) > 19 || ans >= 9223372036854775807) && sign == 1)
			return (-1);
		else if (ans > 9223372036854775807 || (nptr - tmp) > 19)
			return (0);
	}
	return ((int)(ans * sign));
}
