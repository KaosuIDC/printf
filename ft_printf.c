/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudelory <sudelory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 19:50:51 by sudelory          #+#    #+#             */
/*   Updated: 2024/12/05 16:21:50 by sudelory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	int	i;

	i = 0;
	while (format[i])
	{
		if (format[i] == "%")
		{
			i++;
			if (format[i] == "c")
				return (ft_putchar(va_arg(format, int)));
			else if (format[i] == 's')
				return (ft_putstr(va_arg(format, char *)));
			else if (format[i] == 'p')
				return (ft_putstr(va_arg(format, void *)));
			else if (format[i] == 'd' || 'i')
				return (ft_putnbr(va_arg(format, int)));
			else if (format[i] == 'u')
				return (ft_putunsigned_nbr(va_arg(format, unsigned int)));
			else if (format[i] == 'x' || 'X')
				return (ft_puthex(va_arg(format, int)));
			else if (format[i] == '%')
				return (ft_putchar("%"));
		}
	}
	return (0);
}
