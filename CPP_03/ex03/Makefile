NAME = DiamondTrap

SRC = main.cpp\
	ClapTrap.cpp\
	ScavTrap.cpp\
	FragTrap.cpp\
	DiamondTrap.cpp\

OBJ = $(SRC:.cpp=.o)

DEPS = $(OBJ:.o=.d)

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98
CPPFLAGS = -MMD

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) -o  $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean 
	make all

-include $(DEPS)
.PHONY : all clean fclean re