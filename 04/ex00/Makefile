# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/23 23:39:46 by Dugonzal          #+#    #+#              #
#    Updated: 2023/10/05 21:15:05 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= animal

C			:= c++ -std=c++98 -Wall -Werror -Wextra -pedantic -g3 -fsanitize=address


SRC_DIR		:= src/

OBJ_DIR		:= obj/


SRC_FILES	:= main Animal Dog Cat WrongCat WrongAnimal

SRC			:= $(addprefix ${SRC_DIR}, $(addsuffix .cpp, ${SRC_FILES}))
OBJ			:= $(addprefix ${OBJ_DIR}, $(addsuffix .o, ${SRC_FILES}))

all: ${NAME}

${NAME}: ${OBJ}
	${C} $^ -o $@

${OBJ_DIR}%.o: ${SRC_DIR}%.cpp
	mkdir -p ${OBJ_DIR}
	${C} -c $< -o $@

clean:
	rm -rf ${NAME}

fclean: clean
	rm -rf ${OBJ_DIR}

re: fclean all
