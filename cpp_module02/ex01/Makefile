NAME = executable

srcs = main.cpp Fixed.cpp

objs = $(srcs:.cpp=.o)

incs = Fixed.hpp

all:$(NAME)

FLAGS = -Wall -Wextra -Werror -std=c++98 -g

$(NAME):$(objs)
	g++ $(FLAGS) $(objs) -o $@

%.o : %.cpp $(incs)
	g++ -c $(FLAGS) $(srcs)

clean:
	rm -rf $(objs) *.tldr

fclean:
	rm -rf $(objs)
	rm -rf $(NAME)

re: fclean all
