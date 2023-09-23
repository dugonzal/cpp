# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/08 11:25:38 by Dugonzal          #+#    #+#              #
#    Updated: 2023/08/31 11:55:27 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			:=	ViolenciaInnecesaria

C				:= c++ -g3 -Wall -Werror -Wextra -pedantic -std=c++98 -fsanitize=address

R				:= rm -rf

SRC_DIR			:= src/

OBJ_DIR			:= obj/

SRC_FILES		:= main Weapon HumanA HumanB

SRC				:= $(addprefix ${SRC_DIR}, $(addsuffix .cpp, ${SRC_FILES}))

OBJ				:= $(addprefix ${OBJ_DIR}, $(addsuffix .o, ${SRC_FILES}))

.SILENT:

all: ${NAME}

${NAME}: ${OBJ}
	${C} ${OBJ} -o $@
	echo "done -> $@"

${OBJ_DIR}%.o: ${SRC_DIR}%.cpp
	mkdir -p ${OBJ_DIR}
	${C} -c $< -o $@ 
	echo "object/ -> {$<} "

clean:
	${R} ${NAME}
fclean: clean 
	${R} ${OBJ_DIR}

re: fclean all 
