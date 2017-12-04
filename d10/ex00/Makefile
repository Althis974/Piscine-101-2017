# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlossy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/16 10:28:40 by rlossy            #+#    #+#              #
#    Updated: 2017/10/18 10:24:51 by rlossy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_swap.c srcs/ft_putchar.c srcs/ft_putstr.c \
	  srcs/ft_strcmp.c srcs/ft_strlen.c

HEADER_DIR = ./includes

all: start

start:
	gcc -c -Wall -Wextra -Werror $(SRC) -I $(HEADER_DIR)
	ar rc $(NAME) ft_swap.o ft_putchar.o ft_putstr.o ft_strcmp.o \
		ft_strlen.o
	ranlib $(NAME)

clean:
	rm -f ft_swap.o ft_putchar.o ft_putstr.o ft_strcmp.o \
		ft_strlen.o

fclean: clean
	rm -f $(NAME)

re: fclean all
