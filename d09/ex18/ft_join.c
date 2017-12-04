/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 12:10:16 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/13 12:33:17 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char    *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (dest[i] != '\0')
    {
	        i++;
	    }
    while (src[j] != '\0')
    {
	        dest[i + j] = src[j];
	        j++;
	    }
    dest[i + j] = '\n';
    dest[i + 1 + j] = '\0';
    return (dest);
}

char    *ft_concat_params(int argc, char **argv)
{
    char    *str;
    int     i;
    int     totalen;

    totalen = 0;
    i = 1;
    while (i < argc)
    {
	        totalen += ft_strlen(argv[i]);
	        i++;
	    }
    str = (char*)malloc(totalen);
    i = 1;
    while (i < argc)
    {
	        ft_strcat(str, argv[i]);
	        i++;
	    }
    return (str);
}
