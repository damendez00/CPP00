# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: damendez <damendez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 10:20:41 by damendez          #+#    #+#              #
#    Updated: 2024/06/07 17:54:14 by damendez         ###   ########.fr        #
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
CFLAGS		= -std=c++98 -Wall -Wextra -Werror -MMD #-fsanitize=address
RM			= rm -f
INCLUDE		= -I ./

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
		$(CC) $(CFLAGS) $(INCLUDE) $(OBJS) -o $@

$(OBJ_DIR):
		mkdir -p $@

$(OBJ_DIR)%.o: %.cpp
		$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
		$(RM) $(OBJS) $(DEPS)

fclean: clean
		$(RM) -r $(OBJ_DIR)
		$(RM) $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re