#!/bin/bash

make re

compare() {
	if [ "$1" = "$2" ]; then
		echo "Test exitoso. El resultado es el esperado: $1"
	else
		echo "Test fallido. El resultado actual ($1) no coincide con el esperado ($2)"
	fi
}

compare "$(./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +")" "42"

compare "$(./RPN "7 7 * 7 -")" "42"

compare "$(./RPN "1 2 * 2 / 2 * 2 4 - +")" "0"

compare "$(./RPN "(1 + 1)")" "Error"

compare "$(./RPN "2 3 * 4 + 5 -")" "5"

compare "$(./RPN "2 3 * 4 + -5 -")" "no hay suficientes elemetos en la lista para operar"
make fclean
