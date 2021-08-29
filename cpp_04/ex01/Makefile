NAME = Brain

SRCS = main.cpp\
		Animal.cpp\
		Brain.cpp

FLAGS = -Wall -Wextra -Werror #-fsanitize=address

all: $(NAME)

$(NAME) :
	clang++ -std=c++98 $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean:
	rm -rf $(NAME)

re :fclean all