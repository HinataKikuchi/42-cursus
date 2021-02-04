/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_digit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:14:17 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/02/01 18:13:54 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	main_digit(void)
{
	int d = 420000;
	printf("printf(\"[%%d]\",d)\n");
	printf("[%d]\n",d);
	ft_printf("[%d]\n",d);
	printf("printf(\"[%%1d]\",d)\n");
	printf("[%1d]\n",d);
	ft_printf("[%1d]\n",d);
	printf("printf(\"[%%.1d]\",d)\n");
	printf("[%.1d]\n",d);
	ft_printf("[%.1d]\n",d);
	printf("printf(\"[%%1.1d]\",d)\n");
	printf("[%1.1d]\n",d);
	ft_printf("[%1.1d]\n",d);
	printf("printf(\"[%%01d]\",d)\n");
	printf("[%01d]\n",d);
	ft_printf("[%01d]\n",d);
	printf("printf(\"[%%.01d]\",d)\n");
	printf("[%.01d]\n",d);
	ft_printf("[%.01d]\n",d);
	printf("printf(\"[%%01.01d]\",d)\n");
	printf("[%01.01d]\n",d);
	ft_printf("[%01.01d]\n",d);
	printf("printf(\"[%%-d]\",d)\n");
	printf("[%-d]\n",d);
	printf("printf(\"[%%-1d]\",d)\n");
	printf("[%-1d]\n",d);
	ft_printf("[%-1d]\n",d);
	printf("printf(\"[%%-.1d]\",d)\n");
	printf("[%-.1d]\n",d);
	ft_printf("[%-.1d]\n",d);
	printf("printf(\"[%%-1.1d]\",d)\n");
	printf("[%-1.1d]\n",d);
	ft_printf("[%-1.1d]\n",d);
	printf("printf(\"[%%-01d]\",d)\n");
	printf("[%-01d]\n",d);
	ft_printf("[%-01d]\n",d);
	printf("printf(\"[%%-.01d]\",d)\n");
	printf("[%-.01d]\n",d);
	ft_printf("[%-.01d]\n",d);
	printf("printf(\"[%%-01.01d]\",d)\n");
	printf("[%-01.01d]\n",d);
	ft_printf("[%-01.01d]\n",d);

	printf("\n\nprintf(\"[%%10d]\",d)\n");
	printf("[%10d]\n",d);
	ft_printf("[%10d]\n",d);
	printf("printf(\"[%%.10d]\",d)\n");
	printf("[%.10d]\n",d);
	ft_printf("[%.10d]\n",d);
	printf("printf(\"[%%10.10d]\",d)\n");
	printf("[%10.10d]\n",d);
	ft_printf("[%10.10d]\n",d);
	printf("printf(\"[%%010d]\",d)\n");
	printf("[%010d]\n",d);
	ft_printf("[%010d]\n",d);
	printf("printf(\"[%%.010d]\",d)\n");
	printf("[%.010d]\n",d);
	ft_printf("[%.010d]\n",d);
	printf("printf(\"[%%010.010d]\",d)\n");
	printf("[%010.010d]\n",d);
	ft_printf("[%010.010d]\n",d);
	printf("printf(\"[%%-10d]\",d)\n");
	printf("[%-10d]\n",d);
	ft_printf("[%-10d]\n",d);
	printf("printf(\"[%%-.10d]\",d)\n");
	printf("[%-.10d]\n",d);
	ft_printf("[%-.10d]\n",d);
	printf("printf(\"[%%-10.10d]\",d)\n");
	printf("[%-10.10d]\n",d);
	ft_printf("[%-10.10d]\n",d);
	printf("printf(\"[%%-010d]\",d)\n");
	printf("[%-010d]\n",d);
	ft_printf("[%-010d]\n",d);
	printf("printf(\"[%%-.010d]\",d)\n");
	printf("[%-.010d]\n",d);
	ft_printf("[%-.010d]\n",d);
	printf("printf(\"[%%-010.010d]\",d)\n");
	printf("[%-010.010d]\n",d);
	ft_printf("[%-010.010d]\n",d);

	printf("\n\nprintf(\"[%%10.1d]\",d)\n");
	printf("[%10.1d]\n",d);
	ft_printf("[%10.1d]\n",d);
	printf("printf(\"[%%10.7d]\",d)\n");
	printf("[%10.7d]\n",d);
	ft_printf("[%10.7d]\n",d);
	printf("printf(\"[%%7.10d]\",d)\n");
	printf("[%7.10d]\n",d);
	ft_printf("[%7.10d]\n",d);
	printf("printf(\"[%%010.07d]\",d)\n");
	printf("[%010.07d]\n",d);
	ft_printf("[%010.07d]\n",d);
	printf("printf(\"[%%07.010d]\",d)\n");
	printf("[%07.010d]\n",d);
	ft_printf("[%07.010d]\n",d);
	printf("printf(\"[%%020.11d]\",d)\n");
	printf("[%020.11d]\n",d);
	ft_printf("[%020.11d]\n",d);
	printf("printf(\"[%%-020.11d]\",d)\n");
	printf("[%-020.11d]\n",d);
	ft_printf("[%-020.11d]\n",d);
	printf("[%.30d]",-1);
	ft_printf("");

	unsigned int u = 4294967295;
	ft_printf("[%d]\n",u);

}