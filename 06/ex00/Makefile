# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 14:03:27 by Dugonzal          #+#    #+#              #
#    Updated: 2023/11/14 14:30:43 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= a 

C			:= clang++ -g3 -Wall -Werror -Wextra -pedantic -fsanitize=address -std=c++98

SRC_DIR 	:= src/

OBJ_DIR		:= obj/

SRC_FILES 	:= main

SRC			:= $(addprefix ${SRC_DIR}, $(addsuffix .cpp, ${SRC_FILES}))

OBJ			:= ${addprefix ${OBJ_DIR}, $(addsuffix .o, ${SRC_FILES})}

all: ${NAME}

${NAME}: ${OBJ}
	${C} ${OBJ} -o $@

${OBJ_DIR}%.o: ${SRC_DIR}%.cpp 
	mkdir -p ${OBJ_DIR}
	${C} -c $< -o $@

clean:
	rm -rf ${NAME}

fclean: clean 
	rm -rf ${OBJ_DIR}
re: clean all 

