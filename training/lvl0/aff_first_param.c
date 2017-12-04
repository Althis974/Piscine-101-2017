/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 07:53:58 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/20 09:52:00 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1 );
}

char	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;	
	}
	ft_putchar('\n');
	return (*str);
}

int		main (int argc, char **argv)
{
	if (argc >= 2)
		ft_putstr(argv[1]);
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
