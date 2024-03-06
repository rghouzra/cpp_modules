#
# Created by reda ghouzraf on Tue Mar  5 11:29:17 2024
#
NAME = btc
FLAGS = -Wall -Wextra -Werror -fsanitize=address -g
CC = c++
STD = -std=c++98
SRC = $(wildcard *.cpp)
INC = $(wildcard *.hpp)
OBJ = $(SRC:.cpp=.o)
all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(STD) $(OBJ) -o $(NAME)
%.o: %.cpp $(INC)
	$(CC)  $(STD) $(FLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
