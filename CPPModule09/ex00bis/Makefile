NAME		=	btc

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS		=	main.cpp BitcoinExchange.cpp
INC			=	BitcoinExchange.hpp

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

.PHONY: all re clean fclean