/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_main.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/15 08:41:51 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/15 18:10:51 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_case
{
	int value;
	int is_fixed;
}				t_case;

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_print_grid(t_case grid[9][9]);
int		ft_mapping_grid(char **argvi, t_case (*grid)[9][9]);
#endif
