/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:19:48 by vinograd          #+#    #+#             */
/*   Updated: 2019/05/02 20:14:34 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *restrict dst, void *restrict src, size_t n);
void	*ft_memccpy(void *restrict dst, const void *restrict src, \
		int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	**ft_strsplit(char const *str, char c);
int		ft_atoi(const char *s);
void	ft_bzero(void *s, size_t n);
char	*ft_itoa(int nbr);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char const *s);
void	ft_strcat(char *str1, char *str2);
void	ft_strncat(char *str1, char*str2, int n);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strdup(char *s);
size_t	ft_strlen(char *s);
char	*ft_strstr(char *haystach, char *needle);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

#endif
