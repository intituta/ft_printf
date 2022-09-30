/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:07:02 by kferterb          #+#    #+#             */
/*   Updated: 2021/11/03 14:51:13 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{	
	va_list	ap;

	va_start(ap, format);
	g_count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			conv(ap, ++format);
			format++;
		}
		else
		{
			write(1, format++, 1);
			g_count++;
		}
	}
	va_end(ap);
	return (g_count);
}
