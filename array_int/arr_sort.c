/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 16:36:38 by Nik               #+#    #+#             */
/*   Updated: 2019/10/05 16:50:08 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array_int.h"

void	arr_sort(int *arr)
{
	int i;
	int j;

	i = 1;
	while (i <= ARR_LEN)
	{
		j = i;
		while (j <= ARR_LEN)
		{
			if (arr[i] < arr[j])
				ft_swapi(&arr[i], &arr[j]);
			j++;
		}
		i++;
	}
}

void	arr_rsort(int *arr)
{
	int i;
	int j;

	i = 1;
	while (i <= ARR_LEN)
	{
		j = i;
		while (j <= ARR_LEN)
		{
			if (arr[i] > arr[j])
				ft_swapi(&arr[i], &arr[j]);
			j++;
		}
		i++;
	}
}
