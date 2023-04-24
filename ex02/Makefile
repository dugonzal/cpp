Name := Acuount.cOO

C := c++ -g3

Cflags := -Wall -Wextra -Werror -std=c++98	

SrcDir := Src/

ObjDir := Obj/

SrcFiles := Account.cpp

src := $(addprefix $(SrcDir), $(SrcFiles)) 

Obj := $(addprefix $(ObjDir), $(SrcFiles:.cpp=.o))


$(Name): $(Obj)
	$(C) $(Cflags) -o $(Name)

$(ObjDir)%.o: $(SrcDir)%.cpp
	@mkdir -p $(ObjDir)
	printf ( %s ) $(Obj) | tr ' ' '
	$(C) $(Cflags) -c $< -o $@

all: $(Name)

clean:
	rm -f $(Name)

fclean: clean
	rm -rf $(ObjDir)

re: fclean all

.PHONY: all clean fclean re
