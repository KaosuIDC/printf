/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudelory <sudelory@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:08:03 by sudelory          #+#    #+#             */
/*   Updated: 2024/12/05 19:15:42 by sudelory         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

int		ft_printf(const char *format, ...);
void	ft_putnbr(int n);
void	ft_putunsigned_nbr(unsigned int n);
void	ft_puthex(int n);
#endif
