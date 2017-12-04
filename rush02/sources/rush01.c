/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_rush01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweiler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 15:58:57 by aweiler           #+#    #+#             */
/*   Updated: 2017/10/22 13:55:12 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

char	display01(int col, int row, int x, int y)
{
	char tmpy;
	char tmpx;

	tmpy = ' ';
	if (row == 1)
	{
		tmpx = (col == x) ? '\\' : '*';
		tmpy = (col == 1) ? '/' : tmpx;
	}
	else if (row == y)
	{
		tmpx = (col == x) ? '/' : '*';
		tmpy = (col == 1) ? '\\' : tmpx;
	}
	else if (col == 1 || col == x)
		tmpy = '*';
	return (tmpy);
}

char	*rush01(int x, int y)
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
			str[i++] = display01(col, row, x, y);
			col++;
		}
		str[i] = '\n';
		i++;
		row++;
	}
	str[i] = '\0';
	return (str);
}
