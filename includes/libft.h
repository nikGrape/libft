/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:19:48 by vinograd          #+#    #+#             */
/*   Updated: 2019/04/30 16:20:15 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

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
char	*ft_strdup(char *s);
size_t	ft_strlen(char *s);
char	*ft_strstr(char *haystach, char *needle);
int		ft_tolower(int c);

#endif
