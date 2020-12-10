/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:46:39 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/12/09 17:26:55 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		GNL_H
# define	GNL_H
# include	<unistd.h>
# include	<stdlib.h>
# include	<stdio.h>
#include	<fcntl.h>
# define	BUFFER_SIZE 32
# define	ERROR_NO -1

size_t	ft_strlen(const char *s);
int		get_next_line(int fd, char **line);
void	*ft_memchr(const void *buf, int ch, size_t n);
void	*ft_calloc(size_t n, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlcat(char *buf1, const char *buf2, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);


#endif