NAME = Zombies

SRC = main.cpp \
		Zombie.cpp \
		zombieHorde.cpp \

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAG = -g3 -Wall -Werror -Wextra -fsanitize=address -std=c++98

all : $(NAME)

%.o : %.c
	$(CC) $(FLAG) -c $< -o $@ 

$(NAME) : $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re