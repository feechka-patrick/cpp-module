
SRC = srcs/main.cpp\
	srcs/Bureaucrat.cpp\
	srcs/Form.cpp\
	srcs/ShrubberyCreationForm.cpp\
	srcs/RobotomyRequestForm.cpp\
	srcs/PresidentialPardonForm.cpp\
	srcs/Intern.cpp\
	
OBJ = $(SRC:.cpp=.o)

OBJDIR = objs

DEPS = $(OBJ:.o=.d)

DEPFLAGS = -MMD -MF $(@:.o=.d)

NAME = ex02

CXX = clang++

CFLAG = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAG) -I./incs $(OBJ) -o $(NAME)
-include $(DEPS)

%.o: %.cpp
	clang++ $(FLAGS) -I./incs -c $< $(DEPFLAGS) -o $(<:.cpp=.o)

clean:
	rm -rf $(OBJ)
	rm -rf $(DEPS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:	all clean fclean re