/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 19:19:41 by hkikuchi          #+#    #+#             */
/*   Updated: 2021/01/08 19:20:13 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <limits.h>
# define MAX_ASIZE 256
# define ERROR_NO -1

int		get_next_line(int fd, char **line);
size_t	ft_nstrlen(const char *s);
void	*ft_memchr(const void *buf, int ch, size_t n);
char	*ft_strjoin_free(char *s1, char *s2);
char	*ft_strdup(const char *s);
size_t	ft_strlcpy(char *buf1, const char *buf2, size_t n);
char	*ft_cat_line(int *res, char *line, char *save, int *i);
char	*ft_read_line(int fd, int *res, char *save);

#endif
