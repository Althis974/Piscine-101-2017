/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inspector.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:55:22 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/25 16:54:35 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

char	*ft_size(int *x, int *y)
{
	char	*str;
	char	buf;
	int		tmp;
	int		i;

	i = 0;
	tmp = 0;
	str = (char*)malloc(sizeof(char) * SIZE + 1);
	while ((read(0, &buf, 1)))
	{
		*x = tmp;
		if (buf == '\n')
		{
			tmp = 0;
			(*y)++;
		}
		else
			tmp++;
		str[i] = buf;
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	ft_display(int i, int count, int x, int y)
{
	if (count >= 1)
		ft_putstr(" || ");
	ft_putstr("[colle-0");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

void	ft_compare(char *str, int x, int y)
{
	int count;

	count = 0;
	if (ft_strcmp(str, rush00(x, y)) == 0)
		ft_display(0, count++, x, y);
	if (ft_strcmp(str, rush01(x, y)) == 0)
		ft_display(1, count++, x, y);
	if (ft_strcmp(str, rush02(x, y)) == 0)
		ft_display(2, count++, x, y);
	if (ft_strcmp(str, rush03(x, y)) == 0)
		ft_display(3, count++, x, y);
	if (ft_strcmp(str, rush04(x, y)) == 0)
		ft_display(4, count++, x, y);
	if (count == 0)
		ft_putstr("aucune");
	free(str);
}

int		main(void)
{
	char	*ret;
	int		row;
	int		col;

	row = 0;
	col = 0;
	ret = ft_size(&col, &row);
	if ((col * row) >= 3940225)
	{
		ft_putstr("Durant un moment il ne se produisit rien.\n");
		ft_putstr("Puis, au bout d'une seconde a peu pres, ");
		ft_putstr("il continua de ne rien se produire.\n");
		return (1);
	}
	ft_compare(ret, col, row);
	ft_putchar('\n');
	return (0);
}
