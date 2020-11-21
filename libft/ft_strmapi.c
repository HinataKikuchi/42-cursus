/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 12:30:40 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/21 14:09:48 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "test_.c"
// #include "ft_strlen.c"
// #include "ft_strdup.c"
// #include "ft_memset.c"
// #include "ft_memcmp.c"
// #include "ft_bzero.c"
// #include "ft_memchr.c"
// #include "ft_strchr.c"
// #include "ft_strrchr.c"
// #include "ft_strncmp.c"
// #include "ft_atoi.c"
// #include "ft_itoa.c"
// #include "ft_isalpha.c"
// #include "ft_memcpy.c"
// #include "ft_memccpy.c"
// #include "ft_isdigit.c"
// #include "ft_isalnum.c"
// #include "ft_isascii.c"
// #include "ft_isprint.c"
// #include "ft_toupper.c"
// #include "ft_tolower.c"
// #include "ft_calloc.c"
// #include "ft_substr.c"
// #include "ft_strjoin.c"
// #include "ft_strtrim.c"
// #include "ft_split.c"
// #include "ft_putchar_fd.c"
// #include "ft_putstr_fd.c"
// #include "ft_putnbr_fd.c"
// #include "ft_putendl_fd.c"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ans;
	int		i;

	if (!s)
		return (NULL);
	ans = (char *)ft_calloc(ft_strlen(s),sizeof(char));
	if (ans == NULL)
		return (NULL);
	i = 0;
	while (*(s + i) != '\0')
	{
		*(ans + i) = f(i, *(s + i));
		i++;
	}
	*(ans + i) = '\0';
	return (ans);
}
