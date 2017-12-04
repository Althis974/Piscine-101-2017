/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 05:47:24 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/13 05:48:33 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# include <unistd.h>
# include <string.h>

# define TRUE 1
# define FALSE 0
# define OPEN 1
# define CLOSE 0
# define EXIT_SUCCESS 0

typedef int	t_ft_bool;

typedef struct	s_door
{
	int	state;
}				t_door;

void			open_door(t_door *door);
void			close_door(t_door *door);
t_ft_bool		is_door_open(t_door *door);
t_ft_bool		is_door_close(t_door *door);
#endif
