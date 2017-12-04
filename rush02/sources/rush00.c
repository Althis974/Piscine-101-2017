/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulhand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 10:23:42 by mkulhand          #+#    #+#             */
/*   Updated: 2017/10/22 14:44:04 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

char	display00(int col, int row, int x, int y)
{
	char tmpy;
	char tmpx;

	tmpy = ' ';
	if (row == 1)
	{
		tmpx = (col == x) ? 'o' : '-';
		tmpy = (col == 1) ? 'o' : tmpx;
	}
	else if (row == y)
	{
		tmpx = (col == x) ? 'o' : '-';
		tmpy = (col == 1) ? 'o' : tmpx;
	}
	else if (col == 1 || col == x)
		tmpy = '|';
	return (tmpy);
}

char	*rush00(int x, int y)
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
			str[i++] = display00(col, row, x, y);
			col++;
		}
		str[i] = '\n';
		i++;
		row++;
	}
	str[i] = '\0';
	return (str);
}
