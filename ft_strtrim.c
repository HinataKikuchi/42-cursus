/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 12:48:30 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/19 10:43:09 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
// #include "test_.c"
// #include "ft_strlen.c"
// #include "ft_strchr.c"
// #include "ft_memcpy.c"
// #include "ft_calloc.c"
// #include "ft_strdup.c"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*ans;
	size_t		i;
	size_t		j;

	i = 0;
	j = ft_strlen(s1);
	if (!set || !s1)
		return (ft_strdup(s1));
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
