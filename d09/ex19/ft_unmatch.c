/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 12:51:44 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/13 13:30:13 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int i;
	int tmp;
	int k;
	int even;

	i = 0;
	even = 0;
	while (i <= length)
	{
		k = i + 1;
		tmp = tab[i];
		while (k <= length)
		{
			if (tab[k] == tmp)
				even++;
				break;
			k++;
		}
		i++;
	}
	return (even);
}
