# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/07 10:52:13 by schuah            #+#    #+#              #
#    Updated: 2022/08/21 13:54:30 by schuah           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	scavTrap
CC			=	c++
RM			=	rm -f
CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic
SRCS_FILES	=	main \
				ClapTrap \
				ScavTrap
SRCS		= 	$(addprefix $(SRCS_DIR), $(addsuffix .cpp, $(SRCS_FILES)))
OBJS		= 	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRCS_FILES)))
SRCS_DIR	=	srcs/
OBJS_DIR	=	objs/

all:
				mkdir -p $(OBJS_DIR)
				make $(NAME)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.cpp
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
				rm -rf $(OBJS_DIR)

fclean:			clean
				rm -rf $(NAME)

re:				fclean all

.PHONY:			all clean fclean re