/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 13:05:28 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/25 13:14:05 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int i;
	char *res;

	if ((res = malloc(sizeof(char) * (*src) + 1)) == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%s", ft_strdup(av[1]));
	}
	printf("%c", '\n');
	return 0;
}
