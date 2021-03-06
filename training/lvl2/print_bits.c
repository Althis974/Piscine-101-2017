/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 14:21:37 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/25 14:26:27 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    printbits(unsigned char octet)
{
	int i;

	i = 128;
	while (octet >= 0 && i)
	{
		if (octet / i == 1)
		{
			ft_putchar('1');
			octet -= i;
		}
		else
			ft_putchar('0');
		i /= 2;
	}
}
