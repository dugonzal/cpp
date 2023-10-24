# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 13:26:28 by dugonzal          #+#    #+#              #
#    Updated: 2023/10/24 14:40:21 by dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		:= a

C			:= c++ -Wall -Werror -Wextra -pedantic -fsanitize=address

SRC_DIR 	:= src/

OBJ_DIR 	:= obj/

SRC_FILES 	:= main Bureaucrat

SRC			:= $(addprefix ${SRC_DIR}, ${addsuffix .cpp, ${SRC_FILES}})

OBJ			:= $(addprefix ${OBJ_DIR}, ${addsuffix .o, ${SRC_FILES}  } )

all: ${NAME}

${NAME}: ${OBJ}
	${C} ${OBJ} -o $@

${OBJ_DIR}%.o: ${SRC_DIR}%.cpp
	mkdir -p ${OBJ_DIR}
	${C} -c $< -o $@

clean:
	rm -rf $@
fclean: clean
	rm -rf ${OBJ_DIR}
re: fclean all
