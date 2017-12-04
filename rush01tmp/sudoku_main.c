/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/15 17:33:23 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/15 18:10:47 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SUDOKU_H"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_mapping_grid(char **argv, t_case (*grid)[9][9])
{

}

int main(int argc, char **argv)
{
	t_case	grid[9][9];
	int error;

	if (argc == 10)
	{
		ft_mapping_grid(argv, &grid);
	}
	else
		error = 1;
	return (0);
}
