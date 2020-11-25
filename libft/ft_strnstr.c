/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:35:57 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/24 17:15:34 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "test.c"
// #include "ft_strlen.c"
// #include "ft_memchr.c"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	char *tmp;
	size_t s2_size;

	if (*s2 == '\0')
		return (char *)(s1);
	s2_size = ft_strlen(s2);
	while (s1 && len > 0)
	{
		i = 0;
		tmp = ft_memchr(s1, *s2, len);
		if (tmp)
			while (*(s2 + i) != '\0' && (tmp + s2_size <= s1 + len))
			{
				if (*(tmp + i) != *(s2 + i))
					break;
				i++;
			}
		if (*(s2 + i) == '\0')
			return (char *)(tmp);
		s1++;
		len--;
	}
	return (NULL);
}
