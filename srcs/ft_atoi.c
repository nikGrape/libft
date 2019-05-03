/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 17:23:37 by vinograd          #+#    #+#             */
/*   Updated: 2019/05/02 21:28:34 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *s)
{
	int sign;
	int res;
	int i;
	char min[] = "−9223372036854775808";
	char max[] = "9223372036854775807";
	
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
	return ((int)res * sign);
}

#include <stdlib.h>

int ft_atoi2(const char *s)
{
	return (atoi(s));
}

#include <stdio.h>
int main()
{
	char str[] = "-42949672957777888787"; 
	printf("arigin\t%d\n", ft_atoi2(str));
	printf("mine\t%d\n", ft_atoi(str));

}


