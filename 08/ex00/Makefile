# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 11:26:14 by Dugonzal          #+#    #+#              #
#    Updated: 2023/11/23 17:37:03 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= easy

C			:= c++ -Wall -Werror -Wextra -g3 -pedantic -std=c++98 -fsanitize=address 

SRC_DIR		:= src/

OBJ_DIR		:= obj/

SRC_FILES	:= main

SRC			:= $(addprefix ${SRC_DIR}, $(addsuffix .cpp, ${SRC_FILES}))

OBJ			:= $(addprefix ${OBJ_DIR}, $(addsuffix .o, ${SRC_FILES}))

all: ${NAME}

${NAME}: ${OBJ}
	${C} $< -o $@

${OBJ_DIR}%.o: ${SRC_DIR}%.cpp
	mkdir -p ${OBJ_DIR}
	${C} -c $^ -o $@

clean:
	rm -rf ${NAME}

fclean:clean
	rm -rf ${OBJ_DIR}
re: fclean all 
