/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redrouic <redrouic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:16:49 by redrouic          #+#    #+#             */
/*   Updated: 2023/12/05 20:25:46 by redrouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H

# define PRINTF_H

#include <stddef.h>

int	ft_putchar(char c);

int	ft_putstr(const char *str);

int	ft_putnbr(int n);

size_t	ft_uputnbr(unsigned int n);

int	ft_printf(const char *str, ...);

#endif
