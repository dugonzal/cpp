/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:42:30 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/04/26 12:14:21 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
#include <iostream>
#include <cstdlib>
#include <fstream>

void	test0(void) {
  std::string cmd = "./megaphone \"shhhhh... I think the students are asleep...\" > output.txt";
  std::system (cmd.c_str());

  std::ifstream infile("output.txt");
  std::string output;
  std::getline(infile, output);
  infile.close();
  std::cout << output << "   salida del programa" << std::endl << std::endl;
  std::string expected_output = "shhhhh... I think the students are asleep...";
  std::cout << expected_output << "   salida esperada" << std::endl << std::endl;
  if (output == expected_output) {
		std::cout << "El programa funcionó correctamente" << std::endl;
	} else {
		std::cout << "El programa no funcionó correctamente" << std::endl;
	}
}

int main() {

	test0();
    std::system("./megaphone > output.txt"); // Ejecuta el binario y redirige su salida a output.txt
	std::ifstream infile("output.txt"); // Abre el archivo de salida para lectura
    std::string output;
    std::getline(infile, output); // Lee la primera línea del archivo
    infile.close(); // Cierra el archivo

	std::cout << output << "   salida del programa" << std::endl << std::endl;
    std::string expected_output = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << expected_output << "   salida esperada" << std::endl << std::endl;
    if (output == expected_output) {
        std::cout << "El programa funcionó correctamente" << std::endl;
    } else {
        std::cout << "El programa no funcionó correctamente" << std::endl;
    }
    std::system("rm output.txt"); // Borra el archivo de salida
    return 0;
}

