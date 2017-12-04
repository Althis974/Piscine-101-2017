/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 09:23:37 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/08 13:34:01 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int x, char a, char b, char c)
{
	int i;

	i = 0;
	if (x == 1)
	{
		ft_putchar(a);
	}
	if (x > 1)
	{
		ft_putchar(a);
		while (i < x - 2)
		{
			ft_putchar(b);
			i++;
		}
		ft_putchar(c);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		x = 0;
		y = 0;
	}
	if (y == 1)
	{
		print(x, '/', '*', '\\');
	}
	if (y > 1)
	{
		print(x, '/', '*', '\\');
		while (i < y - 2)
		{
			print(x, '*', ' ', '*');
			i++;
		}
		print(x, '\\', '*', '/');
	}
}
