/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 17:45:42 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/24 15:14:45 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

char	*ft_bad_name(char *str)
{
	ft_putstr(str);
	ft_putstr(": No such file or directory\n");
	return (NULL);
}

char	*ft_is_dir(char *str)
{
	ft_putstr(str);
	ft_putstr(": Is a directory\n");
	return (NULL);
}

int		ft_map_error(char *s1, char *s2)
{
	int i;

	i = 4;
	if ((s1[0] == '\0') && (s1[1] == '\0') && (s1[2] == '\0'))
	{
		write (2, "map error\n",9); 
		return (1);
	}
	ft_putchar(s1[0]);
	ft_putchar(s1[1]);
	ft_putchar(s1[2]);
	ft_putchar('\n');
	ft_putstr(s2);
	ft_putchar('\n');
	while (s2[i] != '\0')
	{
		//if ((s2[i] != s1[0]) && (s2[i] != s1[1]) && (s2[i] != s1[2]))
		//if (s2[i] != '.' && s2[i] != 'x' && s2[i] != 'o' && s2[i] != '\n' && s2[i] < 7)
		if (s2[i] == 5)
		{
			ft_putnbr(i);
			ft_putstr("\nla : ");
			ft_putchar(s2[i]);
			ft_putchar('\n');
		}
/*		//if (s2[i] == 'P')
		{
			write (2, "map error\n",9);
			return (1);
		}*/
		i++;
	}
	return (0);
}
