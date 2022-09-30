/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:22:54 by kferterb          #+#    #+#             */
/*   Updated: 2021/11/03 13:06:44 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		g_count;

int		ft_printf(const char *format, ...);

void	conv(va_list ap, const char *format);
void	conv_c(va_list ap);
void	conv_s(va_list ap);
void	conv_p(va_list ap, const char *format);
void	conv_di(va_list ap);
void	conv_u(va_list ap);
void	conv_xx(va_list ap, const char *format);

void	ft_putnbr(long long di);
void	transfer_xx(unsigned long long int xx, const char *format);

#endif