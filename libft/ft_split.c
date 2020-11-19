/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 09:08:24 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/19 12:03:11 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
// #include "test_.c"
// #include "ft_strlen.c"
// int		ft_count(char const *s, char c);
// char	**ft_splitcpy(char const *s, char c, char **ans);
// void	ft_free_col(char **ans, unsigned int i);

unsigned int		ft_count(char const *s, char c)
{
	int i;
	unsigned int ans;

	i = 0;
	ans = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
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
		while ((*s != c) && *s != '\0')
		{
			ans[j][i] = *s;
			i++;
			s++;
		}
		ans[j][i] = '\0';
		i = 0;
		j++;
		s++;
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
		*(ans + n) = NULL;
		n--;
	}
	free(*(ans + n));
	*(ans + n) = NULL;
	free(ans);
}

char	**ft_split(char const *s, char c)
{
	char			**ans;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	ans = (char **)malloc((ft_count(s, c) + 2) * sizeof(char*));
	if (ans == NULL)
		return (NULL);
	while (i < (ft_count(s, c) + 1))
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

