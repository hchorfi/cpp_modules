NAME = serialize

SRCS = main.cpp\

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) :
	clang++ -std=c++98 $(FLAGS) $(SRCS) -o $(NAME)

debug :
	clang++ -std=c++98 $(SRCS) -o $(NAME)

clean:

fclean:
	rm -rf $(NAME)

re :fclean all