/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 09:34:49 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/08 13:29:14 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int x, char a, char b)
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
		ft_putchar(a);
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
		print(x, 'A', 'B');
	}
	if (y > 1)
	{
		print(x, 'A', 'B');
		while (i < y - 2)
		{
			print(x, 'B', ' ');
			i++;
		}
		print(x, 'C', 'B');
	}
}
