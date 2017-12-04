/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 14:57:47 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/25 15:26:41 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		do_op(int nb1, char *str, int nb2)
{
	if ((str[1] != '\0') || (str[0] != '+' && str[0] != '-' && str[0] != '/' && str[0] != '*' && str[0] != '%'))
		return 1;
	if (str[0] == '+')
	{
		printf("%d",(nb1 + nb2));
		return 0;
	}
	if (str[0] == '-')
	{
		printf("%d",(nb1 - nb2));
		return 0;
	}
	if (str[0] == '*')
	{
		printf("%d",(nb1 * nb2));
		return 0;
	}
	if (str[0] == '/' && nb2 != 0)
	{
		printf("%d",(nb1 / nb2));
		return 0;
	}
	if (str[0] == '%' && nb2 != 0)
	{
		printf("%d",(nb1 % nb2));
		return 0;
	}
	return 1;
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		do_op(atoi(av[1]), av[2], atoi(av[3]));
	}
	printf("%c", '\n');
	return 0;
}
