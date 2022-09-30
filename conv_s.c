/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:16:44 by kferterb          #+#    #+#             */
/*   Updated: 2021/11/03 13:35:18 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_s(va_list ap)
{
	char	*str;
	int		len;

	len = 0;
	str = va_arg(ap, char *);
	if (!str)
		str = "(null)";
	while (str[len])
		len++;
	write(1, str, len);
	g_count = g_count + len;
}
