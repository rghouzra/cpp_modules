#
# Created by reda ghouzraf on Wed Jan 24 02:54:08 2024
#
NAME = Bureaucrat
FLAGS = -Wall -Wextra -Werror -fsanitize=address
CC = c++
STD = -std=c++98
SRC = Bureaucrat.cpp main.cpp
INC = Bureaucrat.hpp
OBJ = $(SRC:.cpp=.o)
all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(STD) $(OBJ) -o $(NAME)
%.o: %.cpp $(INC)
	$(CC) $(FLAGS) $(STD) -c $< -o $@
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
