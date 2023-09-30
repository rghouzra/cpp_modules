NAME = ClapTrap 

CPPFLAGS = -Wall -Wextra -Werror

CC = c++ 

STD = -std=c++98 

SRC = ClapTrap.cpp main.cpp 

INC = ClapTrap.hpp 

OBJ = $(SRC:.cpp=.o) 

all : $(NAME) 

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) $(STD) $(OBJ) -o $(NAME) 

%.o : %.cpp $(INC)
	$(CC) $(CPPFLAGS) $(STD) -c $< -o $@ 

clean :
	rm -rf $(OBJ) 

fclean : clean
	rm -rf $(NAME) 

re : fclean all 
