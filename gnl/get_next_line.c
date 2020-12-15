/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:43:27 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/12/15 18:35:20 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "get_next_line.h"

// int	get_next_line(int fd, char **line)
// {	
// 	char *buf;
// 	static char save[256];
// 	size_t	buf_len;
// 	size_t	save_len;
// 	int		res;
// 	int		i;
// 	int		j;

// 	buf = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
// 	if ((!line || !buf) || fd == (-1))
// 		return (-1);
// 	i = 0;
// 	// if (!ft_memchr(save,'\n',256) || save[0]) 
// 	// {
// 	// 	while (!ft_memchr(buf, '\n', BUFFER_SIZE))
// 	// 	{
// 	// 		res = read(fd, buf, BUFFER_SIZE);
// 	// 		ft_strlcat(save, buf, BUFFER_SIZE);
// 	// 	}
// 	// 	// if (ft_memchr(buf, '\n', BUFFER_SIZE))
// 	// 	// 	ft_strlcpy(save,ft_memchr(buf,'\n',BUFFER_SIZE),BUFFER_SIZE);
// 	// }

// 	// else
// 	// {
		
// 	// }
// 	if ((res = read(fd, buf, BUFFER_SIZE)) != (-1))
// 	{
// 		while (!ft_memchr(buf,'\n',BUFFER_SIZE) && res)
// 		{
// 			//printf("read = %d\n",res);
// 			*line = ft_strjoin(*line,buf);
// 			buf_len = ft_strlen(buf);
// 			ft_bzero(buf,buf_len);
// 			res = read(fd, buf, BUFFER_SIZE);
// 		}
// 		if (ft_strlcpy(save,ft_memchr(buf,'\n',BUFFER_SIZE),BUFFER_SIZE))
// 		{
// 			buf_len = ft_strlen(buf);
// 			save_len = ft_strlen(save);
// 			*line = ft_strjoin(*line,ft_substr(buf, 0, (buf_len - save_len)));
// 		}
// 		//line[0] = ft_strjoin(line[0],buf);
// 		if (!res)
// 		{
// 			while (!ft_isprint((int)save[i]) && save[i])
// 				i++;
// 			j = i;
// 			while (save[j] != '\n' && save[j] !='\0')
// 				j++;
// 			save_len = ft_strlen(save);
// 			line[0] = ft_substr(save,i,j - 1);
// 			ft_strlcpy(save,ft_memchr(&save[i],'\n',BUFFER_SIZE),save_len);
// 		}
// 	}
// 	if (res <= 0)
// 		return (res);
// 	return (1);
// }


#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{	
	char		*buf;
	static char	save[256];
	int			res;
	int			i;

	buf = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if ((!line || !buf) || fd == (-1))
		return (-1);
	i = 0;
	res = 1;
	while((!ft_memchr(buf, '\n',BUFFER_SIZE) || !ft_memchr(buf, '\0', BUFFER_SIZE)))
	{
		res = read(fd, buf, BUFFER_SIZE);
		if (!res)
			break ;
		*line = ft_strjoin(*line, buf);
	}
	if (ft_memchr(buf, '\n',BUFFER_SIZE))
	{
		while (buf[i] != '\n')
			i++;
		ft_strlcat(*line, buf,ft_strlen(*line) + i);
		ft_bzero(save,ft_strlen(save));
		ft_strlcpy(save,ft_memchr(buf,'\n',BUFFER_SIZE), BUFFER_SIZE);
	}
	else if (ft_memchr(buf, '\0', BUFFER_SIZE))
	{
		ft_strlcat(*line, buf, ft_strlen(buf));
		res = 0;
	}
	return (res);
}