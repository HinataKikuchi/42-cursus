/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 10:42:49 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/24 13:36:07 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>
// #include "test.c"
// #include "ft_strlen.c"
// #include "ft_calloc.c"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ans;
	unsigned int	i;
	unsigned int	j;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start || LONG_MAX <= len)
	{
		if (!(ans = (char *)malloc(1 * sizeof(char ))))
			return (NULL);
		*ans = '\0';
		return (ans);
	}
	if (!(ans = (char *)ft_calloc((len + 1), sizeof(char))))
		return (NULL);
	i = start;
	j = 0;
	while (j < len)
	{
		*(ans + j) = *(s + i);
		i++;
		j++;
	}
	return (ans);
}
