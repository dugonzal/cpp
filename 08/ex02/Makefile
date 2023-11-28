# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 12:40:19 by Dugonzal          #+#    #+#              #
#    Updated: 2023/11/28 12:47:51 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= MutantStack


C			:= c++ -Wall -Werror -Wextra -g3 -pedantic -fsanitize=address -std=c++98

I			:= ./inc/MutantSrack.hpp

SRC_DIR		:= src/

OBJ_DIR		:= obj/

SRC_FILES	:= main

SRC			:= ${addprefix ${SRC_DIR}, $(addsuffix .cpp, ${SRC_FILES})}

OBJ			:= $(addprefix ${OBJ_DIR}, $(addsuffix .o, ${SRC_FILES}))

all: ${NAME}

${NAME}: ${OBJ} ${I}
	${C} $< -o $@

${OBJ_DIR}%.o: ${SRC_DIR}%.cpp
	mkdir -p ${OBJ_DIR}
	${C} -c $< -o $@

clean:
	rm -rf ${NAME}
fclean: clean 
	rm -rf ${OBJ_DIR}
fclean: clean 

re: fclean all


