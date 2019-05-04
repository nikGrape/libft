/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 17:23:37 by vinograd          #+#    #+#             */
/*   Updated: 2019/05/03 14:08:46 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <limits.h>

long long		ft_atoi(const char *s)
{
	int sign;
	long long res;
	int i;
//	long long min = -9223372036854775808;
//	long long max = 9223372036854775807;
	long long check;

	check = 0;
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
		if (check > LONG_MAX)
			return (-1);
		if (check < LONG_MIN)
			return (0);
		res = res * 10 + (s[i] - '0');
		check = check * 10 + (s[i] - '0');
		i++;
	}

	return (res * sign);
}

#include <stdlib.h>

int ft_atoi2(const char *s)
{
	return (atoi(s));
}

#include <stdio.h>
int main()
{
	printf("%ld\n", LONG_MAX);
	printf("%ld\n", LONG_MIN);
	char str[] = "-9223372036854775810";
	printf("arigin\t%d\n", ft_atoi2(str));
	printf("mine\t%lld\n", ft_atoi(str));

}


