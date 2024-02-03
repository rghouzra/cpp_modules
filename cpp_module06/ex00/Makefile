#
# Created by reda ghouzraf on Sat Feb  3 17:56:36 2024
#
NAME = ScalarConverter
FLAGS = -Wall -Wextra -Werror
CC = c++
STD = -std=c++98
SRC = ScalarConverter.cpp main.cpp
INC = ScalarConverter.hpp
OBJ = $(SRC:.cpp=.o)
all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(STD) $(OBJ) -o $(NAME)
%.o: %.cpp $(INC)
	$(CC) $(FLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
