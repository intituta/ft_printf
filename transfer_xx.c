/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transfer_xx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:21:39 by kferterb          #+#    #+#             */
/*   Updated: 2021/11/03 14:17:29 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	transfer_xx(unsigned long long int xx, const char *format)
{
	if (xx >= 16)
	{
		transfer_xx(xx / 16, format);
		xx = xx % 16;
	}
	if (xx > 9 && xx < 16)
	{
		if (*format == 'X')
		{
			xx = (xx % 16) + 55;
			write(1, &xx, 1);
		}
		else
		{
			xx = (xx % 16) + 87;
			write(1, &xx, 1);
		}
	}
	else
	{
		xx = xx + '0';
		write(1, &xx, 1);
	}
	g_count++;
}
