/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 01:07:03 by vinograd          #+#    #+#             */
/*   Updated: 2019/05/02 02:05:28 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

 void	*memset(void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		b[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
