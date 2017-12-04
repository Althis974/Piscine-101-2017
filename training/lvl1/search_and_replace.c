/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 11:57:37 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/20 12:25:03 by rlossy           ###   ########.fr       */
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

char	*ft_sar(char *str, char seek, char rep)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] - seek) == 0)
		{
			str[i] = rep;
		}
		i++;
	}
	return (str);
}

int 	main(int ac, char **av)
{
	if (ac == 4)
	{
		if ((av[2][1] == '\0') && (av[3][1] == '\0'))
			ft_putstr(ft_sar(av[1], av[2][0], av[3][0]));
	}
	write (1, "\n", 1);
	return 0;
}
