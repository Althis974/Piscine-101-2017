/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 11:28:23 by rlossy            #+#    #+#             */
/*   Updated: 2017/10/24 13:33:46 by rlossy           ###   ########.fr       */
/*   Updated: 2017/10/23 18:43:03 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <errno.h>
# define BUF_SIZE 30000

typedef	struct s_block	t_block;

struct	s_block{
	int	x;
	int	y;
};

char	*ft_read_stdin(int *x, int *y);
char	*ft_read_argv(char *argv, int *x, int *y);
char	*ft_realloc(char *s1, char *s2);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_strcpy(char *s1, char *s2);
char	*ft_strcat(char *s1, char *s2);
int		ft_strlen(char *s1);
void	ft_putnbr(int i);
char	*ft_strrev(char *str);
char	**build(char *map, char *str_check, int height);
void	ft_calc_size(char *map_str, int *x, int *y);
char	*ft_strcheck(char *map);
char	*ft_bad_name(char *str);
char	*ft_is_dir(char *str);
int     ft_map_error(char *s1, char *s2);

#endif
