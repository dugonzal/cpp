# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 20:16:45 by Dugonzal          #+#    #+#              #
#    Updated: 2023/11/20 13:31:21 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	iterClass

C			:= c++ -Wall -Werror -Wextra -pedantic -fsanitize=address -std=c++98

C			+= -include src/Array.tpp

SRC_DIR		:= src/

OBJ_DIR		:= obj/

SRC_FILES	:= main

I			:= inc/Array.hpp

SRC			:= $(addprefix $(SRC_DIR), $(addsuffix .cpp, ${SRC_FILES}))

OBJ			:= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

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
