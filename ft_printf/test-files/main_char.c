/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 17:14:36 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/23 17:40:05 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"

int main (void)
{
	char c = 'A';

	printf("__CHAR_FORMAT_TEST__\n\n");
	printf("printf(\"[%%c]\",c)\n");
	printf("[%c]\n",c);
	ft_printf("[%c]\n",c);
	printf("printf(\"[%%7c]\",c)\n");
	printf("[%7c]\n",c);
	ft_printf("[%7c]\n",c);
	printf("printf(\"%%.7c\",c)\n");
	printf("[%.7c]\n",c);
	ft_printf("[%.7c]\n",c);
	printf("printf(\"[%%07c]\",c)\n");
	printf("[%07c]\n",c);
	ft_printf("[%07c]\n",c);
	printf("printf(\"%%.07c\",c)\n");
	printf("[%.07c]\n",c);
	ft_printf("[%.07c]\n",c);
	printf("printf(\"[%%-7c]\",c)\n");
	printf("[%-7c]\n",c);
	ft_printf("[%-7c]\n",c);
	printf("printf(\"%%-.7c\",c)\n");
	printf("[%-.7c]\n",c);
	ft_printf("[%-.7c]\n",c);
	printf("printf(\"[%%-07c]\",c)\n");
	printf("[%-07c]\n",c);
	ft_printf("[%-07c]\n",c);
	printf("printf(\"%%-.07c\",c)\n");
	printf("[%-.07c]\n",c);
	ft_printf("[%-.07c]\n",c);
	
}
