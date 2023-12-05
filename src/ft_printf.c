/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redrouic <redrouic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:20:57 by redrouic          #+#    #+#             */
/*   Updated: 2023/12/05 21:52:31 by redrouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../icl/ft_printf.h"
#include <stdarg.h>
#include <stddef.h>

static int	is_charset(char c)
{
	char		*s;
	size_t		i;

	s = NULL;
	s = "cspdiuxX%";
	i = 0;
	while (s[i])
	{
		if (s[i++] == c)
			return (1);
	}
	return (0);
}

static int	gest_flags(va_list args, char c)
{
	if (c == 'c')
		return (ft_putchar((char)va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr((char *)va_arg(args, char *)));
	else if (c == 'p')
		return (0);
	else if (c == 'd' || c == 'i')
		return (ft_putnbr((long long int)va_arg(args, int)));
	else if (c == 'u')
		return (ft_uputnbr((unsigned long long)va_arg(args, unsigned int)));
	else if (c == 'x')
		return (0);
	else if (c == 'X')
		return (0);
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	size_t	i;
	size_t	c;

	if (s == NULL)
		return (-1);
	i = 0;
	c = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%' && is_charset(s[i + 1]))
		{
			c += gest_flags(args, s[i + 1]);
			i += 2;
		}
		else if (s[i])
			c += ft_putchar(s[i++]);
	}
	va_end(args);
	return (c);
}
