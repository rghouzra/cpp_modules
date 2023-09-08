Name = braiiinz

srcs = main.cpp zombieHorde.cpp Zombie.cpp

objs = $(srcs:.cpp=.o)

incs = Zombie.hpp
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
