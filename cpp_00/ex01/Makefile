NAME = telebootik

SRCS = telebootik.cpp \
		PhoneBook.cpp \
		Contact.cpp

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) :
	clang++ -std=c++98 $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean:
	rm -rf $(NAME)

re :fclean all