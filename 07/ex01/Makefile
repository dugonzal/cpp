# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 16:43:50 by Dugonzal          #+#    #+#              #
#    Updated: 2023/11/20 11:09:02 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= iter

C			:= c++ -Wall -Werror -Wextra -pedantic -std=c++98 -fsanitize=address -g3 

SRC_DIR		:= src/

OBJ_DIR		:= obj/

I			:= inc/iter.hpp

SRC_FILES	:= main

SRC			:= ${addprefix ${SRC_DIR}, $(addsuffix .cpp, ${SRC_FILES})}

OBJ			:= ${addprefix ${OBJ_DIR}, $(addsuffix .o, ${SRC_FILES})}

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

re: fclean all 
