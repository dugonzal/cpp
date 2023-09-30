# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 18:28:49 by Dugonzal          #+#    #+#              #
#    Updated: 2023/09/30 11:57:16 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= antiMateria 

C		:= c++ -g3 -Wall -Werror -Wextra -pedantic -std=c++98 -fsanitize=address

SRC_DIR	:= src/

OBJ_DIR := obj/

SRC_FILES := main AMateria


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
