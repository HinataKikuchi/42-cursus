/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:35:57 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/16 20:01:25 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnchr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t j;

	if (s2 == NULL)
		return (s1);
	i = 0;
	j = 0;

	if ((char *)ft_memchr(s1, *s2, len))
		while (*(s2 + i) != '\0' && i < len)
		{
			if ()
				j++;
		}
		


	return (NULL);
}
