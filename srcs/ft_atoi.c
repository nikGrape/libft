/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 17:23:37 by vinograd          #+#    #+#             */
/*   Updated: 2019/05/02 01:05:24 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *s)
{
	int i;
	int sign;
	int res;

	res = 0;
	sign = 1;
	i = 0;
	while (s[i] >= 0 && s[i] <= 32 && s[i] != '\0')
		i++;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return (res * sign);
}
#include <stdio.h>
int main()
{
	printf("%d\n", ft_atoi("-2147483648"));
}
