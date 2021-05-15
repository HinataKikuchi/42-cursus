/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_hundling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:28:31 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/05/15 20:47:56 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/cub3d.h"
#include "../include/error.h"

void	write_error(int error_num, char *message)
{
	if (error_num == 1)
		return ;
	printf("ERROR : %s\n",message);
	exit(0);
}

void	free_cub_exit(int error_num, char *message, t_cub *cub)
{
	free_cub_struct(error_num, cub);
	write_error(error_num, message);
}

int	check_cub_file(char *s)
{
	size_t s_len;
	size_t i;
	char *prefix;

	prefix = ".cub";
	s_len = ft_strlen(s);
	if (s_len <= 4)
		return (INV_FILE);
	i = 0;
	while (s[s_len - 4 + i] == prefix[i] && i < 4)
		i++;
	if (i == 4)
		return (1);
	else
		return (INV_FILE);
}

void	check_file(char *s, int file_num)
{
	if (file_num > 3 || file_num <= 1)
		write_error(LESS_ARGS, "LESS_ARGS");
	if (check_cub_file(s) == INV_FILE)
		write_error(INV_FILE, "INV_FILE");
}