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
#include <cstdarg>
#include <vadefs.h>

static int	check_input(const char *input, void *arg)
{
	int	i;

	i = 0;
	if (*input == 'c')
		i += ft_putchar((int)arg);
	else if (*input == 's')
		i += ft_putstr((char *)arg);
	else if (*input == 'd' || *input == 'i')
		i += ft_putnbr((int)arg);
	else if (*input == 'u')
		i += ft_putunsigned_nbr((unsigned int)arg);
	else if (*input == 'x')
		i += ft_puthex((unsigned int)arg, 87);
	else if (*input == 'X')
		i += ft_puthex((unsigned int)arg, 55);
}

int	ft_printf(const char *format, ...)
{
	va_list			args;
	unsigned int	i;

	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (ft_strchr("cspdiuxX", *format))
				i += check_input(format, va_arg(args, void *));
			else if (format[i] == '%')
				i += ft_putchar('%');
		}
		else
			i = i + ft_putchar('%');
		i++;
	}
	va_end(args);
	return (i);
}
