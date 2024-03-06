#
# Created by reda ghouzraf on Wed Mar  6 20:02:39 2024
#
NAME = RPN
FLAGS = -Wall -Wextra -Werror
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
