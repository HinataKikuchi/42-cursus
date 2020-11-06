/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 18:31:03 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/07 00:49:44 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	int *mem;
	unsigned int i;

	mem = malloc(n * size);
	if (mem == NULL)
		return (NULL);
	i=0;
	while (i<n)
	{
		*mem++ = 0;
		i++;
	}
	

	return ((void *)mem);
}
