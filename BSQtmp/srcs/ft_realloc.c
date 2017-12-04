/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-coza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 11:28:18 by tle-coza          #+#    #+#             */
/*   Updated: 2017/10/23 17:32:43 by tle-coza         ###   ########.fr       */
/*   Updated: 2017/10/23 14:04:41 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

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
