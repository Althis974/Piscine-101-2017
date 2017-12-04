/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 01:31:02 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/21 15:16:43 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define WHITESPACE(x) x == '\t' || x == '\n' || x == ' '

#include <stdlib.h>

int		word_count(char *str)
{
	int count;
	int i;
	int j;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (WHITESPACE(str[i]) && str[i] != '\0')
			i++;
		while (!(WHITESPACE(str[i])) && str[i] != '\0')
		{
			j = 1;
			i++;
		}
		while (WHITESPACE(str[i]) && str[i] != '\0')
			i++;
		if (j == 1)
			count++;
	}
	return (count);
}

int		word_size(char *str)
{
	int i;

	i = 0;
	while (WHITESPACE(str[i]) && str[i] != '\0')
		str++;
	while (!(WHITESPACE(str[i])) && str[i] != '\0')
		i++;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	int		count;
	int		j;
	int		i;
	char	**res;
	char	*tmp;

	i = 0;
	j = 0;
	count = word_count(str);
	if ((res = (char**)malloc(sizeof(char*) * (count + 1))) == NULL)
		return (NULL);
	while (j < count)
	{
		if ((tmp = (char*)malloc(sizeof(char) * (word_size(str) + 1))) == NULL)
			return (NULL);
		while (WHITESPACE(str[0]) && str[0] != '\0')
			str++;
		while (!(WHITESPACE(str[0])) && str[0] != '\0')
			tmp[i++] = *str++;
		tmp[i] = '\0';
		res[j++] = tmp;
		i = 0;
	}
	res[count] = 0;
	return (res);
}
