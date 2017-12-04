# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlossy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/18 14:53:30 by rlossy            #+#    #+#              #
#    Updated: 2017/10/19 14:34:00 by rlossy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        =   ft_cat
LIB         =   ftlib.a
MAIN        =   srcs/main.c
HEADER_DIR  =   ./includes
FILENAMES   =   ft_error.c


SOURCES     =   $(addprefix srcs/, $(FILENAMES))
OBJECTS     =   $(addprefix build/, $(FILENAMES:.c=.o))


.PHONY: all clean fclean re


all: $(NAME)


clean:
	    rm -rf build/
		rm -rf includes/ft.h.gch


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
