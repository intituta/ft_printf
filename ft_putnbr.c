/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:22:11 by kferterb          #+#    #+#             */
/*   Updated: 2021/11/03 13:07:11 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long long di)
{	
	if (di == -2147483648)
	{
		write(1, "-2", 2);
		g_count = g_count + 2;
		ft_putnbr(147483648);
	}
	else if (di < 0)
	{
		write(1, "-", 1);
		g_count++;
		ft_putnbr(-di);
	}
	else
	{
		if (di > 9)
			ft_putnbr(di / 10);
		di = (di % 10) + '0';
		write(1, &di, 1);
		g_count++;
	}
}
