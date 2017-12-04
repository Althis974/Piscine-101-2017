/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 14:28:08 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/18 10:22:26 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *array;

	i = 0;
	if ((array = (int*)malloc(sizeof(int) * length)) == NULL)
		return (0);
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	array[i] = '\0';
	return (array);
}
