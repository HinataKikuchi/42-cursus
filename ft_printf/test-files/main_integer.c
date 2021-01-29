/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_integer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:14:53 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/29 12:15:13 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	main_integer(void)
{
	int d = 420000;
	printf("printf(\"[%%i]\",d)\n");
	printf("[%i]\n",d);
	ft_printf("[%i]\n",d);
	printf("printf(\"[%%1i]\",d)\n");
	printf("[%1i]\n",d);
	ft_printf("[%1i]\n",d);
	printf("printf(\"[%%.1i]\",d)\n");
	printf("[%.1i]\n",d);
	ft_printf("[%.1i]\n",d);
	printf("printf(\"[%%1.1i]\",d)\n");
	printf("[%1.1i]\n",d);
	ft_printf("[%1.1i]\n",d);
	printf("printf(\"[%%01i]\",d)\n");
	printf("[%01i]\n",d);
	ft_printf("[%01i]\n",d);
	printf("printf(\"[%%.01i]\",d)\n");
	printf("[%.01i]\n",d);
	ft_printf("[%.01i]\n",d);
	printf("printf(\"[%%01.01i]\",d)\n");
	printf("[%01.01i]\n",d);
	ft_printf("[%01.01i]\n",d);
	printf("printf(\"[%%-i]\",d)\n");
	printf("[%-i]\n",d);
	printf("printf(\"[%%-1i]\",d)\n");
	printf("[%-1i]\n",d);
	ft_printf("[%-1i]\n",d);
	printf("printf(\"[%%-.1i]\",d)\n");
	printf("[%-.1i]\n",d);
	ft_printf("[%-.1i]\n",d);
	printf("printf(\"[%%-1.1i]\",d)\n");
	printf("[%-1.1i]\n",d);
	ft_printf("[%-1.1i]\n",d);
	printf("printf(\"[%%-01i]\",d)\n");
	printf("[%-01i]\n",d);
	ft_printf("[%-01i]\n",d);
	printf("printf(\"[%%-.01i]\",d)\n");
	printf("[%-.01i]\n",d);
	ft_printf("[%-.01i]\n",d);
	printf("printf(\"[%%-01.01i]\",d)\n");
	printf("[%-01.01i]\n",d);
	ft_printf("[%-01.01i]\n",d);

	printf("\n\nprintf(\"[%%10i]\",d)\n");
	printf("[%10i]\n",d);
	ft_printf("[%10d]\n",d);
	printf("printf(\"[%%.10i]\",d)\n");
	printf("[%.10i]\n",d);
	ft_printf("[%.10d]\n",d);
	printf("printf(\"[%%10.10i]\",d)\n");
	printf("[%10.10i]\n",d);
	ft_printf("[%10.10d]\n",d);
	printf("printf(\"[%%010i]\",d)\n");
	printf("[%010i]\n",d);
	ft_printf("[%010i]\n",d);
	printf("printf(\"[%%.010i]\",d)\n");
	printf("[%.010i]\n",d);
	ft_printf("[%.010i]\n",d);
	printf("printf(\"[%%010.010i]\",d)\n");
	printf("[%010.010i]\n",d);
	ft_printf("[%010.010i]\n",d);
	printf("printf(\"[%%-10i]\",d)\n");
	printf("[%-10i]\n",d);
	ft_printf("[%-10i]\n",d);
	printf("printf(\"[%%-.10i]\",d)\n");
	printf("[%-.10i]\n",d);
	ft_printf("[%-.10i]\n",d);
	printf("printf(\"[%%-10.10i]\",d)\n");
	printf("[%-10.10i]\n",d);
	ft_printf("[%-10.10i]\n",d);
	printf("printf(\"[%%-010i]\",d)\n");
	printf("[%-010i]\n",d);
	ft_printf("[%-010i]\n",d);
	printf("printf(\"[%%-.010i]\",d)\n");
	printf("[%-.010i]\n",d);
	ft_printf("[%-.010i]\n",d);
	printf("printf(\"[%%-010.010i]\",d)\n");
	printf("[%-010.010i]\n",d);
	ft_printf("[%-010.010i]\n",d);

	printf("\n\nprintf(\"[%%10.1i]\",d)\n");
	printf("[%10.1i]\n",d);
	ft_printf("[%10.1i]\n",d);
	printf("printf(\"[%%10.7i]\",d)\n");
	printf("[%10.7i]\n",d);
	ft_printf("[%10.7i]\n",d);
	printf("printf(\"[%%7.10i]\",d)\n");
	printf("[%7.10i]\n",d);
	ft_printf("[%7.10i]\n",d);
}