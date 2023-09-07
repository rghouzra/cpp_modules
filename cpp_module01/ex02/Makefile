Name = braiiinz

srcs = main.cpp

objs = $(srcs:.cpp=.o)


FLAGS = -Wall -Wextra -Werror -std=c++98


all: $(Name)

$(Name): $(objs)
	c++ $(FLAGS) $(objs) -o $@

%.o : %.c Zombie.hpp
	c++ -c $(srcs)

clean:
	rm -rf $(objs)
fclean:clean
	rm -rf $(Name)

re: fclean all
