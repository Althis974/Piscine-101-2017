/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 14:12:04 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/22 09:58:25 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(2, str++, 1);
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

int		ft_read(int ac, char *av)
{
	if (ac < 2)
	{
		ft_stdin();
		return (1);
	}
	if ((ft_strcmp(av, "-") == 0) || (ft_strcmp(av, "--") == 0))
	{
		ft_stdin();
		return (1);
	}
	return (0);
}

int		ft_ret(int ret, int fd, char *buf, char **av)
{
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if (ret < 0)
		{
			ft_is_dir(*av);
			return (1);
		}
		buf[ret] = '\0';
		write(1, buf, ret);
	}
	return (0);
}

int		main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	ret = 0;
	ft_read(ac, *av);
	av++;
	ft_read(ac, *av);
	while (*av)
	{
		fd = open(*av, O_RDONLY);
		if (fd == -1)
			ft_bad_name(*av);
		else
			ft_ret(ret, fd, buf, av);
		close(fd);
		av++;
	}
	return (errno);
}
