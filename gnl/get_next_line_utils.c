/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:46:48 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/12/01 05:57:56 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}


void	*ft_memchr(const void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned char	*b;
	unsigned char	c;

	i = 0;
	b = (unsigned char*)buf;
	c = (unsigned char)ch;
	while (i < n)
	{
		if (*(b + i) == c)
			return ((void *)(b + i));
		i++;
	}
	return (NULL);
}

void	*ft_calloc(size_t n, size_t size)
{
	void			*mem;

	mem = malloc(n * size);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, n * size);
	return (mem);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*ans;
	unsigned int	i;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	ans = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (ans == NULL)
		return (NULL);
	i = 0;
	while (*(s1 + i) != '\0')
	{
		*(ans + i) = *(s1 + i);
		i++;
	}
	while (*s2 != '\0')
	{
		*(ans + i) = *s2;
		s2++;
		i++;
	}
	*(ans + i) = '\0';
	return (ans);
}

char	*ft_strdup(const char *s)
{
	char		*ans;
	size_t		i;
	size_t		s_size;

	s_size = ft_strlen(s);
	ans = (char *)malloc((s_size + 1) * sizeof(char));
	if (ans == NULL)
		return (NULL);
	i = 0;
	while (i < s_size)
	{
		*(ans + i) = *(s + i);
		i++;
	}
	ans[i] = '\0';
	return (ans);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = (unsigned char *)s;
	while (i < n)
	{
		*(tmp + i) = '\0';
		i++;
	}
}

size_t	ft_strlcat(char *buf1, const char *buf2, size_t n)
{
	size_t			b1_size;
	size_t			b2_size;
	unsigned int	i;

	i = 0;
	b1_size = ft_strlen(buf1);
	b2_size = ft_strlen(buf2);
	if (b1_size >= n)
		return (b2_size + n);
	else
	{
		while (*(buf2 + i) != '\0' && i < n - b1_size - 1)
		{
			*(buf1 + (b1_size + i)) = *(buf2 + i);
			i++;
		}
		*(buf1 + (b1_size + i)) = '\0';
	}
	return (b1_size + b2_size);
}
