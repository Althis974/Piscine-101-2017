/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 14:10:31 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/19 14:45:08 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define BUF_SIZE 30000
# include <errno.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

void	ft_bad_name(char *str);
void	ft_is_dir(char *str);
void	ft_putstr(char *str);
int		ft_stdin(void);
int		ft_read(int ac, char *av);
int		ft_strcmp(char *s1, char *s2);
#endif
