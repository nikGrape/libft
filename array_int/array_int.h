/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_int.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 14:53:12 by Nik               #+#    #+#             */
/*   Updated: 2019/10/05 16:57:24 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_LIST_H
# define ARRAY_LIST_H
# define ARR_LEN arr[0]

#include "../libft.h"

int		*arr_new(char *arr);
int		arr_len(int *arr);
int		arr_get(int *arr, int index);
void	arr_set(int *arr, int index, int nbr);
void	arr_del(int *arr, int index);
void	arr_print(int *arr);
void	arr_add(int **arr, int index, int nbr);
void	arr_cat(int **arr, char *addon);
void	arr_sort(int *arr);
void	arr_rsort(int *arr);

int		check_arr_input(char *nbr);
void	arr_copy(int *new, int *arr);

#endif