NAME = phoneContacts
FLAGS = -Wall -Werror -Wextra
SRC = main.cpp
CC = clang++
OSRC =	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OSRC)
	clang++ -o $(NAME) $(FLAGS) $(OSRC)

%.o: %.cpp
	clang++ $(FLAGS) -c -o $@ $<

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all