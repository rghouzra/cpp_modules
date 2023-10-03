NAME = Animal 

CXXFLAGS = -Wall -Wextra -Werror # -fsanitize=address

CC = c++ 

STD = -std=c++98 

SRC = AMateria.cpp  Cure.cpp Character.cpp Ice.cpp main.cpp

INC =   Ice.hpp Character.hpp  Cure.hpp   AMateria.hpp

OBJ = $(SRC:.cpp=.o) 

all : $(NAME) 

$(NAME) : $(OBJ)
	$(CC) $(CXXFLAGS) $(STD) $(OBJ) -o $(NAME) 

%.o : %.cpp $(INC)
	$(CC) $(CXXFLAGS) -c $< -o $@ 

clean :
	rm -rf $(OBJ) 

fclean : clean
	rm -rf $(NAME) 

re : fclean all 
