/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:32:09 by vinograd          #+#    #+#             */
/*   Updated: 2019/05/02 00:51:19 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		size(int i)
{
	int size;

	if (i == 0)
		return (2);
	size = 1;
	if (i < 0)
	{
		i /= 10;
		size += 2;
		i = -i;
	}
	while (i > 0)
	{
		i /= 10;
		size++;
	}
	return (size);
}

static void		get_string(char *str, int nbr)
{
	int		index;
	int		sing;

	sing = 0;
	index = 0;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	if (nbr >= 10)
		get_string(str, nbr / 10);
	while (str[index])
		index++;
	str[index] = nbr % 10 + '0';
	str[++index] = '\0';
}

char			*ft_itoa(int nbr)
{
	char *str;

	if ((str = (char *)malloc(size(nbr))) == NULL)
		return (NULL);
	if (nbr == -2147483648)
		str = ft_strdup("-2147483648");
	else
		get_string(str, nbr);
	return (str);
}
