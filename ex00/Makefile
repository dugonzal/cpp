# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/21 00:37:51 by Dugonzal          #+#    #+#              #
#    Updated: 2023/04/21 20:09:41 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

C = c++ -Wall -Wextra -Werror -std=c++98 -g3


SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(C) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(C) -c $< -o $@

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
