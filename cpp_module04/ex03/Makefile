NAME = Animal 

CXXFLAGS = -Wall -Wextra -Werror # -fsanitize=undefined -g

CC = c++ 

STD = -std=c++98 

SRC = AMateria.cpp  Cure.cpp Character.cpp\
	Ice.cpp main.cpp MateriaSource.cpp

INC =   Ice.hpp Character.hpp \
	Cure.hpp AMateria.hpp MateriaSource.hpp ICharacter.hpp\
	IMateriaSource.hpp

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
