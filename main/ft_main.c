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

#define WHITESPACE(x) x == '\t' || x == '\n' || x == ' '

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
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


char    rotate_max(char c)
{
	c = c - 65;
	c = ((c + 42) % 26);
	c = c + 65;
	return (c);
}

char    rotate_min(char c)
{
	c = c - 97;
	c = ((c + 42) % 26);
	c = c + 97;
	return (c);
}

char    rotate(char c)
{
	if (c >= 65 && c <= 90)
		return (rotate_max(c));
	else if (c >= 97 && c <= 122)
		return (rotate_min(c));
	else
		return (c);
}

char    *ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = rotate(str[i]);
		i++;
	}
	return (str);
}

int		main(void)
{
	//	char dest[20];
	//int i;
	//int j;
	//char src[] = "aH                6axEHqXlOG              RVojwUAN                TD              en2wCQdlv8H             Tw7GROkZMjAN            I4O8MHk0KqS ";

	//i = 0;
	//j = 0;
	//	ft_putstr(src);
	//	ft_putchar('\n');
	//	ft_strncpy(dest, src, 10);
	//strcpy(dest, src);
	//	ft_putstr(src);
	//	ft_putchar('\n');
	//	ft_putstr(dest);
	char str[50] = "Nick Bauer s'est encore echape !";
	//char find[50] = "Test ferme ta gueule";
	//char dest[20];
	//printf("%u", ft_strlcat(find, str, 1));
	//ft_putchar('\n');
	//printf("%s", strncat(find, str, 1));
	//printf("%lu", strlcat(find, str, 2));
	//printf("%s", ft_strcapitalize(find));
	//printf("%d", word_count(src))
	//char **res;
	printf("%s", ft_rot42(str));
	//res = ft_split_whitespaces(src);
	//ft_print_words_tables(res);
	return (0);
}
