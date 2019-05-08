/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 15:23:25 by vinograd          #+#    #+#             */
/*   Updated: 2019/05/06 20:16:56 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	char	*res;
	size_t	len;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	str = (char*)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	res = str;
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	while (*s)
	{
		*str = *s;
		str++;
		s++;
	}
	str--;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str--;
	str++;
	*str = '\0';
	return (res);
}
/*
// does not locate a good size
#include <stdio.h>

int ain()
{
	char str[] = "    hello world    ";
	char *s = ft_strtrim(str);
	printf("%s\n", s);
}
*/
