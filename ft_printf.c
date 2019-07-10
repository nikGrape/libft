/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 11:15:24 by vinograd          #+#    #+#             */
/*   Updated: 2019/07/09 18:47:02 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_printf(const char *format, ...)
{
	va_list	ap;
	t_flag	flags;
	char	*s;
	int		total;

	total = 0;
	va_start(ap, format);
	while (*format)
	{
		format += (*format == '{') ? color_redactor(format) : 0;
		if (*format != '%' && *format)
		{
			ft_putchar(*format++);
			total++;
			continue ;
		}
		flags = (*format) ? flag_analazer(++format) : flag_analazer(format);
		if (!(s = specifier(&flags, &ap)))
			continue ;
		format += flags.steps;
		total += (flags.spcf != 'N') ? ft_putstr(s) : putstr_for_null_char(s);
		ft_strdel(&s);
	}
	va_end(ap);
	return (total);
}
