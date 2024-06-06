# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: damendez <damendez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 10:20:41 by damendez          #+#    #+#              #
#    Updated: 2024/06/06 19:51:59 by damendez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Phonebook

SRC_FILES	= PhoneBook.cpp Contact.cpp main.cpp

HEADER		= Agenda.h PhoneBook.hpp Contact.hpp

OBJ_DIR		= obj/
OBJ_FILES	= $(SRC_FILES:.cpp=.o)
OBJS		= $(addprefix $(OBJ_DIR), $(OBJ_FILES))

DEP_FILES	= $(SRC_FILES:.cpp=.d)
DEPS		= $(addprefix $(OBJ_DIR), $(DEP_FILES))

CC			= g++
CFLAGS		= -std=c++98 -Wall -Wextra -Werror -MMD -fsanitize=address
RM			= rm -f
INCLUDE		= -I ./

%.o: %.cpp Makefile ${HEADER}
		@${CC} ${CFLAGS} -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
		$(RM) $(OBJS) $(DEPS)

fclean:
		clean
		$(RM) $(OBJ_DIR) $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re