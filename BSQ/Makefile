# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlossy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/16 17:12:14 by rlossy            #+#    #+#              #
#    Updated: 2017/10/24 11:50:47 by tle-coza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	bsq
LIB			=	libft.a
MAIN        =   srcs/main.c
HEADER_DIR	=	./includes
FILENAMES	=	ft_realloc.c ft_read.c build.c ft_error.c ft_strcheck.c
UTILS		=	ft_atoi.c ft_putnbr.c ft_putstr.c ft_strcat.c ft_strlen.c
UTILS		+=	ft_split_whitespaces.c ft_strcmp.c ft_strcpy.c ft_swap.c
UTILS		+=	ft_putchar.c ft_strrev.c

SOURCES		=	$(addprefix srcs/, $(FILENAMES))
OBJECTS		=	$(addprefix build/, $(FILENAMES:.c=.o)) 
TOOLS		=	$(addprefix utils/, $(UTILS))
TOOLSOBJ	=	$(addprefix build/, $(UTILS:.c=.o))

.PHONY: all clean fclean re


all: $(NAME)


clean: libclean
	@echo "\033[31m"
	rm -rf build/

fclean: clean
	@echo "\033[31m"
	rm -f $(NAME)

libclean:
	@echo "\033[31m"
	rm -f $(LIB)

re: fclean all


build: 
	@echo "\033[36m"
	mkdir build/

$(NAME): $(LIB) $(MAIN)
	@echo "\033[32m"
	gcc -Wall -Wextra -Werror -I $(HEADER_DIR) $(MAIN) $(LIB) -o $@

$(LIB): $(OBJECTS) $(TOOLSOBJ)
	@echo "\033[33m"
	ar crs $@ $(OBJECTS) $(TOOLSOBJ)

build/%.o: utils/%.c | build
	gcc -Wall -Wextra -Werror -I $(HEADER_DIR) -c $< -o $@
build/%.o: srcs/%.c | build
	gcc -Wall -Wextra -Werror -I $(HEADER_DIR) -c $< -o $@
