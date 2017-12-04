/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 14:08:21 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/19 16:35:49 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_bad_name(char *str)
{
	ft_putstr("cat: ");
	ft_putstr(str);
	ft_putstr(": No such file or directory\n");
}

void	ft_is_dir(char *str)
{
	ft_putstr("cat: ");
	ft_putstr(str);
	ft_putstr(": Is a directory\n");
}

int		ft_stdin(void)
{
	int		retread;
	char	buf[BUF_SIZE];

	while ((retread = read(STDIN_FILENO, buf, BUF_SIZE)))
	{
		buf[retread] = '\0';
		ft_putstr(buf);
	}
	return (retread);
}
