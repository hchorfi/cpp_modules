NAME = Zombie

SRCS = main.cpp\
		Zombie.cpp\
		newZombie.cpp\
		randomChump.cpp

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) :
	clang++ -std=c++98 $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean:
	rm -rf $(NAME)

re :fclean all