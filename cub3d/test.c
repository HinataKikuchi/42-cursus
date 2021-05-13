/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:03:42 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/05/06 18:26:09 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "cub3d.h"
#include <stdio.h>

typedef struct s_test
{
	int a;
}				t_test;

void write_a(t_test *test)
{
	test->a = 0;
}

int		main (/*int argc, char **argv*/void)
{
	t_test test;

	test.a = 100;
	printf("test.a = %d\n",test.a);
	write_a(&test);
	printf("test.a = %d\n",test.a);
}

