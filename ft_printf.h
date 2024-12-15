/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudelory <sudelory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:08:03 by sudelory          #+#    #+#             */
/*   Updated: 2024/12/15 03:05:11 by sudelory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_putnbr(int nb);
int		ft_putunsigned_nbr(unsigned int nb);
int		ft_puthex(unsigned long nb, int base);
int		ft_putptr(void *ptr);
int		ft_putchar(char c);
int		ft_putstr(char *str);
char	*ft_strchr(const char *s, int c);
#endif
