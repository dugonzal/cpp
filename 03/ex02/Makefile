# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 18:01:24 by Dugonzal          #+#    #+#              #
#    Updated: 2023/09/22 17:19:16 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= trap

C			:= c++ -std=c++98 -Wall -Werror -Wextra -pedantic -g3

R			:= rm -rf

SRC_DIR		:= src/

OBJ_DIR		:=	obj/

SRC_FILES	:= main ClapTrap ScavTrap FragTrap

SRC			:= $(addprefix ${SRC_DIR}, ${addsuffix .cpp, ${SRC_FILES}})
OBJ			:= $(addprefix ${OBJ_DIR}, ${addsuffix .o, ${SRC_FILES}})

all: ${NAME}

.SILENT:

${NAME}: ${OBJ}
	${C} $^ -o ${NAME}

${OBJ_DIR}%.o: ${SRC_DIR}%.cpp 
	mkdir -p ${OBJ_DIR}
	${C} -c $^ -o $@

clean:
	${R} ${NAME}
fclean: clean
	${R} ${OBJ_DIR}

re: fclean all

.PHONY: clean fclean re all


