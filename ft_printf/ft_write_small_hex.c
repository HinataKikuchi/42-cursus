/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_small_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 00:03:26 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/25 18:03:46 by hkikuchi         ###   ########.fr       */
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
			*str_ptr+='0';//0x30は0の文字コード
		else
			*str_ptr += ('a'- 0x0A);//0x41はAの文字コード
		h /= 16;
	}
	return (str_ptr);
}

void	write_small_hex(va_list ap, s_format x)
{
	unsigned int	h;
	char			*h_s;

	h = va_arg(ap, unsigned int);
	h_s = ft_hex(h);
	get_min_field(&x);
	if (ft_strlen(h_s) < (size_t)x.ac)
	{
		h_s = make_string(h_s, x);
		if (!h_s)
			return ;
	}
	if (ft_strlen(h_s) < (size_t)x.min)
		write_with_min(h_s, x);
	else
		write(1, h_s, ft_strlen(h_s));
}