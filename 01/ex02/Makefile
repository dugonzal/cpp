# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/07 13:43:48 by Dugonzal          #+#    #+#              #
#    Updated: 2023/08/08 09:44:51 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= HIS_THIS_IS_BRAIN 

C			:= c++ -std=c++98 -Wall -Werror -Wextra -pedantic -fsanitize=address

SRC_DIR		:= src/

SRC_FILES	:= main

SRC			:= $(addsuffix .cpp, ${SRC_FILES})

all: ${NAME}

${NAME}:
	${C} ${SRC} -o $@

clean:
	rm -rf ${NAME}

fclean: clean
	@echo "done"

re: fclean all 
