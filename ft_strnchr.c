/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:35:57 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/05 19:53:06 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnchr(const char *s, size_t count, int c)
{
	unsigned int i;

	i = 0;
	while (i < count)
	{
		if (*s++ == (char)c)
			return ((char *)s);
		i++;
	}
	if (*s++ == (char)c)
		return ((char *)s);
	return (NULL);
}
