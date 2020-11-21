/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:35:57 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/21 16:50:03 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	char *tmp;

	if (*s2 == '\0')
		return ((char*)s1);
	i = 0;
	tmp = ft_memchr(s1, *s2, len); 
	if (tmp)
		while (*(s2 + i) != '\0' && (tmp + ft_strlen(s2) <= s1 + len))
		{
			if (*(tmp + i) != *(s2 + i))
				break ;
			i++;
		}
	if(*(s2 + i) == '\0')
		return (tmp);
	return (NULL);
}
