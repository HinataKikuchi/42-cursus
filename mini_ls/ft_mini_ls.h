/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mini_ls.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:36:49 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/12/04 02:18:12 by hkikuchi         ###   ########.fr       */
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
	long n_time;
	char *name;
}				t_dir;

int		ft_strcmp(const char *s1, const char *s2);
void	ft_swap(t_dir *a, t_dir *b);
t_dir	*ft_bubble(t_dir *ans, int size);
void	ft_mini_ls(void);

#endif