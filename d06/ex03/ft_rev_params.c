/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 14:01:23 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/10 15:12:37 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	argc = 0;
	i = 0;
	while (argv[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	while (j > 0)
	{
		ft_putstr(argv[j]);
		j--;
	}
}
