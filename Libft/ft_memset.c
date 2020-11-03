/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:50:04 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/03 16:31:54 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *buf, int ch, size_t n)
{
    unsigned int i;
	
	i=0;
	while (i < n)
	{
		char *tmp = buf;
		*(tmp + i)=(char)ch;
		buf = tmp;
		i++;
	}
	return buf;
}