/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redrouic <redrouic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:29:07 by redrouic          #+#    #+#             */
/*   Updated: 2023/12/05 20:11:19 by redrouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "icl/ft_printf.h"
#include <stdio.h>

int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	int a;
	int b;
	a = ft_printf("jeje %c le best %s", 'c', "au football");
	b = printf("jeje %c le best %s", 'c', "au football");
	printf("ft size : %d\nst size : %d\n", a, b);
	return (0);
}
