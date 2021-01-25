/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 19:36:16 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/25 19:07:49 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_hex(int h)
{
	char	*str_ptr;

	str_ptr = malloc(sizeof(char) * 9);
	str_ptr[0] = '\0';
	while (h){
		*--str_ptr= h % 16;
		if(10>*str_ptr)
			*str_ptr+='0';
		else
			*str_ptr += ('a'- 0x0A);
		h /= 16;
	}
	return (str_ptr);
}