# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 14:05:24 by Dugonzal          #+#    #+#              #
#    Updated: 2023/12/04 20:29:25 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= arc 

C			:= c++ -Wall -Werror -Wextra -pedantic -std=c++98 -fsanitize=address

SRC_DIR		:= src/

OBJ_DIR		:=	obj/

SRC_FILES	:= main RPN

SRC			:= $(addprefix ${SRC_DIR}, $(addsuffix  .cpp, $(SRC_FILES)))
OBJ			:= $(addprefix ${OBJ_DIR}, $(addsuffix  .o, $(SRC_FILES)))

all: ${NAME}

${NAME}: ${OBJ}
	${C} $^ -o $@

${OBJ_DIR}%.o: ${SRC_DIR}%.cpp
	mkdir -p ${OBJ_DIR}
	${C} -c $^ -o $@

clean:
	rm -rf ${NAME}

fclean: clean
	rm -rf ${OBJ_DIR}

re: fclean all
