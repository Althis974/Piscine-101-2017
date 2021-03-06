/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 15:43:38 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/06 16:04:06 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int n;

	n = nb;
	if (power < 0)
	{
		return (0);
	}
	while (power > 1)
	{
		power--;
		nb *= n;
	}
	return (nb);
}
