/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strindex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 11:50:51 by vinograd          #+#    #+#             */
/*   Updated: 2019/05/13 11:50:57 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strindex(char *highstack, char *needle)
{
	int i;
	int j;

	i = 0;
	while (highstack[i++])
	{
		j = 0;
		while (needle[j] == highstack[i] && highstack[i])
		{
			i++;
			if (needle[++j] == '\0')
				return (i - j);
		}
	}
	return (-1);
}
