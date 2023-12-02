# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/02 22:50:09 by Dugonzal          #+#    #+#              #
#    Updated: 2023/12/02 23:05:53 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= btc

C			:= c++ -g3 -Wall -Werror -Wextra -pedantic -std=c++98 -fsanitize=address

SRC_DIR			:= src/

OBJ_DIR			:= obj/

SRC_FILES	:= main

SRC			:= $(addprefix ${SRC_DIR}, $(addsuffix .cpp, ${SRC_FILES}))

OBJ			:= $(addprefix ${OBJ_DIR}, $(addsuffix .o, ${SRC_FILES}))

all: ${NAME}

${NAME}: ${OBJ}
	${C} $< -o $@

${OBJ_DIR}%.o: ${SRC_DIR}%.cpp 
	mkdir -p ${OBJ_DIR}
	${C} -c $< -o $@

clean:
	rm -rf ${NAME}

fclean: clean
	rm -rf ${OBJ_DIR}
re: fclean all
