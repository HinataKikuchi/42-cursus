/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 18:31:03 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/09 09:59:04 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char			*mem;
	char			*ans;
	unsigned int	i;

	mem = malloc(n * size);
	if (mem == NULL)
		return (NULL);
	ans = mem;
	i = 0;
	while (i < n * size)
	{
		*ans = '\0';
		ans++;
		i++;
	}
	return ((void *)mem);
}
