/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:43:27 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/12/14 14:58:23 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{	
	char *buf;
	static char save[BUFFER_SIZE];
	size_t	buf_len;
	size_t	save_len;
	int		res;
	int		i;

	buf = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if ((!line || !buf) || fd == (-1))
		return (-1);
	i = 0;
	if ((res = read(fd, buf, BUFFER_SIZE)) != (-1))
	{
		if (ft_strlcpy(save,ft_memchr(buf,'\n',BUFFER_SIZE),BUFFER_SIZE))
		{
			buf_len = ft_strlen(buf);
			save_len = ft_strlen(save);
			*line = ft_strjoin(*line,ft_substr(buf, 0, (buf_len - save_len)));
		}
		ft_strjoin(line[0],buf);
		if (!ft_memchr(buf,'\n',BUFFER_SIZE))
			*line = ft_strjoin(*line,buf);
		if (!res)
		{
			while (!ft_isprint((int)save[i]) && save[i])
				i++;
			save_len = ft_strlen(save);
			line[0] = ft_substr(save,i,i);
			ft_strlcpy(save,ft_memchr(&save[i],'\n',BUFFER_SIZE),save_len);
			//res = i;
		}
	}
	if (res <= 0)
		return (res);
	return (1);
}