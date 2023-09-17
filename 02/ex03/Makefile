# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 20:32:11 by Dugonzal          #+#    #+#              #
#    Updated: 2023/09/17 12:17:58 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= fixed 

C			:= c++ -Wall -Werror -Wextra -g3 -pedantic -std=c++98

R			:= rm -rf

SRC_DIR		:= src/

OBJ_DIR		:= obj/

SRC_FILES	:= main Fixed Point bsp

SRC			:= $(addprefix ${SRC_DIR}, ${addsuffix .cpp, ${SRC_FILES}})
OBJ			:= $(addprefix ${OBJ_DIR}, ${addsuffix .o, ${SRC_FILES}})

${NAME}: ${OBJ}
	${C} ${OBJ} -o $@

${OBJ_DIR}%.o: ${SRC_DIR}%.cpp
	mkdir -p ${OBJ_DIR}
	${C} -c $< -o $@

all: ${NAME}

clean:
	${R} ${NAME}

fclean: clean
	${R} ${OBJ_DIR}

re: fclean all

.PHONY: all clean fclean re
