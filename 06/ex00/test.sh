#!/bin/bash

# Ejecutar ScalarConvert con la entrada "O" y agregar un salto de línea
./ScalarConvert "O"
echo -e "\n"

# Pruebas extremas
./ScalarConvert "   ABC   123   XYZ   "
echo -e "\n"

./ScalarConvert "1.23e100000"
echo -e "\n"

./ScalarConvert "cadena_no_convertible"
echo -e "\n"

./ScalarConvert "1e-100000"
echo -e "\n"

./ScalarConvert "99999999999999999999999999999999999999999999999"
echo -e "\n"

./ScalarConvert "1e308"
echo -e "\n"
