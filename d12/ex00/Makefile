# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlossy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/18 14:53:30 by rlossy            #+#    #+#              #
#    Updated: 2017/10/18 16:10:49 by rlossy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ft_display_file
MAIN		=	srcs/main.c
HEADER_DIR	=	./includes


.PHONY: all clean fclean re


all: $(NAME)


clean:
	rm -f main.o 


fclean: clean
	rm -f $(NAME)


re: fclean all

$(NAME):
	gcc -c -Wall -Wextra -Werror $(MAIN)
	gcc -Wall -Wextra -Werror -I $(HEADER_DIR) $(MAIN) -o $@
