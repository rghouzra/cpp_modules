Name = braiiinz

srcs = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

objs = $(srcs:.cpp=.o)


FLAGS = -Wall -Wextra -Werror -std=c++98


all: $(Name)

$(Name): $(objs)
	c++ $(FLAGS) $(objs)

%.o : %.c Zombie.hpp
	c++ -c $(srcs) -o $@

clean:
	rm -rf $(objs)
fclean:clean
	rm -rf $(Name)
