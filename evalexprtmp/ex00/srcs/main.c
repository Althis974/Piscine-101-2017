/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 09:46:44 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/21 11:07:32 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
#include "../includes/ft2.h"
#include <stdio.h> 

void	ft_dispatch(t_op data, char *op)
{
	int		(*tab[5])(int, int);
	
	//printf("%s", "hello");
	tab[0] = &ft_add;
	tab[1] = &ft_sub;
	tab[2] = &ft_mod;
	tab[3] = &ft_div;
	tab[4] = &ft_mul;
	if (*op == '+')
		ft_putnbr((tab[0](data.nb1, data.nb2)));
	if (*op == '-')
		ft_putnbr((tab[1](data.nb1, data.nb2)));
	if (*op == '%')
		ft_putnbr((tab[2](data.nb1, data.nb2)));
	if (*op == '/')
		ft_putnbr((tab[3](data.nb1, data.nb2)));
	if (*op == '*')
		ft_putnbr((tab[4](data.nb1, data.nb2)));
	ft_putchar('\n');
}

void	ft_doop(char *v1, char *op, char *v2)
{
	t_op	data;

	data.nb1 = ft_atoi(v1);
	data.nb2 = ft_atoi(v2);
	if (op[1] != '\0' || (op[0] != '/' && op[0] != '%'
				&& op[0] != '+' && op[0] != '-' && op[0] != '*'))
	{
		write(1, "0\n", 2);
	}
	else if (op[0] == '/' && data.nb2 == 0)
	{
		write(1, "Stop : division by zero\n", 24);
	}
	else if (op[0] == '%' && data.nb2 == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
	}
	else
		ft_dispatch(data, op);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
		ft_doop(argv[1], argv[2], argv[3]);
	return (0);
}
