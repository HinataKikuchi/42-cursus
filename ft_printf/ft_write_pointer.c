/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 19:08:33 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/04 15:48:40 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_pointer(va_list ap, t_format *x)
{
	void	*p;
	char	*p_s;

	p = va_arg(ap, void*);
	p_s = calc_pointer((unsigned long long)p);
	get_min_field(ap,x);
	if (ft_strlen(p_s) < (size_t)x->ac)
	{
		p_s = make_pstring(p_s, *x);
		if (!p_s)
			return ;
	}
	p_s = make_pointer_string(p_s);
	if (ft_strlen(p_s) < (size_t)x->min)
	{
		x->word_count = write_with_min(p_s, *x);
		p_s = NULL;
	}
	else
		x->word_count = write(1, p_s, ft_strlen(p_s));
	free(p_s);
}