/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:17:17 by kferterb          #+#    #+#             */
/*   Updated: 2021/11/03 13:07:39 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_p(va_list ap, const char *format)
{
	unsigned long long int	p;

	p = va_arg(ap, unsigned long long int);
	write(1, "0x", 2);
	g_count = g_count + 2;
	transfer_xx(p, format);
}
