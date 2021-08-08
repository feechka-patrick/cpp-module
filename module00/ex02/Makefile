# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/13 17:18:01 by nmisfit           #+#    #+#              #
#    Updated: 2021/08/04 21:20:19 by nmisfit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = tests.cpp Account.cpp

OBJ = $(SRC:.cpp=.o)

NAME = test

CC = clang++

CFLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAG) $(OBJ) -o $(NAME)

%.o: %.c 
	$(CC) $(CFLAG) -c $< -o $@ 

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:	all clean fclean re