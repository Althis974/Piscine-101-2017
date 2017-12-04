/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 11:58:13 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/07 15:11:55 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_prime(int nb)
{
	int i;

	i = 1;
	if (nb < 2)
	{
		return (0);
	}
	if (nb == 2 || nb == 3)
	{
		return (1);
	}
	while (i <= nb / 2)
	{
		i++;
		if (nb % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int		z;

	z = 0;
	while (z != 1)
	{
		z = is_prime(nb);
		nb++;
	}
	return (nb - 1);
}
