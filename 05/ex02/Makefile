# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 13:26:28 by dugonzal          #+#    #+#              #
#    Updated: 2023/11/10 11:49:10 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		:= Bureaucrat

C			:= c++ -g3 -Wall -Werror -Wextra -pedantic -fsanitize=address -std=c++98

SRC_DIR 	:= src/

OBJ_DIR 	:= obj/

SRC_FILES 	:= main Bureaucrat AForm ShrubberyCreationForm RobotomyRequestForm

SRC			:= $(addprefix ${SRC_DIR}, ${addsuffix .cpp, ${SRC_FILES}})

OBJ			:= $(addprefix ${OBJ_DIR}, ${addsuffix .o, ${SRC_FILES}})

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
