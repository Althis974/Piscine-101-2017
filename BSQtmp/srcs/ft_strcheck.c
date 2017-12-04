/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcheck.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 11:34:34 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/24 12:07:06 by tle-coza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

char	*ft_strcheck(char *map)
{
	int i;
	int j;
	char *str_check;

	i = 0;
	j = 0;
	if ((str_check = (char*)malloc(sizeof(char) * 10)) == NULL)
		return (NULL);
	while (map[i] >= '0' && map[i] <= '9')
		i++;
	while (j < 3)
	{
		str_check[j] = map[i];
		i++;
		j++;
	}
	str_check[i] = '\0';
	ft_strrev(str_check);
	return (str_check);
}
