/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_xx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:19:16 by kferterb          #+#    #+#             */
/*   Updated: 2021/11/03 13:07:30 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_xx(va_list ap, const char *format)
{
	unsigned int	xx;

	xx = va_arg(ap, unsigned int);
	transfer_xx(xx, format);
}
