/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 10:42:49 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/04/07 20:10:47 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ans;
	unsigned int	i;
	unsigned int	j;
	size_t			s_len;
	size_t			malloc_size;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len <= start || len == 0)
	{
		ans = ft_calloc(1, sizeof(char));
		if (!ans)
			return (NULL);
		return (ans);
	}
	malloc_size = ((s_len < len) ? s_len : len);
	ans = ft_calloc((malloc_size + 1), sizeof(char));
	if (!ans)
		return (NULL);
	i = start;
	j = 0;
	while (j < len && i < s_len)
		*(ans + j++) = *(s + i++);
	return (ans);
}
