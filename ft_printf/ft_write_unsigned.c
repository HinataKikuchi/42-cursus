/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 00:02:48 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/02 15:48:00 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		ft_count_digits(unsigned int n)
{
	int j;

	j = 0;
	while (n)
	{
		n /= 10;
		j++;
	}
	return (j);
}

static void		ft_in_to_a(char *ans, unsigned int tmp1, int j)
{
	unsigned int		tmp2;
	char	tmp;

	while (tmp1)
	{
		tmp2 = tmp1 % 10;
		tmp1 = tmp1 / 10;
		tmp = tmp2 + '0';
		*(ans + j - 1) = tmp;
		j--;
	}
}


static char			*ft_unsigned_itoa(unsigned int n)
{
	char	*ans;
	int		j;
	unsigned int		tmp1;

	ans = ft_calloc((ft_count_digits(n) + 1), sizeof(char));
	if (!ans)
		return (NULL);
	j = 0;
	*ans = '0';
	tmp1 = n;
	j += ft_count_digits(n);
	ft_in_to_a(ans, tmp1, j);
	return (ans);
}

void	write_unsigned(va_list ap, s_format x)
{
	unsigned int	ud;
	char			*ud_s;

	ud = va_arg(ap, unsigned int);
	ud_s = ft_unsigned_itoa(ud);
	get_min_field(ap,&x);
	if (ft_strlen(ud_s) < (size_t)x.ac)
	{
		ud_s = make_string(ud_s, x);
		if (!ud_s)
			return ;
	}
	if (ft_strlen(ud_s) < (size_t)x.min)
		write_with_min(ud_s, x);
	else
		write(1, ud_s, ft_strlen(ud_s));
	free(ud_s);
}
