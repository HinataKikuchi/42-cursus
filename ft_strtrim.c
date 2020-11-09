/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 12:48:30 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/09 22:33:43 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ans;
	int		i;

	ans = (char *)ft_calloc((ft_strlen(s1) + 1),sizeof(char));
	if (ans == NULL)
		return (NULL);
	i = 0;
	while(*(set + i) != '\0'&&*s1 != '\0')
	{
		printf("*(set + i) = %c\n *s1 = %c\n", *(set+i), *s1);
		if((*(set + i) - *s1) == 0)
			i++;
		if(i == 0)
			break ;
		s1++;
	}
	
	ans = (char *)s1;

	return (ans);
}
