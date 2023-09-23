# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/03 12:08:12 by Dugonzal          #+#    #+#              #
#    Updated: 2023/09/03 19:53:32 by dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME 		:= zombieHorde

C			:= c++ -Wall -Werror -Wextra -std=c++98 -pedantic -fsanitize=address -g3

R			:= rm -rf

SRC_DIR		:= src/

OBJ_DIR		:=	obj/


SRC_FILES	:=	main zombieHorde Zombie

SRC			:= $(addprefix ${SRC_DIR},  ${addsuffix .cpp, ${SRC_FILES}})


OBJ			:= $(addprefix  ${OBJ_DIR},  ${addsuffix .o,${SRC_FILES}})

.SILENT:

all: ${NAME}

${NAME}:${OBJ}
	${C} ${OBJ} -o $@
	echo "$@ done"

${OBJ_DIR}%.o: ${SRC_DIR}%.cpp
	mkdir -p ${OBJ_DIR}
	${C} -c $<  -o $@
	echo "building $<"
clean:
	${R} ${NAME}

fclean: clean
	${R} ${OBJ_DIR}


re: fclean all


