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
	if (*inpu)
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
