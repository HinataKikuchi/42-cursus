/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:25:42 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/03 17:32:52 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"get_next_line.h"
// #include	"get_next_line.c"
// // #include	"new_get_next_line.c"
// #include	"get_next_line_utils.c"

int main(void)
{
    char    *line;
    int     fd;
    int     ret;

    fd = open("64bit_line.txt", O_RDONLY);

    while ((ret = get_next_line(fd, &line)) == 1)
    {
        printf("%s\n", line);
        free(line);
    }

    
    if (ret == 0)
    {
        printf("GNL == 0\n");
        printf("%s\n", line);
        free(line);
    }
    if (ret == -1)
    {
        printf("error");
    }
    close(fd);

    printf("[end]\n");

    return (0);
}
