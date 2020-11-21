/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 09:08:24 by hkikuchi          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/11/20 14:22:38 by hkikuchi         ###   ########.fr       */
=======
/*   Updated: 2020/11/20 07:35:24 by hkikuchi         ###   ########.fr       */
>>>>>>> 019598d84b20b4021aa0883f407e0f9827fe8d3c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
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
// //#include "ft_strdup.c"
// #include "ft_strmapi.c"
// #include "ft_putchar_fd.c"
// #include "ft_putstr_fd.c"
// #include "ft_putnbr_fd.c"
// #include "ft_putendl_fd.c"

unsigned int		ft_count(char const *s, char c)
{
	int i;
	unsigned int ans;

	i = 0;
	ans = 0;
	if (*(s + i) == c)
		while (*(s + i) == c)
			i++;
	while (*(s + i) != '\0')
	{
		if ((*(s + i) == c && *(s + (i + 1)) != c) && *(s + (i + 1)) != '\0')
			ans++;
		i++;
	}
	return (ans);
}

char	**ft_splitcpy(char const *s, char c, char **ans)
{
	unsigned int	i;
	int				j;
	int				line;

	i = 0;
	j = 0;
	line = ft_count(s, c) + 1;
	while (j < line)
	{
		if (*s == c)
			while (*s == c)
				s++;
		while ((*s != c) && *s != '\0')
		{
			ans[j][i] = *s;
			i++;
			s++;
		}
		ans[j][i] = '\0';
		i = 0;
		j++;
	}
	ans[j] = NULL;
	return (ans);
}

void	ft_free_col(char **ans, unsigned int i)
{
	unsigned int n;

	n = i;
	while (n > 0)
	{
		free(*(ans + n));
<<<<<<< HEAD
		*(ans + i) = NULL;
=======
		*(ans + n) = NULL;
>>>>>>> 019598d84b20b4021aa0883f407e0f9827fe8d3c
		n--;
	}
	free(*(ans + n));
	*(ans + n) = NULL;
	free(ans);
}

char **ft_single_string(char const *s, char c)
{
	char		**ans;
	char		*str;
	const char	c_string[2] = { c,'\0'};

	str = ft_strtrim(s, c_string);
	if (!str)
		return (NULL);
	if (str[0] == '\0')
	{
		ans = (char **)malloc(sizeof(char*));
		ans[0] = NULL;
		free(str);
	}
	else
	{
		ans = (char **)malloc(2 * sizeof(char*));
		ans[0] = str;
		ans[1] = NULL;
	}
	return (ans);
}

char	**ft_split(char const *s, char c)
{
	char			**ans;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	if (ft_count(s, c) == 0)
		return (ft_single_string(s, c));
	ans = (char **)malloc((ft_count(s, c) + 2) * sizeof(char*));
	if (ans == NULL)
		return (NULL);
<<<<<<< HEAD
	while (i < (unsigned int)(ft_count(s, c) + 1))
=======
	while (i < (ft_count(s, c) + 1))
>>>>>>> 019598d84b20b4021aa0883f407e0f9827fe8d3c
	{
		*(ans + i) = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
		if (*(ans + i) == NULL)
		{
			ft_free_col(ans, i);
			return (NULL);
		}
		i++;
	}
	ans = ft_splitcpy(s, c, ans);
	return (ans);
}
