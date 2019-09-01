/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 15:24:50 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/14 11:11:33 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char *c1, char *c2)
{
	char ch;

	ch = *c1;
	*c1 = *c2;
	*c2 = ch;
}
