NAME = ScavTrap

FLAGS = -Wall -Wextra -Werror

CC = c++

STD = -std=c++98

SRC = ScavTrap.cpp main.cpp ClapTrap.cpp FragTrap.cpp

INC = ScavTrap.hpp ClapTrap.hpp FragTrap.hpp

OBJ = $(SRC:.cpp=.o)
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(STD) $(OBJ) -o $(NAME)

%.o: %.cpp $(INC)
	$(CC) $(CFLAGS) $(STD) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all