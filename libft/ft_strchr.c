/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:42:59 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/05 16:05:43 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s++ != '\0')
	{
		if (*s == (char)c)
			return (char *)s;
	}
	if (*s++ == (char)c)
			return (char *)s;
	return (NULL);
}
