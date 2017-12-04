/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 12:28:34 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/20 13:02:34 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	low(char let)
{
	char a;

	a = let - 32;
	return (a);
}

char 	upp(char let)
{
	char A;

	A = let + 32;
	return (A);
}

char 	*rot(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = upp(str[i]);
		else if (str[i] >= 97 && str[i] <= 122)
			str[i] = low(str[i]);
		i++;
	}
	return (str);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putstr(rot(av[1]));
	}
	ft_putchar('\n');
	return 0;
}
