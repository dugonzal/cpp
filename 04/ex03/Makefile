# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 18:28:49 by Dugonzal          #+#    #+#              #
#    Updated: 2023/09/25 18:46:43 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= aa 

C		:= c++ -g3 -Wall -Werror -Wextra -pedantic -std=c++98 -fsanitize=address

SRC_DIR	:= src/

OBJ_DIR := obj/

SRC_FILES := main


SRC		:= $(addprefix ${SRC_DIR}, $(addsuffix .cpp, ${SRC_FILES}))

OBJ		:= $(addprefix ${OBJ_DIR}, $(addsuffix .o, ${SRC_FILES}))

all: ${NAME}

${NAME}:  ${OBJ}
	${C} $^ -o ${NAME}

${OBJ_DIR}%.o: ${SRC_DIR}%.cpp
	mkdir  -p ${OBJ_DIR}
	${C} -c $^ -o $@

clean:
		rm -rf ${NAME}
fclean: clean 
	rm -rf ${OBJ_DIR}
re: fclean all 
