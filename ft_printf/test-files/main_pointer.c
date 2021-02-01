/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_pointer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:17:36 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/31 19:14:16 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	main_pointer(void)
{
	char *p ="a";
	printf("printf(\"[%%p]\",p)\n");
	printf("[%p]\n",p);
	ft_printf("printf(\"[%%p]\",p)\n");
	printf("printf(\"[%%3p]\",p)\n");
	printf("[%3p]\n",p);
	ft_printf("[%3p]\n",p);
	printf("printf(\"[%%.3p]\",p)\n");
	printf("[%.3p]\n",p);
	ft_printf("[%.3p]\n",p);
	printf("printf(\"[%%1.3p]\",p)\n");
	printf("[%1.3p]\n",p);
	ft_printf("[%1.3p]\n",p);
	printf("printf(\"[%%03p]\",p)\n");
	printf("[%03p]\n",p);
	ft_printf("[%03p]\n",p);
	printf("printf(\"[%%.03p]\",p)\n");
	printf("[%.03p]\n",p);
	ft_printf("[%.03p]\n",p);
	printf("printf(\"[%%03.03p]\",p)\n");
	printf("[%03.03p]\n",p);
	ft_printf("[%03.03p]\n",p);
	printf("printf(\"[%%-p]\",p)\n");
	printf("[%-p]\n",p); 
	ft_printf("[%-p]\n",p);
	printf("printf(\"[%%-3p]\",p)\n");
	printf("[%-3p]\n",p);
	ft_printf("[%-3p]\n",p);

	printf("printf(\"[%%-.3p]\",p)\n");
	printf("[%-.3p]\n",p);
	ft_printf("[%-.3p]\n",p);
	printf("printf(\"[%%-3.3p]\",p)\n");
	printf("[%-3.3p]\n",p);
	ft_printf("[%-3.3p]\n",p);
	printf("printf(\"[%%-03p]\",p)\n");
	printf("[%-03p]\n",p);
	ft_printf("[%-03p]\n",p);
	printf("printf(\"[%%-.03p]\",p)\n");
	printf("[%-.03p]\n",p);
	ft_printf("[%-.03p]\n",p);
	printf("printf(\"[%%-03.03p]\",p)\n");
	printf("[%-03.03p]\n",p);
	ft_printf("[%-03.03p]\n",p);

	printf("printf(\"[%%20p]\",p)\n");
	printf("[%20p]\n",p);
	ft_printf("[%20p]\n",p);
	printf("printf(\"[%%.20p]\",p);\n");
	printf("[%.20p]\n",p);
	ft_printf("[%.20p]\n",p);
	printf("[%%20.20p]\",p)\n");
	printf("[%20.20p]\n",p);
	ft_printf("[%20.20p]\n",p);
	printf("printf(\"[%%020p]\",p)\n");
	printf("[%020p]\n",p);
	ft_printf("[%020p]\n",p);
	printf("printf(\"[%%.020p]\",p)\n");
	printf("[%.020p]\n",p);
	ft_printf("[%.020p]\n",p);
	printf("printf(\"[%%020.020p]\",p)\n");
	printf("[%020.020p]\n",p);
	ft_printf("[%020.020p]\n",p);
	printf("printf(\"[%-p]\",p)\n");
	printf("[%-p]\n",p);
	ft_printf("[%-p]\n",p);
	printf("printf(\"[%%-20p]\",p)\n");
	printf("[%-20p]\n",p);
	ft_printf("[%-20p]\n",p);
	printf("printf(\"[%%-.20p]\",p)\n");
	printf("[%-.20p]\n",p);
	ft_printf("[%-.20p]\n",p);
	printf("printf(\"[%%-20.20p]\",p)\n");
	printf("[%-20.20p]\n",p);
	ft_printf("[%-20.20p]\n",p);
	printf("printf(\"[%%-020p]\",p)\n");
	printf("[%-020p]\n",p);
	ft_printf("[%-020p]\n",p);
	printf("printf(\"[%%-.020p]\",p)\n");
	printf("[%-.020p]\n",p);
	ft_printf("[%-.020p]\n",p);
	printf("printf(\"[%%-020.020p]\",p)\n");
	printf("[%-020.020p]\n",p);
	ft_printf("[%-020.020p]\n",p);

	printf("\nprintf(\"[%%20.3p]\",p)\n");
	printf("[%20.3p]\n",p);
	ft_printf("[%20.3p]\n",p);
	printf("printf(\"[%%30.20p]\",p);\n");
	printf("[%30.20p]\n",p);
	ft_printf("[%30.20p]\n",p);
	printf("printf(\"[%%20.30p]\",p)\n");
	printf("[%20.30p]\n",p);
	ft_printf("[%20.30p]\n",p);
	printf("printf(\"[%%3.20p]\",p);\n");
	printf("[%3.20p]\n",p);
	ft_printf("[%3.20p]\n",p);
	printf("printf(\"[%%20.03p]\",p)\n");
	printf("[%20.03p]\n",p);
	ft_printf("[%20.03p]\n",p);
	printf("printf(\"[%%020.3p]\",p)\n");
	printf("[%020.3p]\n",p);
	ft_printf("[%020.3p]\n",p);
	printf("printf(\"[%%020.030p]\",p)\n");
	printf("[%020.030p]\n",p);
	ft_printf("[%020.030p]\n",p);
	printf("printf(\"[%%p]\",p)\n");

	printf("\n__SEARCH_ABOUT_NEGATIVE_NUMBER__\n");
	int *q = -1;
	printf("printf(\"[%%p]\",q)\n");
	printf("[%p]\n",q);
	ft_printf("[%p]\n",q);
	printf("printf(\"[%%30p]\",q)\n");
	printf("[%30p]\n",q);
	ft_printf("[%30p]\n",q);
	printf("\n\n__NULL_TEST__\n");
	printf("[%p]\n",NULL);
	ft_printf("[%p]\n",NULL);
}
