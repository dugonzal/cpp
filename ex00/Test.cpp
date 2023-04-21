/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 02:38:29 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/04/21 03:06:48 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::system("./megaphone  \"shhhhh... I think the students are asleep...\" > LogTest");  // Ejecuta el programa y redirige su salida a un archivo temporal

    std::ifstream infile("LogTest");  // Abre el archivo temporal para lectura
    std::string line;
    std::getline(infile, line);  // Lee la primera línea del archivo
    infile.close();  // Cierra el archivo
	std::cout << "La salida del programa es: " << line << std::endl;
    if (line == "shhhhh... I think the students are asleep...") {
        std::cout << "El programa funcionó correctamente" << std::endl;
		std::system("rm LogTest");  // Borra el archivo temporal
	} else {
        std::cout << "El programa no funcionó correctamente" << std::endl;
    }
    return 0;
}

