/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 10:00:52 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/21 16:51:44 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char		*ans;
	size_t		i;

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
