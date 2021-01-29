/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_large_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:51:22 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/29 12:19:13 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	main_large_hex(void)
{
	int	h = 1000;

	printf("printf(\"[%%X]\",h)\n");
	printf("[%X]\n",h);
	ft_printf("[%X]\n", h);
	printf("printf(\"[%%10X]\",h)\n");
	printf("[%10X]\n",h);
	ft_printf("[%10X]\n",h);
	printf("printf(\"[%%.10X]\",h)\n");
	printf("[%.10X]\n",h);
	ft_printf("[%.10X]\n",h);
	printf("printf(\"[%%20.10X]\",h)\n");
	printf("[%20.10X]\n",h);
	ft_printf("[%20.10X]\n",h);
	printf("printf(\"[%%020.10X]\",h)\n");
	printf("[%020.10X]\n",h);
	ft_printf("[%020.10X]\n",h);
	printf("printf(\"[%%-20.10X]\",h)\n");
	printf("[%-20.10X]\n",h);
	ft_printf("[%-20.10X]\n",h);
	system("a.out");
}