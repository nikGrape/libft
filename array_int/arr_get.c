/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 15:33:05 by Nik               #+#    #+#             */
/*   Updated: 2019/08/31 16:45:00 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array_int.h"

int		arr_get(int *arr, int index)
{
	if (index < ARR_LEN && index >= 0)
		return (arr[index + 1]);
	else
		return (0);
}
