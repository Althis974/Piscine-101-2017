/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 13:16:57 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/04 18:25:12 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	putnbr(int nb)
{
	printf("%d", nb);
	return (0);
}

int     ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	min(int nbr1, int nbr2)
{
	return (nbr1 - nbr2);
}

int     ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	int i;
	int length;
	//int	(*f)(char*);
	int (*f)(int, int);
	//int j;
	//int min;
	//int max;

	i = 0;
	//char *res[5] = {"jo","is","too","nice", 0};
	//char *tab[6] = {"tib", "is", "the", "?", "!", 0};
	int	tab[9] = {1,2,3,4,5,6,7,8,9};
	int	tab2[9] = {9,8,7,6,5,4,3,2,1};
	length = 9;
	f = &min;
	putnbr(ft_is_sort(tab, 9, f));
	putnbr(ft_is_sort(tab2, 9, f));
	/*f = &ft_strlen;
	//putnbr(ft_count_if(res, f));
	//putnbr(ft_count_if(tab, f));*/
	/*res = ft_map(tab, length, (*ft_putnbr));
	  while (i < length)
	  {
	  ft_putnbr(res[i]);
	  i++;
	  }*/
	//ft_foreach(tab, length, (*ft_putnbr));
	return (0);
}
