/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:20:31 by kferterb          #+#    #+#             */
/*   Updated: 2021/11/03 13:10:54 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv(va_list ap, const char *format)
{
	if (*format == 'c')
		conv_c(ap);
	else if (*format == 's')
		conv_s(ap);
	else if (*format == 'u')
		conv_u(ap);
	else if (*format == 'p')
		conv_p(ap, format);
	else if (*format == 'd' || *format == 'i')
		conv_di(ap);
	else if (*format == 'x' || *format == 'X')
		conv_xx(ap, format);
	else if (*format == '%')
	{
		write(1, "%", 1);
		g_count++;
	}
	else
	{
		write(1, format, 1);
		g_count++;
	}
}
