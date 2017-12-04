/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin_realloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-coza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 11:18:16 by tle-coza          #+#    #+#             */
/*   Updated: 2017/10/23 11:21:57 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define BUF_SIZE 30000

char    *ft_realloc(char *s1, char *s2)
{
	char    *tab_out;
	int     len;

	len = ft_strlen(s1) + ft_strlen(s2);
	tab_out = (char*)malloc(sizeof(char) * (len) + 1);
	if (!tab_out)
		return (NULL);
	if (s1)
	{
		ft_strcpy(tab_out, s1);
		ft_strcat(tab_out, s2);
	}
	free(s1);
	return (tab_out);
}

char    *ft_stdin(int *x, int *y)
{
	char    buf[BUF_SIZE + 1];
	char    *tab_out;
	int     retread;
	int     i;

	i = 0;
	if ((tab_out = (char*)malloc(sizeof(char) * BUF_SIZE + 1)) == NULL)
		return (NULL);
	while ((retread = read(0, buf, BUF_SIZE)))
	{
		buf[retread] = '\0';
		tab_out = ft_realloc(tab_out, buf);
	}
	while (tab_out[i])
	{
		if (tab_out[i] != '\n' && *y < 1)
			*x += 1;
		if (tab_out[i] == '\n')
			*y += 1;
		i++;
	}
	return (tab_out);
}
