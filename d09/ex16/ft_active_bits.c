/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 09:50:07 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/13 09:51:47 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_active_bits(int value)
{
	unsigned int	bits;
	int				i;
	int				length;

	i = 0;
	bits = 0;
	length = sizeof(int) * 8;
	while (i < length)
	{
		bits += (value & 1) == 1;
		value = value >> 1;
		i++;
	}
	return (bits);
}
