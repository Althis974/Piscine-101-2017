/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_rush01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweiler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 15:58:57 by aweiler           #+#    #+#             */
/*   Updated: 2017/10/22 13:58:11 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

char	display04(int col, int row, int x, int y)
{
	char tmpy;
	char tmpx;

	tmpy = ' ';
	if (row == 1)
	{
		tmpx = (col == x) ? 'C' : 'B';
		tmpy = (col == 1) ? 'A' : tmpx;
	}
	else if (row == y)
	{
		tmpx = (col == x) ? 'A' : 'B';
		tmpy = (col == 1) ? 'C' : tmpx;
	}
	else if (col == 1 || col == x)
		tmpy = 'B';
	return (tmpy);
}

char	*rush04(int x, int y)
{
	int		row;
	int		col;
	int		i;
	char	*str;

	if (!(str = malloc((x * y) + 1)))
		return (NULL);
	row = 1;
	i = 0;
	if (x < 0 || y < 0)
		return (NULL);
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			str[i++] = display04(col, row, x, y);
			col++;
		}
		str[i] = '\n';
		i++;
		row++;
	}
	str[i] = '\0';
	return (str);
}
