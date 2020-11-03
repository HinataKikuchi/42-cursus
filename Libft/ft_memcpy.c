/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 12:52:49 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/03 16:49:49 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	unsigned int i;
	char *b1;
	char *b2;
	
	b1=(char *)buf1;
	b2=(char *)buf2;
	i=0; 
	while(i < n)
	{
		*(b1+i)=*(b2+i);
		i++;
	}
	return b1;
}