NAME = interface

SRCS = main.cpp\
		AMateria.cpp\
		Ice.cpp\
		Cure.cpp\
		Character.cpp\
		MateriaSource.cpp

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) :
	clang++ -std=c++98 $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean:
	rm -rf $(NAME)

re :fclean all