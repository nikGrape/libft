/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 12:27:22 by exam              #+#    #+#             */
/*   Updated: 2019/04/19 14:14:44 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	word_counter(char *str)
{
	int i;
	int words;

	words = 0;
	i = 0;
	while (str[i])
	{ 
		while((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
			i++;
		if (str[i])
			words++;
		while((str[i] != ' ' && str[i] != '\t') && str[i] != '\0')
			i++;
	}
	return (words);
}
char	**memory_giver(char *str, int size)
{
	char 	**res;
	int	letters;
	int	i;
	int	j;

	res = (char **)malloc(sizeof(char*) * size);
	i = 0;
	j = 0;
	while (str[i])
	{
		letters = 0;
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
			i++;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
		{
			letters++;
			i++;
		}
		if (letters > 0)
			res[j] = (char *)malloc(sizeof(char) * letters + 1);
		j++;
	}
	return (res);
}

	
char    **ft_split(char *str)
{
	char	**res;
	int	i;
	int	j;
	int	str_number;
	int	size;

	size = word_counter(str);
	res = memory_giver(str, size);
	if (res == NULL)
		return (NULL);
	i = 0;
	str_number = 0;
	while (str_number < size)
	{
		j = 0;
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
			i++;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
		{
			res[str_number][j] = str[i];
			i++;
			j++;
		}
		res[str_number][j] = '\0';
		str_number++;
	}
	return (res);
}
