/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 15:38:58 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/17 16:25:11 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef	struct s_list	t_list;

struct	s_list{
	t_list	*next;
	void	*data;
};

t_list	*ft_create_elem(void *data);
#endif
