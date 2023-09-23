# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/02 09:44:55 by Dugonzal          #+#    #+#              #
#    Updated: 2023/08/04 14:17:01 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= Zombie 

C			:= c++ -std=c++98 -Wall -Werror -Wextra -fsanitize=address -pedantic -g3

R			:= rm -rf

SRC_DIR		:= src/

OBJ_DIR		:= obj/

SRC_FILES 	:= main newZombie randomChump Zombie

SRC			:= $(addprefix ${SRC_DIR}, ${addsuffix .cpp, ${SRC_FILES}})

OBJ			:= $(addprefix ${OBJ_DIR}, ${addsuffix .o, ${SRC_FILES}})

.SILENT:

all: ${NAME}

${NAME}: ${OBJ}
	${C} ${OBJ} -o $@

${OBJ_DIR}%.o: ${SRC_DIR}%.cpp
	mkdir -p ${OBJ_DIR}
	${C} -c $< -o $@
	@echo "Compilation of $<"

clean:
	${R} ${NAME} 

fclean: clean

	${R} ${OBJ_DIR}

re: fclean all
