/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 01:15:13 by vinograd          #+#    #+#             */
/*   Updated: 2019/05/02 01:23:15 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;
	void *restrict temp_dst;

	temp_dst = dst;
	i = 0;
	while (i < n)
	{
		*temp_dst = *stc;
		temp_dst++;
		stc++;
		i++;
	}
	return (dst);
}
