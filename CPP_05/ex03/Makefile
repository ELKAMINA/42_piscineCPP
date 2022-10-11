NAME = Bureaucrat_03

SRC = main.cpp\
	src/Bureaucrat.cpp \
	src/AForm.cpp \
	src/ShrubberyCreationForm.cpp \
	src/RobotomyRequestForm.cpp \
	src/PresidentialPardonForm.cpp \
	src/Intern.cpp \

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