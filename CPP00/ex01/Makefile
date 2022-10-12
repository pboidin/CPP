NAME	=	phonebook

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	Contact.cpp PhoneBook.cpp main.cpp
INC		=	Contact.hpp PhoneBook.hpp

OBJS:= $(SRCS:.cpp=.o)

$(NAME):	$(OBJS) $(INC)
				$(CC) -o $(NAME) $(CFLAGS) $(OBJS)

all:		$(NAME)

.SECONDARY:	$(OBJS)

clean:
				rm -rf $(OBJS)

fclean:		clean
				rm -rf $(NAME)

re:			fclean all

.cpp.o:
			$(CC) $(CFLAGS) -c $< -o ${<:.cpp=.o}