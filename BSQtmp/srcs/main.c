/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-coza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 10:56:38 by tle-coza          #+#    #+#             */
/*   Updated: 2017/10/24 15:28:09 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		main(int argc, char **argv)
{
	char	*map;
	char	**sqmap;
	int		x;
	int		y;
	int		i;

	x = 0;
	y = 0;
	i = 0;
	if (argc == 1)
	{
		map = (ft_read_stdin(&x, &y));
		sqmap = build(map, ft_strcheck(map), y);
		if ((ft_map_error(ft_strcheck(map),map)) == 1)
			return (1);
		while (i < y)
		{
			ft_putstr(sqmap[i]);
			ft_putchar('\n');
			i++;
		}
		ft_putchar('\n');
		ft_putnbr(x);
		ft_putchar('\n');
		ft_putnbr(y);

	}
	if (argv[1])
	{
		if ((map = ft_read_argv(argv[1], &x, &y)) == NULL)
			return (1);
		sqmap = build(map, ft_strcheck(map), y);
		if ((ft_map_error(ft_strcheck(map),map)) == 1)
			return (1);
		while (i < y)
		{
			ft_putstr(sqmap[i]);
			i++;
		}
		ft_putchar('\n');
		ft_putnbr(x);
		ft_putchar('\n');
		ft_putnbr(y);
	}
	return (0);
}
