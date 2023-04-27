/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:32:23 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/04/27 20:53:30 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phoneBook.class.hpp"

phoneBook::phoneBook (void) { // constructor de la clase
	std::cout << "Constructor" << std::endl;
}

phoneBook::~phoneBook (void) { //desctructor de la clase
	std::cout << "Destructor" << std::endl;
}

void phoneBook::Book(void) {
  std::string option;
  std::cout << "----------------------------------" << std::endl;
  std::cout << "|     phoneBook que empiece      |" << std::endl;
  std::cout << "|         la divercion           |" << std::endl;
  std::cout << "|       tus opciones son:        |" << std::endl;
  std::cout << "| 1. ADD   2. SEARCH   3. EXIT   |" << std::endl;
  std::cout << "|        By: Dugonzal            |" << std::endl;
  std::cout << "|--------------------------------|" << std::endl;
  while (42)
  {
	std::cout << "Introduce una opcion: ";
	std::cin >> option;
	if (option == "ADD" || option == "1")
	  std::cout << "ADD" << std::endl;
	else if (option == "SEARCH" || option == "2")
	  std::cout << "SEARCH" << std::endl;
	else if (option == "EXIT" || option == "3")
	{
	  std::cout << "EXIT" << std::endl;
	  exit(0);
	}
	else
	{
	  std::cout << "Opcion no valida" << std::endl;
	  continue;
	}
  }
}
