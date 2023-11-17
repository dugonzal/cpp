# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 07:40:18 by Dugonzal          #+#    #+#              #
#    Updated: 2023/11/17 07:55:27 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= template

C			:= clang++ -Wall -Werror -Wextra -pedantic -std=c++98 -fsanitize=address -g3

SRC_DIR		:= src/

OBJ_DIR		:= obj/

SRC_FILES	:= main

I			:= inc/*.hpp
SRC			:= $(addprefix ${SRC_DIR}, $(addsuffix .cpp, ${SRC_FILES}))

OBJ			:= $(addprefix ${OBJ_DIR}, $(addsuffix .o, ${SRC_FILES}))

all: ${NAME}

${NAME}: ${OBJ} ${I} 
	${C} $<  -o $@ 

${OBJ_DIR}%.o: ${SRC_DIR}%.cpp 
	mkdir -p obj/
	${C} -c $< -o $@

clean:
	rm -rf ${NAME}

fclean: clean
	rm -rf obj
re: fclean all 
