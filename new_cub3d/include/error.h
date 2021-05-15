/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:36:23 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/05/15 23:19:56 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H
# define LESS_ARGS 2
# define INV_FILE 3
# define MLX_WIN_ERROR 4
# define MALLOC_ERROR 5
# define MAP_VALUE_ERROR 6
# define TOO_MANY_ARGS_IN_F_C 7
# define GNL_ERROR 8
# define INV_MAP 9
# define NO_START_POS 10
# define MLX_INIT_ERROR 11
# define MAP_MALLOC_ERROR 12
# define NO_TEXTURE_ERROR 13
# define SO_TEXTURE_ERROR 14
# define WE_TEXTURE_ERROR 15
# define EA_TEXTURE_ERROR 16

void	write_error(int error_num, char *message);
int	check_cub_file(char *s);
void	check_file(char *s, int file_num);


#endif
