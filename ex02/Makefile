CPP = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = program

SRC = wrongAnimal.cpp wrongCat.cpp AAnimal.cpp Cat.cpp Brain.cpp Dog.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: 
	rm -rf $(NAME) $(OBJ)

re: clean all

.PHONY: clean all re