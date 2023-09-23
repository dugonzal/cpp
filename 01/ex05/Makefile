# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/02 13:11:41 by Dugonzal          #+#    #+#              #
#    Updated: 2023/09/02 14:42:05 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= Harl

C			:= c++ -g3 -Wall -Werror -Wextra -pedantic -fsanitize=address

R			:= rm -rf

SRC_DIR		:= src/

OBJ_DIR		:= obj/

SRC_FILES	:= main Harl


SRC			:= $(addprefix ${SRC_DIR}, ${addsuffix .cpp, ${SRC_FILES}})

OBJ			:= $(addprefix ${OBJ_DIR}, ${addsuffix, .o, ${SRC_FILES}})

.SILENT:

all: ${NAME}

${NAME}: ${OBJ}
	${C} ${SRC} -o $@
	echo "done -> $@"


#${OBJ_DIR}%.o: ${SRC_DIR}%.cpp
#	mkdir -p ${OBJ_DIR}
#	${C} -c $< -o $@ 


clean:
	${R} ${NAME}
fclean: clean

re: fclean all
