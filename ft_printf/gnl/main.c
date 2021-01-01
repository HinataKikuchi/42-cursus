/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:25:42 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/12/26 00:49:25 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"get_next_line.h"
#include	"get_next_line.c"
// #include	"new_get_next_line.c"
#include	"get_next_line_utils.c"

int main (void)
{
	char	*line;
	int		res;

	// int fd = 0;
	int fd = open("test.txt",O_RDONLY);
	res = get_next_line(fd, &line);
	while (res > 0)
	{
		printf("res = %d : string is = \"%s\"\n", res, line);
		res = get_next_line(fd, &line);
	}
	printf("res = %d : string is = \"%s\"\n", res, line);
	return 0;
}