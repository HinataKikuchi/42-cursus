/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 12:48:30 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/22 00:21:01 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*ft_strtrim(char const *s1, char const *set)
{
	char			*ans;
	unsigned long	i;
	unsigned long	j;

	if (!s1)
		return (NULL);
	else if (!set)
		return (ft_strdup(s1));
	i = 0;
	j = ft_strlen(s1);
	while (*(s1 + i) != '\0')
	{
		if (!ft_strchr(set, *(s1 + i)))
			break ;
		i++;
	}
	while (j > i)
	{
		if (!ft_strchr(set, *(s1 + j - 1)))
			break ;
		j--;
	}
	ans = (char *)ft_calloc(((j - i) + 1), sizeof(char));
	if (ans == NULL)
		return (NULL);
	ft_memcpy(ans, s1 + i, (j - i));
	return (ans);
}
