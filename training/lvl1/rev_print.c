/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 13:03:38 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/20 13:12:40 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_rev(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	i -= 1;
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_rev(av[1]);
	}
	ft_putchar('\n');
	return 0;
}
