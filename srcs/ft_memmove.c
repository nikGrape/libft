/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 17:11:09 by vinograd          #+#    #+#             */
/*   Updated: 2019/05/02 18:55:40 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
		while (len--)
			((unsigned char*)dst)[len] = ((unsigned char*)src)[len];
	return (dst);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "Hello";
	char dst[] = "wwwwwww";
	printf("%s\n", ft_memmove(dst, str, 3));
}
*/
