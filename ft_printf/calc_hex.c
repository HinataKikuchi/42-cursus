/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 19:36:16 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/23 20:30:21 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static int		ft_countdigits(int n)
{
	int j;

	j = 0;
	while (n)
	{
		n /= 16;
		j++;
	}
	return (j);
}

static int		ft_judge_minimam(int n)
{
	if (n == -2147483648)
		return (1);
	return (0);
}

static void		ft_intoa(char *ans, int tmp1, int j)
{
	int		tmp2;
	char	tmp;
	const char	hex_char[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

	while (tmp1)
	{
		tmp2 = tmp1 % 16;
		tmp1 = tmp1 / 16;
		tmp = hex_char[tmp2];
		*(ans + j - 1) = tmp;
		j--;
	}
}

static char		*ft_min(char *ans)
{
	ft_memcpy(ans, "-2147483648", 11);
	ans[11] = '\0';
	return (ans);
}

char			*calc_hex(int n)
{
	char	*ans;
	int		j;
	int		tmp1;

	if (n > 0)
		ans = ft_calloc((ft_countdigits(n) + 1), sizeof(char));
	else
		ans = ft_calloc((ft_countdigits(n) + 2), sizeof(char));
	if (!ans)
		return (NULL);
	if (ft_judge_minimam(n))
		return (ft_min(ans));
	j = 0;
	*ans = '0';
	if (n < 0)
	{
		n *= (-1);
		*ans = '-';
		j++;
	}
	tmp1 = n;
	j += ft_countdigits(n);
	ft_intoa(ans, tmp1, j);
	return (ans);
}
