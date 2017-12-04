/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoyne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 12:27:18 by hmoyne            #+#    #+#             */
/*   Updated: 2017/10/08 13:36:29 by rlossy           ###   ########.fr       */
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
		print(x, 'A', 'B', 'C');
	}
	if (y > 1)
	{
		print(x, 'A', 'B', 'C');
		while (i < y - 2)
		{
			print(x, 'B', ' ', 'B');
			i++;
		}
		print(x, 'C', 'B', 'A');
	}
}
