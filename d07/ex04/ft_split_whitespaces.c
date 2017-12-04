/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 12:18:25 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/12 16:41:50 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		word_count(char *str)
{
	int count;
	int i;
	int prev;

	i = 0;
	count = 0;
	prev = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == '\n' || str[i] == ' ' || str[i] == '\t') && prev == 1)
			prev = 0;
		if ((str[i] != '\n' && str[i] != ' ' && str[i] != '\t') && prev == 0)
		{
			prev = 1;
			count++;
		}
		i++;
	}
	return (count);
}

int		word_len(char *str, int i)
{
	int count;

	count = 0;
	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if ((res = (char**)malloc(word_count(str) + 1)) == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		while ((str[i] == '\n' || str[i] == ' ' || str[i] == '\t') && str[i])
			i++;
		if (str[i] != '\0')
		{
			k = 0;
			if ((res[j] = (char*)malloc(word_len(str, i) + 1)) == NULL)
				return (NULL);
			while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
				res[j][k++] = str[i++];
			res[j++][k] = '\0';
		}
	}
	res[j] = NULL;
	return (res);
}
