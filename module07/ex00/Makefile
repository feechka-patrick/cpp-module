
SRC = main.cpp\
	
OBJ = $(SRC:.cpp=.o)

OBJDIR = ./

DEPS = $(OBJ:.o=.d)

DEPFLAGS = -MMD -MF $(@:.o=.d)

NAME = ex00

CXX = clang++

CFLAG = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAG) -I./incs $(OBJ) -o $(NAME)
-include $(DEPS)

%.o: %.cpp
	clang++ $(CFLAG) -I./incs -c $< $(DEPFLAGS) -o $(<:.cpp=.o)

clean:
	rm -rf $(OBJ)
	rm -rf $(DEPS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:	all clean fclean re