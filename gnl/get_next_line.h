/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:46:39 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/01 18:09:12 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		GNL_H
# define	GNL_H
# include	<unistd.h>
# include	<stdlib.h>
# include	<stdio.h>
#include	<fcntl.h>
#include	<limits.h>
// # define	BUFFER_SIZE 32
# define	MAX_ASIZE 256
# define	ERROR_NO -1

size_t	ft_strlen(const char *s);
int		get_next_line(int fd, char **line);
void	*ft_memchr(const void *buf, int ch, size_t n);
void	*ft_calloc(size_t n, size_t size);
char	*ft_strjoin(char /*const*/ *s1, char /*const*/ *s2/*, int count*/);
char	*ft_strdup(const char *s);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlcat(char *buf1, const char *buf2, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlcpy(char *buf1, const char *buf2, size_t n);
int		ft_isprint(int c);
void	ft_bzero(void *s, size_t n);
void	*ft_memmove(void *buf1, const void *buf2, size_t n);
char	*ft_read(int fd, int *res, char **line);
char	*ft_return(int *res, char *line, char *save, char *buf);




#endif