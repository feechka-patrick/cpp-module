# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/13 17:18:01 by nmisfit           #+#    #+#              #
#    Updated: 2021/09/18 17:46:53 by nmisfit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp\
	ClapTrap.cpp\

OBJ = $(SRC:.cpp=.o)

NAME = ex00

CXX = clang++

CFLAG = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAG) $(OBJ) -o $(NAME)

%.o: %.c 
	$(CXX) $(CFLAG) -c $< -o $@ 

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:	all clean fclean re