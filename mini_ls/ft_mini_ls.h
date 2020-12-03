/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mini_ls.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:36:49 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/12/03 17:02:27 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINI_LS
# define MINI_LS
# include <dirent.h>
# include <sys/stat.h>
# include <stdio.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef struct	s_dir
{
	int time;
	char *name;
}				t_dir;




#endif