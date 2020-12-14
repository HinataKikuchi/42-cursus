/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:25:42 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/12/14 14:59:10 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"get_next_line.h"
#include	"get_next_line.c"
#include	"get_next_line_utils.c"

int main (void)
{
	char *line;
	int res;

//	line = malloc(sizeof(char *) * 1);
	int fd = open("test.txt",O_RDONLY);
	printf("%d\n",get_next_line(fd, &line));
	printf("string is = \"%s\"\n",line);
	printf("%d\n",get_next_line(fd, &line));
	printf("string is = \"%s\"\n",line);
	printf("%d\n",get_next_line(fd, &line));
	printf("string is = \"%s\"\n",line);
	printf("%d\n",get_next_line(fd, &line));
	printf("string is = \"%s\"\n",line);

	// while (get_next_line(fd, &line))
	// 	printf("%s\n",line);

	return 0;
}