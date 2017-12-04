/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-coza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 12:53:49 by tle-coza          #+#    #+#             */
/*   Updated: 2017/10/24 11:37:38 by tle-coza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		is_block(char c)
{
	if (c == 'o')
		return (1);
	return (0);
}

int		is_free(char c)
{
	if (c == '.')
		return (1);
	return (0);
}

int		is_valid(char c)
{
	if (is_free(c) || is_block(c))
		return (1);
	return (0);
}

int		ft_linelen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

char	*offset_map(char *str_map, char *str_check)
{
	int i;

	i = 0;
	while (str_map[i] != str_check[0])
	{
		i++;
	}
	str_map += i + 1;
	return (str_map);
}

char	**build(char *str_map, char *str_check, int height)
{
	char **map;
	int i;
	int j;
	int h;

	i = 0;
	h = 0;
	str_map = offset_map(str_map, str_check);
	map = (char **)malloc(sizeof(char*) * height + 1);
	while (h < height)
	{
		j = 0;
		map[h] = (char *)malloc(sizeof(char) * (ft_linelen(str_map) + 1));
		while (str_map[i + j] != '\n')
		{
			map[h][j] = str_map[i + j];
			j++;
		}
		map[h][j] = '\0';
		i += j + 1;
		h++;
	}
	map[h] = 0;
	return (map);
}
