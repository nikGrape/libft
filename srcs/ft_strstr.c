/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 14:25:48 by vinograd          #+#    #+#             */
/*   Updated: 2019/04/30 15:34:39 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *haystach, char *needle)
{
	int i;
	int j;
	int n;

	i = 0;
	while (haystach[i])
	{
		j = 0;
		n = i;
		while (haystach[n] == needle[j])
		{	
			if (needle[j + 1] == '\0')
				return (&haystach[i]);
			j++;
			n++;
		}
		i++;
	}
	return (0);
}
