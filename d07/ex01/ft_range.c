/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 11:42:38 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/12 17:07:45 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*range;
	int i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	range = (int*)malloc((sizeof(int)) * (max - min));
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
