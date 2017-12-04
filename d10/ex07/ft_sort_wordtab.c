/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 14:00:17 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/17 14:43:25 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_sort_wordtab(char **tab)
{
	int		i;
	char	*tmp;

	while (tab[i])
	{
		i = 0;
		while (tab[i + 1])
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
	}
}
