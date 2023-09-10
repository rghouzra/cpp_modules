NAME = executable

srcs = main.cpp Fixed.cpp

objs = $(srcs:.cpp=.o)

incs = Fixed.hpp

all:$(NAME)

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME):$(objs)
	g++ $(FLAGS) $(objs) -o $@

%.o : %.cpp 
	g++ -c $(FLAGS) $(srcs)

clean:
	rm -rf $(objs)

fclean:
	rm -rf $(objs)
	rm -rf $(NAME)

re: fclean all
