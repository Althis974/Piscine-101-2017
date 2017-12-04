/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 12:48:42 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/25 12:58:45 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	alpha_mirror(char *str)
{
	int i;
	char c;
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			c = str[i] - 65;
			str[i] = 90 - c;
		}
		if (str[i] >= 97 && str[i] <= 122)
		{
			c = str[i] - 97;
			str[i] = 122 - c;
		}
		ft_putchar(str[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		alpha_mirror(av[1]);
	}
	ft_putchar('\n');
	return 0;
}
