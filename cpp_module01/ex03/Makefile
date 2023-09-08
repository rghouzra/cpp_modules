Name = fiiiight

srcs = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

incs = Weapon.hpp HumanA.hpp HumanB.hpp
objs = $(srcs:.cpp=.o)


FLAGS = -Wall -Wextra -Werror -std=c++98


all: $(Name)

$(Name): $(objs)
	c++ $(FLAGS) $(objs) -o $@

%.o : %.c $(incs)
	c++ -c $(srcs)

clean:
	rm -rf $(objs)
fclean:clean
	rm -rf $(Name)

re: fclean all
