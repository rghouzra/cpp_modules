Name = fiiiight

srcs = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

incs = Weapon.hpp HumanA.hpp HumanB.hpp
objs = $(srcs:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

all: $(Name)

$(Name): $(objs)
	c++ -fsanitize=address $(FLAGS) $(objs) -o $@

%.o : %.cpp $(incs)
	c++ -c $(FLAGS) $(srcs)

clean:
	rm -rf $(objs)
fclean:clean
	rm -rf $(Name)

re: fclean all
