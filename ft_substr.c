/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 10:42:49 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/18 19:10:31 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ans;
	unsigned int	i;
	unsigned int	j;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start || len == 0)
	{
		if (!(ans = (char *)malloc(1 * sizeof(char ))))
			return (NULL);
		*ans = '\0';
		return (ans);
	}
	if (!(ans = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = start;
	j = 0;
	while (j < (len))
	{
		*(ans + j) = *(s + i);
		i++;
		j++;
	}
	return (ans);
}
