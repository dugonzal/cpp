# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/21 00:37:51 by Dugonzal          #+#    #+#              #
#    Updated: 2023/04/21 01:46:10 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = megaphone

C = clang++ -Wall -Wextra -Werror -std=c++98 -g3

Src = megaphone.cpp

Obj = $(SRCS:.cpp=.o)

all: $(Name)

$(Name): $(Obj)
	$(C) $(Src) -o $(Name)

%.o: %.cpp
	$(C) -c $< -o $@

clean:
	rm -f $(Name)

fclean: clean
	echo "fclean no implementado que podria hacer? si solo hay un archivo"

re: clean all

.PHONY: all clean fclean re
