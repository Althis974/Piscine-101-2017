# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlossy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/16 17:12:14 by rlossy            #+#    #+#              #
#    Updated: 2017/10/22 15:24:20 by rlossy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	colle-2
COLLE00		=	colle-00
COLLE01		=	colle-01
COLLE02		=	colle-02
COLLE03		=	colle-03
COLLE04		=	colle-04
LIB			=	ftlib.a
MAIN		=	sources/inspector.c
MAIN00		=	sources/main00.c
MAIN01		=	sources/main01.c
MAIN02		=	sources/main02.c
MAIN03		=	sources/main03.c
MAIN04		=	sources/main04.c
HEADER_DIR	=	./includes
FILENAMES	=	rush00.c rush01.c rush02.c rush03.c rush04.c
FILENAMES	+=	ft_putchar.c ft_atoi.c ft_putnbr.c ft_putstr.c ft_strcmp.c
C00			=	sources/rush00.c
C01			=	sources/rush01.c
C02			=	sources/rush02.c
C03			=	sources/rush03.c
C04			=	sources/rush04.c


SOURCES		=	$(addprefix sources/, $(FILENAMES))
OBJECTS		=	$(addprefix build/, $(FILENAMES:.c=.o))


.PHONY: all clean fclean re


all: $(NAME) $(COLLE00) $(COLLE01) $(COLLE02) $(COLLE03) $(COLLE04)


clean:
	@echo "\033[31m"
	rm -rf build/
	rm -f $(LIB)

fclean: libclean
	rm -f $(NAME)
	rm -f $(COLLE00)
	rm -f $(COLLE01)
	rm -f $(COLLE02)
	rm -f $(COLLE03)
	rm -f $(COLLE04)


libclean: clean
	rm -f $(LIB)

re: fclean all


build:
	@echo "\033[36m"
	mkdir build/


$(NAME): $(LIB) $(MAIN)
	@echo "\033[32m"
	gcc -Wall -Wextra -Werror -I $(HEADER_DIR) $(MAIN) $(LIB) -o $@

$(LIB): $(OBJECTS)
	ar crs $@ $(OBJECTS)


build/%.o: sources/%.c | build
	gcc -Wall -Wextra -Werror -I $(HEADER_DIR) -c $< -o $@

$(COLLE00): $(MAIN00)
	gcc -Wall -Wextra -Werror -I $(HEADER_DIR) $(MAIN00) $(LIB) $(C00) -o $(COLLE00)

$(COLLE01): $(MAIN01)
	gcc -Wall -Wextra -Werror -I $(HEADER_DIR) $(MAIN01) $(LIB) $(C01) -o $(COLLE01)

$(COLLE02): $(MAIN02)
	gcc -Wall -Wextra -Werror -I $(HEADER_DIR) $(MAIN02) $(LIB) $(C02) -o $(COLLE02)

$(COLLE03): $(MAIN03)
	gcc -Wall -Wextra -Werror -I $(HEADER_DIR) $(MAIN03) $(LIB) $(C03) -o $(COLLE03)

$(COLLE04): $(MAIN04)
	gcc -Wall -Wextra -Werror -I $(HEADER_DIR) $(MAIN04) $(LIB) $(C04) -o $(COLLE04)
