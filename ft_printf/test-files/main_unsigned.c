/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_unsigned.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 13:07:12 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/29 12:18:31 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	main_unsigned(void)
{
	unsigned int d =4147483650;
	printf("printf(\"[%%u]\",d)\n");
	printf("[%u]\n",d);
	ft_printf("[%u]\n",d);
	printf("printf(\"[%%3u]\",d)\n");
	printf("[%3u]\n",d);
	ft_printf("[%3u]\n",d);
	printf("printf(\"[%%.3u]\",d)\n");
	printf("[%.3u]\n",d);
	ft_printf("[%.3u]\n",d);
	printf("printf(\"[%%.11u]\",d)\n");
	printf("[%.11u]\n",d);
	ft_printf("[%.11u]\n",d);
	printf("printf(\"[%%.11u]\",d)\n");
	printf("[%.11u]\n",d);
	ft_printf("[%.11u]\n",d);
	printf("printf(\"[%%020.11u]\",d)\n");
	printf("[%020.11u]\n",d);
	ft_printf("[%020.11u]\n",d);
	
}