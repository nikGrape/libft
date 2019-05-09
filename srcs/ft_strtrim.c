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
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	char	*str;
	char	*res;
//	size_t	len;
	int i;

	i = 0;
	if (s == NULL)
		return (NULL);
//	len = ft_strlen(s);

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
		i++;
	}
	str--;
	while (*str == ' ' || *str == '\t' || *str == '\n')
	{
		str--;
		i--;
	}
	printf("%d\n", i);
	str++;
	*str = '\0';
	str = (char*)malloc(i + 1);
	return (res);
}

// does not locate a good size

int	main()
{
	char str[] = "    hello world    ";
	char *s = ft_strtrim(str);
	printf("%s\n", s);
}

