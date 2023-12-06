#!/bin/bash

make re

compare() {
	if [ "$1" = "$2" ]; then
		echo "Test exitoso. El resultado es el esperado: $2"
	else
		echo "Test fallido. El resultado actual ($1) no coincide con el esperado ($resultado_esperado)"
	fi
}

compare "$(./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +")" "42"

compare "$(./RPN "7 7 * 7 -")" "42"

compare "$(./RPN "1 2 * 2 / 2 * 2 4 - +")" "0"

compare "$(./RPN "(1 + 1)")" "Error"

compare "$(./RPN "2 3 * 4 + 5 -")" "5"

compare "$(./RPN "2 3 * 4 + -5 -")" "5"
make fclean
