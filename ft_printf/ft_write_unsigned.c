/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 00:02:48 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/08 22:16:54 by hkikuchi         ###   ########.fr       */
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

void	write_unsigned(va_list ap, t_format *x)
{
	unsigned int	ud;
	char			*ud_s;
	size_t	ds_len;

	ud = va_arg(ap, unsigned int);
	if (!ud && !x->min && !x->ac && ft_strchr(x->format_num, '.'))
	{
		x->word_count = 0;
		return ;
	}
	ud_s = (x->ac == 0 && ud == 0 && ft_strchr(x->format_num, '.'))\
		? ft_strdup("") : ft_itoa(ud);
	ds_len = ft_strlen(ud_s);
	if (x->minus_flag)
	{
		if (x->ac > ds_len)
			x->word_count += write_zero(x->ac - ds_len);
		x->word_count += write(1, ud_s, ds_len);
		if (x->min > x->word_count)
			x->word_count += write_blank(x->min - x->word_count);
	}
	else
	{

		x->word_count = write_ud(ud, ud_s, *x, ds_len);
	}
	safe_free(ud_s);

	// if (ft_strcmp(x->format_num,"0.0") == 0 || \
	// ((ud = va_arg(ap, unsigned int)) == 0 && !x->min && !x->ac && ft_strchr(x->format_num,'.')))
	// {
	// 	x->word_count = 0;
	// 	return ;
	// }
	// ud_s = ft_unsigned_itoa(ud);
	// if (ft_strlen(ud_s) < (size_t)x->ac)
	// {
	// 	ud_s = make_string(ud_s, *x);
	// 	if (!ud_s)
	// 		return ;
	// }
	// if (ft_strlen(ud_s) < (size_t)x->min)
	// 	x->word_count = write_with_min(ud_s, *x);
	// else
	// 	x->word_count = write(1, ud_s, ft_strlen(ud_s));
	// free(ud_s);
}
