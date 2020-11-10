/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 12:48:30 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/10 12:21:01 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*ans;
	size_t		i;
	size_t		j;

	i = 0;
	j = ft_strlen(s1);
	while (*(s1 + i) != '\0')
	{
		if (ft_strchr(set, *(s1 + i)) == NULL)
			break ;
		i++;
	}
	while (j > 0)
	{
		if (ft_strchr(set, *(s1 + j)) == NULL)
			break ;
		j--;
	}
	ans = (char *)malloc(((j - i) + 1) * sizeof(char));
	if (ans == NULL)
		return (NULL);
	ft_memcpy(ans, s1 + i, (j - i + 1));
	return (ans);
}
