SRCS			= ClapTrap.cpp \
				  ScavTrap.cpp\
				  FragTrap.cpp \
				  DiamondTrap.cpp \
				  main.cpp

OBJS			= $(SRCS:.cpp=.o)

CXX				= g++-11
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -pedantic -I.
CPP_FLAGS       = -std=c++98

NAME			= DiamondTrap

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) $(CPP_FLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re testR
