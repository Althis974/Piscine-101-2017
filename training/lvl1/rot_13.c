/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 08:46:49 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/13 09:14:40 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char rotate_max(char c)
{
	c = c - 65;
	c = ((c + 13) % 26);
	c = c + 65;
	return (c);
}

char rotate_min(char c)
{
	c = c - 97;
	c = ((c + 13) % 26);
	c = c + 97;
	return (c);
}

char rotate(char c)
{
	if (c >= 65 && c <= 90)
		return(rotate_max(c));
	if (c >= 97 && c <= 122)
		return(rotate_min(c));
	else
		return(c);
}

char *ft_rot_13(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = rotate(str[i]);
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr(ft_rot_13(argv[1]));
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
