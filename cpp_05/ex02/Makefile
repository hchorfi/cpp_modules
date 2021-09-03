NAME = bureucrat

SRCS = main.cpp\
		Bureaucrat.cpp\
		Form.cpp\
		ShrubberyCreationForm.cpp\
		RobotomyRequestForm.cpp\
		PresidentialPardonForm.cpp

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) :
	clang++ -std=c++98 $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean:
	rm -rf $(NAME)

re :fclean all