/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 17:15:23 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/17 17:19:23 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		count;

	list = begin_list;
	count = 0;
	if (list)
	{
		count = 1;
		while (list->next)
		{
			list = list->next;
			count++;
		}
	}
	return (count);
}
