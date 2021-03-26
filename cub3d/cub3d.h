/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 18:02:18 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/03/26 19:45:48 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft/libft.h"
# include "gnl/get_next_line.h"

typedef struct	s_cub
{
	int		R_x;
	int		R_y;
	char	*NO;
	char	*SO;
	char	*WE;
	char	*EA;

	char *Sprite;
	int		F[3];
	int		C[3];

	char	**map;
	int		map_row;
	int		map_col;
}				t_cub;

int		get_cub_value(char *file_path, t_cub *cub);
void	free_struct(t_cub *cub);
void	safe_free(void *p);
int		get_map(char *file_path, t_cub *cub);

#endif