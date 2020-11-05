/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:38:39 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/05 17:27:26 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *buf;

	buf = (char *)(s + ft_strlen(s) + 1);
	while(buf-- != s)
	{
		if(*buf == (char)c)
			return (buf);
	}
	return (NULL);
}