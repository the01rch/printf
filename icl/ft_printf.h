/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redrouic <redrouic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:16:49 by redrouic          #+#    #+#             */
/*   Updated: 2023/12/06 16:03:54 by redrouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stddef.h>
# include <stdarg.h>

int		ft_putchar(char c);

int		ft_putstr(const char *str);

int		ft_putnbr(int n);

size_t	ft_uputnbr(unsigned int n);

size_t	ft_putnbrb(unsigned long long int nb, const char *base);

int		ft_printf(const char *str, ...);

#endif
