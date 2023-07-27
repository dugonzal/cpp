# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/21 00:37:51 by Dugonzal          #+#    #+#              #
#    Updated: 2023/07/25 12:39:27 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

C = c++ -Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(C) obj/$(OBJ) -o $(NAME)

%.o: %.cpp
	$(C) -c $< -o $@
	mkdir -p obj/; mv $@ obj/
clean:
	rm -f $(NAME)

fclean: clean
	rm -rf obj/

re: fclean all

test: re
	$(C) test.cpp -o test && ./test && rm -f test; make fclean

.PHONY: all clean fclean re
