/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 14:44:45 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/26 16:44:13 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
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

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] < 33)
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res + (str[i] - '0')) * 10;
		i++;
	}
	return ((res / 10) * sign);
}

int		is_prime(int nb)
{
	int i;
	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (nb % i != 0)
		i++;
	if (i == nb)
		return (1);
	else
		return (0);
}

int add_prime_sum(int nb)
{
	int	i;
	int res;

	i = 2;
	res = 0;
	while (i <= nb)
	{
		if (is_prime(i) == 1)
			res += i;
		i++;
	}
	return (res);
}

int main(int ac, char **av)
{
	int nb;
	int res;
	
	res = 0;
	if (ac == 2)
	{
		nb = ft_atoi(av[1]);
		if (nb > 0)
		{
			res = add_prime_sum(nb);
		}
	}
	ft_putnbr(res);
	write (1, "\n", 1);
	return 0;
}
