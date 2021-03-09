/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:46:39 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/03/09 17:45:37 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <limits.h>
# define MAX_ASIZE 256
# define ERROR_NO -1
# define BUFFER_SIZE 10

int		get_next_line(int fd, char **line);
size_t	ft_nstrlen(const char *s);
void	*ft_memchr(const void *buf, int ch, size_t n);
char	*ft_strjoin_free(char *s1, char *s2);
char	*ft_strdup(const char *s);
size_t	ft_strlcpy(char *buf1, const char *buf2, size_t n);
char	*ft_cat_line(int *res, char *line, char *save, int *i);
char	*ft_read_line(int fd, int *res, char *save);

#endif
