/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 13:45:41 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/19 15:08:55 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_atoi(char *str)
{
	int		sign;
	int		i;
	long	res;

	sign = 1;
	i = 0;
	res = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = ((res + (str[i] - '0')) * 10);
		i++;
	}
	return (res / 10 * sign);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else
	{
		if (nb < 0)
			if (nb != -2147483648)
			{
				ft_putchar('-');
				nb *= -1;
			}
		if (nb < 10)
			ft_putchar(nb + '0');
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putchar(nb % 10 + '0');
		}
	}
}
