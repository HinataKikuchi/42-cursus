/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 10:42:49 by hkikuchi          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/11/18 19:10:31 by hkikuchi         ###   ########.fr       */
=======
/*   Updated: 2020/11/18 19:30:45 by hkikuchi         ###   ########.fr       */
>>>>>>> 019598d84b20b4021aa0883f407e0f9827fe8d3c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
// #include "test.c"
// #include "ft_strlen.c"

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
<<<<<<< HEAD
	if (!(ans = (char *)malloc((len + 1) * sizeof(char))))
=======
	if (!(ans = (char *)malloc((len + 1)* sizeof(char))))
>>>>>>> 019598d84b20b4021aa0883f407e0f9827fe8d3c
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
