/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:15:01 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/11/05 17:35:10 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

void	*ft_memset(void *bun, int ch, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *buf1, const void *buf2, size_t n);
void	*ft_memccpy(void *buf1, const void *buf2, int c, size_t n);
void	*ft_memmove(void *buf1, const void *buf2, size_t n);
void	*ft_memchr(const void *buf, int ch, size_t n);
int		ft_memcmp(const void *buf1, const void *buf2, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *buf1, const char *buf2, size_t n);
size_t	ft_strlcat(char *buf1, const char *buf2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnchr(const char *s, size_t count, int c);

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
void	ft_putchar_fd(char c, int fd);

#endif
