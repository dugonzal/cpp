# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 08:18:33 by Dugonzal          #+#    #+#              #
#    Updated: 2023/11/19 14:43:48 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		:= Serializacion 

C			:= c++ -Wall -Werror -Wextra -pedantic -fsanitize=address -g3 -std=c++98

SRC_DIR 	:= src/

OBJ_DIR 	:= obj/

SRC_FILES	:= main Serializer Data 

SRC			:= $(addprefix ${SRC_DIR}, $(addsuffix .cpp, ${SRC_FILES}))

OBJ			:= ${addprefix ${OBJ_DIR}, $(addsuffix .o, $(SRC_FILES))} 

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
