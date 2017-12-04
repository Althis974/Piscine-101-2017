# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlossy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/16 17:12:14 by rlossy            #+#    #+#              #
#    Updated: 2017/10/23 10:55:01 by rlossy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	do-op
LIB			=	ftlib.a
MAIN		=	srcs/main.c
HEADER_DIR	=	./includes
FILENAMES   =   ft_swap.c ft_split_whitespaces.c ft_strcat.c ft_strlen.c ft_strcpy.c
FILENAMES   +=  ft_putchar.c ft_atoi.c ft_putnbr.c ft_putstr.c ft_strcmp.c

SOURCES		=	$(addprefix test/, $(FILENAMES))
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


build/%.o: test/%.c | build
	gcc -Wall -Wextra -Werror -I $(HEADER_DIR) -c $< -o $@
