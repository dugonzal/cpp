# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 12:05:03 by Dugonzal          #+#    #+#              #
#    Updated: 2023/11/16 21:33:16 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= type 

C			:= clang++ -Wall -Werror -Wextra -g3 -pedantic -g3 -fsanitize=address -std=c++98

SRC_DIR		:= src/

OBJ_DIR		:= obj/

SRC_FILES	:= main Base 

SRC			:= $(addprefix ${SRC_DIR}, $(addsuffix .cpp, ${SRC_FILES}))

OBJ			:= $(addprefix ${OBJ_DIR}, $(addsuffix .o, ${SRC_FILES}))

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

re: fclean all 
