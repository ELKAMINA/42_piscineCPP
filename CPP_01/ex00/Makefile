NAME = Zombies

SRC = main.cpp \
	Zombie.cpp \
	newZombie.cpp \
	randomChump.cpp \

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAG =  -Wall -Werror -Wextra -std=c++98 

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