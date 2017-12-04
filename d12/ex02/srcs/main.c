/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 15:09:55 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/19 16:14:47 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		ft_bad_name(char *str)
{
	int fd;

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("tail: ");
		ft_putstr(str);
		ft_putstr(": No such file or directory\n");
		return (1);
	}
	close(fd);
	return (0);
}

void	ft_put_filename(int ac,  char *str)
{
	if (ac > 4)
	{
		ft_putstr("==> ");
		ft_putstr(str);
		ft_putstr(" <==\n");
	}
}

void	ft_tail(int ac, char *str, int size)
{
	int		fd;
	int		ret;
	int 	file_size;
	char	*buf_tmp;
	char	buf[BUF_SIZE + 1];

	if (ft_bad_name(str))
	{
		file_size = ft_get_size(str);
		fd = open(str, O_RDONLY);
		if (size < file_size)
		{
			buf_tmp = (char*)malloc(sizeof(char) * (file_size - size + 1 ));
			read(fd, buf_tmp, file_size - size);
			free(buf_tmp);
		}
		ft_put_filename(ac, str);
		while ((ret = read(fd, buf, BUF_SIZE)) > 0)
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
	}
}

int		main(int ac, char **av)
{
	int i;

	i = 3;
	if (ac > 2)
	{
		if (ft_strcmp(av[1], "-c") == 0)
		{
			if (ft_atoi(av[2]) > 0)
			{
				while (i < ac)
				{
					ft_tail(ac, av[i], ft_atoi(av[2]));
					i++;
				}
			}
		}
	}
	return (errno);
}
