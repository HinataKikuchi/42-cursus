/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 10:00:52 by hkikuchi          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/11/19 10:39:51 by hkikuchi         ###   ########.fr       */
=======
/*   Updated: 2020/11/19 16:59:54 by hkikuchi         ###   ########.fr       */
>>>>>>> 019598d84b20b4021aa0883f407e0f9827fe8d3c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char		*ans;
	size_t		i;

	if (!s)
		return (NULL);
	ans = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (ans == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s) + 1)
	{
		*(ans + i) = *(s + i);
		i++;
	}
	return (ans);
}
