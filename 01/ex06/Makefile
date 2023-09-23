# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/02 13:11:41 by Dugonzal          #+#    #+#              #
#    Updated: 2023/09/04 10:58:03 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= harlFilter

C			:= c++ -g3 -Wall -Werror -Wextra -pedantic -fsanitize=address

R			:= rm -rf

SRC_DIR		:= src/

OBJ_DIR		:= obj/

SRC_FILES	:= main Harl

SRC			:= $(addprefix ${SRC_DIR}, ${addsuffix .cpp, ${SRC_FILES}})

.SILENT:

all: ${NAME}

${NAME}: ${OBJ}
	${C} ${SRC} -o $@
	echo "done -> $@"


clean:
	${R} ${NAME}
fclean: clean

re: fclean all
