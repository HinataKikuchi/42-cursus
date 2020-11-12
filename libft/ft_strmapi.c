/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 12:30:40 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/12 18:20:37 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int , char))
{
	char	*ans;
	int		i;

	ans = (char *)malloc(ft_strlen(s) * sizeof(char));
	if (ans == NULL)
		return (NULL);
	i = 0;
	while (*(s + i) != '\0')
	{
		*(ans + i) = f(ft_strlen(s), *(s + i));
		i++;
	}
	return (ans);
}