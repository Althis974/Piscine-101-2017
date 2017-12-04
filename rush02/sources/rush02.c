/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppichier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 18:28:38 by ppichier          #+#    #+#             */
/*   Updated: 2017/10/22 13:57:31 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

char	display02(int col, int row, int x, int y)
{
	char tmpy;
	char tmpx;

	tmpy = ' ';
	if (row == 1)
	{
		tmpx = (col == x) ? 'A' : 'B';
		tmpy = (col == 1) ? 'A' : tmpx;
	}
	else if (row == y)
	{
		tmpx = (col == x) ? 'C' : 'B';
		tmpy = (col == 1) ? 'C' : tmpx;
	}
	else if (col == 1 || col == x)
		tmpy = 'B';
	return (tmpy);
}

char	*rush02(int x, int y)
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
			str[i++] = display02(col, row, x, y);
			col++;
		}
		str[i] = '\n';
		i++;
		row++;
	}
	str[i] = '\0';
	return (str);
}
