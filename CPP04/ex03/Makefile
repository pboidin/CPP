NAME	=	Interface

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 
SRCS		=	main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
INC			=	AMateria.hpp Character.hpp Cure.hpp Ice.cpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

OBJS:= $(SRCS:.cpp=.o)

$(NAME):	$(OBJS) $(INC)
				$(CXX) -o $(NAME) $(CXXFLAGS) $(OBJS)

all:		$(NAME)

.SECONDARY:	$(OBJS)

clean:
				rm -rf $(OBJS)

fclean:		clean
				rm -rf $(NAME)

re:			fclean all

.cpp.o:
			$(CXX) $(CXXFLAGS) -c $< -o ${<:.cpp=.o}