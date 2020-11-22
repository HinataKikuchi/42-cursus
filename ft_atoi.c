/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 19:53:22 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/22 12:48:34 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_skip_blank(const char *nptr)
{
	while (('\t' <= *nptr && *nptr <= '\r') || *nptr == ' ')
		nptr++;
	return (char *)(nptr);
}

int		ft_skip_simbol(const char *nptr)
{
	if (*nptr == '-')
		return (-1);
	return (1);
}

int		ft_atoi(const char *nptr)
{
	unsigned long	ans;
	int				sign;
	char			*tmp;

	sign = 1;
	ans = 0;
	nptr = (const char *)ft_skip_blank(nptr);
	(*nptr == '+' ? nptr++ : nptr);
	if ((sign = ft_skip_simbol(nptr)) == -1)
		nptr++;
	tmp = (char *)nptr;
	while (*nptr != '\0' && ft_isdigit(*nptr))
	{
		ans = (ans * 10) + (int)*nptr - '0';
		nptr++;
		if (((nptr - tmp) > 19 || ans >= 9223372036854775807) && sign == 1)
			return (-1);
		else if (ans > 9223372036854775807 || (nptr - tmp) > 19)
			return (0);
	}
	return ((int)(ans * sign));
}
