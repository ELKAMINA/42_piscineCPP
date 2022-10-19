NAME = Bureaucrat_00

SRC = main.cpp\
	src/Bureaucrat.cpp \

OBJ = $(SRC:.cpp=.o)

CXX = c++

CXXFLAGS = -g3 -Wall -Werror -Wextra -std=c++98 #-fsanitize=address
CPPFLAGS = -I includes

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re