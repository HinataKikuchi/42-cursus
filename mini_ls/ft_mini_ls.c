/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mini_ls.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:36:52 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/12/04 00:29:55 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"
#include "../libft/libft.h"
#include <stdio.h>

void ft_swap(t_dir *a, t_dir *b)
{
	t_dir tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

t_dir *ft_bubble(t_dir *ans, int size)
{
	int i;
	int j;

	i = 0;
	j = size - 1;
	while(i < size - 1)
	{
		while(j >= i + 1)
		{
			printf("ans[%d] = %d, ans[%d] = %d\n",j,ans[j].time, (j-1),ans[j-1].time);
			if(ans[j].time < ans[j - 1].time)
			{
				ft_swap(&ans[j],&ans[j - 1]);
			}
			j--;
		}
		j = size - 1;
		i++;
	}
	return (ans);
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

t_dir *ft_read( int f_count)
{
	DIR *dir;
	struct dirent *dp;
	struct stat buf;
	t_dir *array;

	array = malloc(sizeof(t_dir) * f_count);
	if(!(dir = opendir("./")))
		return (NULL);
	if(!(dp = readdir(dir)))
		return (NULL);
	while (dp)
	{
		if (*dp->d_name != '.')
		{
			if(!(lstat(dp->d_name,&buf)) && --f_count>=0)
			{
				array[f_count].name=dp->d_name;
				array[f_count].time=buf.st_mtime;
			}
			else
				perror("STAT ERROR");
		}
		dp = readdir(dir);
	}
	closedir(dir);
	return (array);
};

void ft_print(t_dir *array, int a_size)
{
	int i;

	i = 0;
	while(i<a_size)
	{
		ft_putstr_fd(array[i].name,1);
		write(1, "\n", 1);
		i++;
	}
}

void ft_mini_ls(void)
{
 	t_dir *array;
	int i;

	if ((i = ft_count_file("./")) == -1)
	{
		perror("CANNOT OPEN OR READ DIR");
		return ;
	}
	array = malloc(sizeof(t_dir) * i);
	if(!(array = ft_read(i)))
		perror("CANNOT OPEN OR READ DIR");
	array = ft_bubble(array, i);
	ft_print(array, i);
}

int main (void)
{
	ft_mini_ls();
}