NAME = DiamondTrap

SRCS = ScavTrap.cpp\
		ClapTrap.cpp\
		FragTrap.cpp\
		DiamondTrap.cpp\
		main.cpp

FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow

all: $(NAME)

$(NAME) :
	clang++ -std=c++98 $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean:
	rm -rf $(NAME)

re :fclean all