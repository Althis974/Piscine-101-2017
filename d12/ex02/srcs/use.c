/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 09:26:43 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/19 16:15:23 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int res;

	res = 0;
	i = 0;
	while ((s1[i] || s2[i]) && res == 0)
	{
		if (s1[i] != s2[i])
		{
			res = (s1[i] - s2[i]);
		}
		i++;
	}
	return (res);
}

int		ft_get_size(char *filename)
{
	int		fd;
	int		ret;
	int		file_size;
	char	buf[BUF_SIZE + 1];

	file_size = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	while ((ret = read(fd, buf, BUF_SIZE)) > 0)
		file_size += ret;
	close(fd);
	return (file_size);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
	}
	i++;
}
