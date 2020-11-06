/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 18:31:03 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/06 18:47:03 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	unsigned int i;
	void *mem;

	i = 0;
	mem = malloc(n * size);
	if (mem == NULL)
		return (NULL);
	while(n-- > 0)
		*mem++ = 0;
	

	return (mem);
}
