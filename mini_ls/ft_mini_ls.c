/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mini_ls.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:36:52 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/12/03 12:27:05 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"
#include "../libft/libft.h"
#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int *ft_bubble(int *ans, int size)
{

}

int ft_count_file(const char *pathname)
{
	DIR *dir;
	struct dirent *dp;
	int res;

	if(!(dir = opendir(pathname)))
		return (-1);
	if (!(dp = readdir(dir)))
		return (-1);
	res = 0;
	while (dp)
	{
		if (*dp->d_name != '.')
			res++;
		dp = readdir(dir);
	}
	closedir(dir);
	return (res);
}

void ft_mini_ls(void)
{
	DIR *dir;
	struct dirent *dp;
	struct stat buf;
	int *array;
	int i;

	if ((i = ft_count_file("./")) == -1)
	{
		perror("CANNOT OPEN OR READ DIR");
		return ;
	}
	if(!(dir = opendir("./")))
		return ;
	if(!(dp = readdir(dir)))
		return ;
	array = malloc(sizeof(int) * i);
	while (dp)
	{
		if (*dp->d_name != '.')
		{
			if(!(lstat(dp->d_name,&buf)) && --i>=0)
			{
				array[i]=buf.st_mtime;
				printf("array[%d] = %d\n",i, array[i]);
			}
			else
				perror("STAT ERROR");
		}
		dp = readdir(dir);
	}
	closedir(dir);
}

int main (void)
{
	ft_mini_ls();
}