# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlossy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/16 17:12:14 by rlossy            #+#    #+#              #
#    Updated: 2017/10/22 15:58:55 by rlossy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	eval_expr	
LIB			=	ftlib.a
MAIN		=	srcs/main.c
HEADER_DIR	=	./includes
FILENAMES	=	ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
FILENAMES	+=	ft_putnbr.c ft_atoi.c ft_doop.c


SOURCES		=	$(addprefix srcs/, $(FILENAMES))
OBJECTS		=	$(addprefix build/, $(FILENAMES:.c=.o))


.PHONY: all clean fclean re


all: $(NAME)


clean:
	rm -rf build/


fclean: libclean
	rm -f $(NAME)


libclean: clean
	rm -f $(LIB)


re: fclean all


build:
	mkdir build/


$(NAME): $(LIB) $(MAIN)
	gcc -Wall -Wextra -Werror -I $(HEADER_DIR) $(MAIN) $(LIB) -o $@


$(LIB): $(OBJECTS)
	ar crs $@ $(OBJECTS)


build/%.o: srcs/%.c | build
	gcc -Wall -Wextra -Werror -I $(HEADER_DIR) -c $< -o $@
