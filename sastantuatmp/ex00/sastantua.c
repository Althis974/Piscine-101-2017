/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 14:34:57 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/08 16:28:04 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_floor(int x, char a, char b, char c)
{
	int	i;
	int j;
	int space;
	int line;

	i = 0;
	j = 4;
	k = 1;
	line = 3;
	if (x =< 0)
		line = 0;
	while (x > 0)
	{
		while (i != x)
		{
			line += j;
			j++;
			i++;
		}
	}
}
