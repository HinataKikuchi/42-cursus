/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2020/11/18 20:29:31 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/20 13:55:38 by hkikuchi         ###   ########.fr       */
=======
/*   Created: 2020/11/09 12:48:30 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/20 02:11:47 by hkikuchi         ###   ########.fr       */
>>>>>>> 019598d84b20b4021aa0883f407e0f9827fe8d3c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char*ft_strtrim(char const *s1, char const *set)
{
<<<<<<< HEAD
	char		*ans;
	unsigned long		i;
	unsigned long		j;
=======
	char *ans;
	unsigned long i;
	unsigned long j;
>>>>>>> 019598d84b20b4021aa0883f407e0f9827fe8d3c

	i = 0;
	j = ft_strlen(s1);
	if (!set || !s1)
		return (ft_strdup(s1));
	while (*(s1 + i) != '\0')
	{
		if (!ft_strchr(set, *(s1 + i)))
<<<<<<< HEAD
			break ;
=======
			break;
>>>>>>> 019598d84b20b4021aa0883f407e0f9827fe8d3c
		i++;
	}
	while (j > i)
	{
		if (!ft_strchr(set, *(s1 + j - 1)))
<<<<<<< HEAD
			break ;
=======
			break;
>>>>>>> 019598d84b20b4021aa0883f407e0f9827fe8d3c
		j--;
	}
	ans = (char *)ft_calloc(((j - i) + 1), sizeof(char));
	if (ans == NULL)
		return (NULL);
	ft_memcpy(ans, s1 + i, (j - i));
	return (ans);
}

