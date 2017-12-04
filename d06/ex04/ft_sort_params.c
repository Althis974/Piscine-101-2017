/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 14:12:53 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/10 15:10:06 by rlossy           ###   ########.fr       */
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

void	swap(char **argv, int i, int j)
{
	char	*tmp;

	if (ft_strcmp(argv[i], argv[j]) > 0)
	{
		tmp = argv[i];
		argv[i] = argv[j];
		argv[j] = tmp;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < (argc - 1))
	{
		j = i + 1;
		while (j < argc)
		{
			swap(argv, i, j);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}
