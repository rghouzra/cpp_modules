Name = fiiiight

srcs = main.cpp UltimateSed.cpp

incs = UltimateSed.hpp
objs = $(srcs:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98 -g

all: $(Name)

$(Name): $(objs)
	c++  $(FLAGS) $(objs) -o $@

%.o : %.cpp $(incs)
	c++ -c $(FLAGS) $(srcs)

clean:
	rm -rf $(objs) *.replace
fclean:clean
	rm -rf $(Name)

re: fclean all
