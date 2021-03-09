/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:25:42 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/10 23:12:33 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"
// #include"get_next_line.c"
// // #include"new_get_next_line.c"
// #include"get_next_line_utils.c"
#include <limits.h>

int main (/*int argc, char **argv*/void)
{
	char	*line;
	int		res;

	// int fd = 0;
	// int fd = open("test.txt",O_RDONLY);
	int fd = open("64bit_paragraph.txt", O_RDONLY);
	// (void)argc;
	res = get_next_line(fd, &line);
	while (res > 0)
	{
		printf("res = %d : string is = \"%s\"\n", res, line);
		free(line);
		res = get_next_line(fd, &line);
	}
	printf("res = %d : string is = \"%s\"\n", res, line);
	if (res != -1)
		free(line);
	close(fd);
	return 0;
}