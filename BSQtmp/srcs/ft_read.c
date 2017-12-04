/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-coza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 11:30:20 by tle-coza          #+#    #+#             */
/*   Updated: 2017/10/24 15:53:47 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	ft_calc_size(char *map_str, int *x, int *y)
{
	int i;

	i = 0;		
	while (map_str[i] != '\n')
		i++;
	map_str[i] = (i + 1);
	while (map_str[i])
	{
		if (map_str[i] != '\n')
			*x += 1;
		if (map_str[i] == '\n')
			*y += 1;
		i++;
	}
	*x = *x / *y;
}

char    *ft_read_stdin(int *x, int *y)
{
	char    buf[BUF_SIZE + 1];
	char    *map_str;
	int     retread;
	int i;

	i = 0;
	retread = 0;	
	if ((map_str = (char*)malloc(sizeof(char) * BUF_SIZE + 1)) == NULL)
		return (NULL);
	while ((retread = read(0, buf, BUF_SIZE)))
	{
		buf[retread] = '\0';
		map_str = ft_realloc(map_str, buf);
	}
	ft_calc_size(map_str, x, y);
	//	while (map_str[i] != '\n')
	//		i++;
	//	*map_str += (i + 1);
	return (map_str);
}

int		ft_open_file(char *file)
{
	int fd;

	fd = open(file, O_RDONLY);
	//	if (ft_check_errno())
	//	{
	//		ft_puterror(file);
	//	return (-1);
	//	}
	return (fd);
}

char	*ft_read_argv(char *argv, int *x, int *y)
{
	int     fd;
	int     retread;
	char    buf[BUF_SIZE + 1];
	char    *map_str;

	errno = 0;
	if ((fd = ft_open_file(argv)) == -1)
		return(ft_bad_name(argv));
	errno = 0;
	if ((map_str = (char*)malloc(sizeof(char) * BUF_SIZE + 1)) == NULL)
		return (NULL);
	while ((retread = read(fd, buf, BUF_SIZE)))
	{
		if (retread < 0)
		{
			return(ft_is_dir(argv));
		}
		buf[retread] = '\0';
		map_str = ft_realloc(map_str, buf);
	}
	//		if (ft_check_errno())
	//		{
	//			ft_puterror(file);
	//			return (0);
	//		}
	ft_calc_size(map_str, x, y);
	fd = close(fd);
	return (map_str);
}
