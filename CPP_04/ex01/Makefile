NAME = Deepcopy

SRC = main.cpp\
	Dog.cpp\
	Cat.cpp\
	Animal.cpp\
	WrongCat.cpp\
	WrongAnimal.cpp\
	Brain.cpp\


OBJ = $(SRC:.cpp=.o)

CC = c++

FLAG = -g3 -Wall -Werror -Wextra -std=c++98 #-fsanitize=address

all : $(NAME)

%.o : %.c
	$(CC) $(FLAG) -c $< -o $@ 

$(NAME) : $(OBJ)
	$(CC) $(FLAG) -o $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re