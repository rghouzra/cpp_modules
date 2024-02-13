#
# Created by reda ghouzraf on Mon Feb 12 03:18:32 2024
#
NAME = Serializer
FLAGS = -Wall -Wextra -Werror
CC = c++
STD = -std=c++98
SRC = Serializer.cpp main.cpp
INC = Serializer.hpp Data.hpp
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
