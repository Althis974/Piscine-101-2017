/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 13:16:57 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/04 17:39:30 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char	tab[3];

	tab[0] = '0';
	while (tab[0] <= '7')
	{
		tab[1] = tab[0] + 1;
		while (tab[1] <= '8')
		{
			tab[2] = tab[1] + 1;
			while (tab[2] <= '9')
			{
				ft_putchar(tab[0]);
				ft_putchar(tab[1]);
				ft_putchar(tab[2]++);
				if (tab[0] != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			tab[1]++;
		}
		tab[0]++;
	}
}
