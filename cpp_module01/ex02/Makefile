Name = braiiinz

srcs = main.cpp

objs = $(srcs:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(Name)

$(Name): $(objs)
	c++ $(CFLAGS) $(objs) -o $@

%.o : %.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -c $(srcs)

clean:
	rm -rf $(objs)
fclean:clean
	rm -rf $(Name)

re: fclean all
