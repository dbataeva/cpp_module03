NAME	=	ex03

SRCS	=	ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJS	=	$(SRCS:.cpp=.o)

CC		=	clang++ -Wall -Wextra -Werror -Wno-shadow -std=c++98

RM		=	rm -f

%.o%.cpp:	ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
			$(CC) -c $< -o $@

all:		${NAME}

$(NAME):	${OBJS} 
			$(CC) $^ -o $@

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean ${NAME}
			
.PHONY:		all clean fclean re