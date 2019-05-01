/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:19:48 by vinograd          #+#    #+#             */
/*   Updated: 2019/04/30 21:07:34 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT
#define LIBFT
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *s);
void	ft_bzero(void *s, size_t n);
void	itoa2(char *str, int nbr);
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
char	*strnstr(const char *haystack, const char *needle, size_t len);

#endif
