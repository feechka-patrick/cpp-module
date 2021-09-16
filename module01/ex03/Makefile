# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/13 17:18:01 by nmisfit           #+#    #+#              #
#    Updated: 2021/09/15 20:39:54 by nmisfit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp\
	Weapon.cpp\
	HumanA.cpp\
	HumanB.cpp\

OBJ = $(SRC:.cpp=.o)

NAME = ex03

CXX = clang++

CFLAG = -Wall -Wextra -Werror

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