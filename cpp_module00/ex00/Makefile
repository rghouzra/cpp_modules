NAME=megaphone

srcs = megaphone.cpp

objs = $(srcs:.cpp=.o)

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
