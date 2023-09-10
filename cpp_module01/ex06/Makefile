Name = fiiiight

srcs = main.cpp Harl.cpp

incs = Harl.hpp
objs = $(srcs:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98
all: $(Name)

$(Name): $(objs)
	c++  $(FLAGS) $(objs) -o $@

%.o : %.cpp $(incs)
	c++ -c $(FLAGS) $(srcs)

clean:
	rm -rf $(objs)

fclean:clean
	rm -rf $(Name)

re: fclean all
