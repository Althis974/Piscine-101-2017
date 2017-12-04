/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 15:16:16 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/07 16:54:01 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		update(int nb)
{
	while (nb != 92)
	{
		nb *= 2;
		return (update(nb));
	}
	return (nb);
}

int		ft_eight_queens_puzzle(void)
{
	return (update(23));
}
