/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 00:55:21 by vinograd          #+#    #+#             */
/*   Updated: 2019/07/02 13:30:27 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*hendler_s_c(register char ch, t_flag flags, va_list *ap)
{
	char *s;

	s = NULL;
	if (ch == 's')
	{
		s = va_arg(*ap, char *);
		s = (s) ? str_redactor(ft_strdup(s), flags) :\
		str_redactor(ft_strdup("(null)"), flags);
	}
	else if (ch == 'c')
	{
		ch = (char)va_arg(*ap, int);
		s = str_redactor(ft_stradd(NULL, ch), flags);
	}
	return (s);
}

static char	*hendler_f_x(register char ch, t_flag flags, va_list *ap)
{
	char *s;

	s = NULL;
	if (ch == 'f')
	{
		flags.width = (flags.width == -1) ? 6 : flags.width;
		if (flags.l_flag)
			s = redactor(ft_ftoa_long(va_arg(*ap, long double),\
			flags.width), flags, 'f');
		else
			s = redactor(ft_ftoa(va_arg(*ap, double), flags.width), flags, 'f');
	}
	else if (ch == 'X' || ch == 'x')
	{
		s = (flags.j_flag || flags.l_flag) ?\
		redactor(ft_itoa_base_unsigned(va_arg(*ap, size_t), 16), flags, 'x')\
		: redactor(ft_itoa_base(va_arg(*ap, int), 16), flags, 'x');
		if (ch == 'X')
			ft_strupper(s);
	}
	return (s);
}

static char	*hendler_d_i_u(register char ch, register t_flag flags, va_list *ap)
{
	char *s;

	s = NULL;
	if (ch == 'd' || ch == 'i')
	{
		if (flags.h_flag == 1)
			s = ft_itoa((short)va_arg(*ap, int));
		else if (flags.h_flag == 2)
			s = ft_itoa((signed char)va_arg(*ap, int));
		else if (flags.l_flag || flags.j_flag || flags.z_flag)
			s = ft_itoa_long(va_arg(*ap, long));
		else
			s = ft_itoa(va_arg(*ap, int));
		s = redactor(s, flags, 'd');
	}
	else if (ch == 'u' || ch == 'U')
	{
		if (ch == 'U' || flags.l_flag || flags.j_flag || flags.z_flag)
			s = ft_itoa_unsigned(va_arg(*ap, unsigned long));
		else
			s = ft_itoa_unsigned(va_arg(*ap, unsigned int));
		s = redactor(s, flags, 'u');
	}
	return (s);
}

char		*specifier(register char ch, t_flag flags, va_list *ap)
{
	char *s;

	s = NULL;
	if (ch == 's' || ch == 'c')
		s = hendler_s_c(ch, flags, ap);
	else if (ch == 'd' || ch == 'i' || ch == 'u' || ch == 'U')
		s = hendler_d_i_u(ch, flags, ap);
	else if (ch == 'X' || ch == 'x' || ch == 'f')
		s = hendler_f_x(ch, flags, ap);
	else if (ch == 'b')
		s = redactor(ft_itoa_base(va_arg(*ap, int), 2), flags, 'o');
	else if (ch == 'o')
		s = redactor(ft_itoa_base(va_arg(*ap, int), 8), flags, 'o');
	else if (ch == 'p')
		s = redactor(ft_itoa_base_unsigned(va_arg(*ap, size_t), 16),\
		flags, 'p');
	else if (ch == '%')
		s = redactor(ft_strdup("%"), flags, 1);
	else
		s = redactor(ft_strdup(""), flags, 's');
	return (s);
}
