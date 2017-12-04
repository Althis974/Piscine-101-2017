/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulhand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 10:19:39 by mkulhand          #+#    #+#             */
/*   Updated: 2017/10/22 14:42:09 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

int		main(int ac, char **av)
{
	int row;
	int col;

	row = 0;
	col = 0;
	if (ac == 3)
	{
		if (ft_atoi(av[1]) != 0 || ft_atoi(av[2]) != 1)
		{
			row = ft_atoi(av[1]);
			col = ft_atoi(av[2]);
			ft_putstr(rush04(ft_atoi(av[1]), ft_atoi(av[2])));
		}
	}
	return (0);
}
