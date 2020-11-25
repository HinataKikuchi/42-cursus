/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 10:00:52 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/24 13:14:35 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char		*ans;
	size_t		i;
	size_t		s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	ans = (char *)malloc((s_len + 1) * sizeof(char));
	if (ans == NULL)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		*(ans + i) = *(s + i);
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
