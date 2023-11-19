# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 20:16:45 by Dugonzal          #+#    #+#              #
#    Updated: 2023/11/19 20:23:44 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	ietrClass

C			:= c++ -Wall -Werror -Wextra -pedantic -fsanitize=address -std=c++98

SRC_DIR		:= src/

OBJ_DIR		:= obj/

SRC_FILES	:= main

SRC			:= $(addprefix $(SRC_DIR), $(addsuffix .cpp, ${SRC_FILES}))

OBJ			:= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

all: ${NAME}

${NAME}: ${OBJ}
	${C} $< -o $@

${OBJ_DIR}%.o: ${SRC_DIR}%.cpp 
	${C} -c $< -o $@

clean:
	rm -rf ${NAME}

fclean: clean 
	rm -rf ${OBJ_DIR}
re: fclean all 
