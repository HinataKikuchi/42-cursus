/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_small_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:51:22 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/29 12:18:59 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	main_small_hex(void)
{
	unsigned int	h = 4294967295;

	printf("printf(\"[%%x]\",h)\n");
	printf("[%x]\n",h);
	ft_printf("[%x]\n", h);
	printf("printf(\"[%%10x]\",h)\n");
	printf("[%10x]\n",h);
	ft_printf("[%10x]\n",h);
	printf("printf(\"[%%.10x]\",h)");
	printf("[%.10x]\n",h);
	ft_printf("[%.10x]\n",h);
	printf("printf(\"[%%20.10x]\",h)\n");
	printf("[%20.10x]\n",h);
	ft_printf("[%20.10x]\n",h);
	printf("printf(\"[%%020.10x]\",h)\n");
	printf("[%020.10x]\n",h);
	ft_printf("[%020.10x]\n",h);
	printf("printf(\"[%%-20.10x]\",h)\n");
	printf("[%-20.10x]\n",h);
	ft_printf("[%-20.10x]\n",h);
	system("a.out");
}