/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:25:42 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/12/09 17:42:20 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"get_next_line.h"

int main (void)
{
	int fd;
	char *line;
	int res;

	fd = open("test.txt",O_RDONLY);
	if ((res = get_next_line(fd,&line)) != -1)
		printf("%d",res);
	printf("%s",line);
	return 0;
}