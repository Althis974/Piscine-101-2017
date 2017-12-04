/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 11:19:19 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/22 14:01:37 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/uio.h>
# include <fcntl.h>
# define SIZE 100000000

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);

char	display00(int col, int row, int x, int y);
char	*rush00(int x, int y);

char	display01(int col, int row, int x, int y);
char	*rush01(int x, int y);

char	display02(int col, int row, int x, int y);
char	*rush02(int x, int y);

char	display03(int col, int row, int x, int y);
char	*rush03(int x, int y);

char	display04(int col, int row, int x, int y);
char	*rush04(int x, int y);

#endif
