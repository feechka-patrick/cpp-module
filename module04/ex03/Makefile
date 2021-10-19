
SRC = main.cpp\
	AMateria.cpp\
	Ice.cpp\
	Cure.cpp\
	MateriaSource.cpp\
	Character.cpp\

OBJ = $(SRC:.cpp=.o)

NAME = ex03

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