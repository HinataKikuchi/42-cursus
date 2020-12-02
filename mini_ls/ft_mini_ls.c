/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mini_ls.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:36:52 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/12/02 18:41:28 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"
#include "../libft/libft.h"

void ft_mini_ls(void)
{
	DIR *dir;
	char *path;
	struct dirent *dp;
	struct stat *buf;
	int status;

	path = "./";
	dir = opendir(path);
	dp = readdir(dir);
	while (dp)
	{
		if (*dp->d_name != '.')
		{
			ft_putstr_fd(dp->d_name,1);
			write(1,"\n",1);
		}
		dp = readdir(dir);
	}


}

int main (void)
{
	ft_mini_ls();
}