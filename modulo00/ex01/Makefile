# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 18:29:10 by Dugonzal          #+#    #+#              #
#    Updated: 2023/04/27 19:34:11 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := phoneBook

C := c++ -Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address -pedantic

R := rm -rf

SRC_DIR := src/

OBJ_DIR := obj/

SRC_FILES := main phoneBook.class

SRC := $(addprefix $(SRC_DIR), $(addsuffix .cpp, $(SRC_FILES)))

OBJ := $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

$(NAME): $(OBJ)
	$(C) $(OBJ) -o $(NAME) && ./$(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	$(C) -c $< -o $@

all: $(NAME)


clean:
	$(R) $(NAME)

fclean: clean
	$(R) $(OBJ_DIR)
re: fclean all
