NAME	=	thisIsBrain

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp 

OBJS:= $(SRCS:.cpp=.o)

$(NAME):	$(OBJS)
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