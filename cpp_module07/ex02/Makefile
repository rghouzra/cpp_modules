#
# Created by reda ghouzraf on Sat Mar  2 14:58:30 2024
#
NAME = Array
FLAGS = -Wall -Wextra -Werror #-fsanitize=address
CC = c++
STD = -std=c++98
SRC = $(wildcard *.cpp)
INC = $(wildcard *.hpp)
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
