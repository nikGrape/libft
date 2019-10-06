/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_del.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 15:38:32 by Nik               #+#    #+#             */
/*   Updated: 2019/10/05 16:58:21 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array_int.h"

void	arr_del(int *arr, int index)
{
	if (index < ARR_LEN && index >= 0)
	{
		index++;
		while (index < ARR_LEN)
		{
			arr[index] = arr[index + 1];
			index++;
		}
		ARR_LEN--;
	}
}
