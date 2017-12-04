/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inspector.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:55:22 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/23 10:56:26 by tle-coza         ###   ########.fr       */
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

}

int		main(void)
{
	char	*ret;
	int		row;
	int		col;

	row = 0;
	col = 0;
	ret = ft_size(&col, &row);
	ft_putchar('\n');
	return (0);
}
