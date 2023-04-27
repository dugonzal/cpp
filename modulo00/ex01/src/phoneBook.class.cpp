/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:32:23 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/04/27 21:13:10 by Dugonzal         ###   ########.fr       */
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
  
  std::cout << GREEN << "----------------------------------"  << RESET << std::endl;
  std::cout << GREEN << "|     phoneBook que empiece       |" << RESET << std::endl;
  std::cout << GREEN << "|         la diversion            |" << RESET << std::endl;
  std::cout << GREEN << "|       tus opciones son:         |" << RESET << std::endl;
  std::cout << GREEN << "| 1. ADD   2. SEARCH   3. EXIT    |" << RESET << std::endl;
  std::cout << GREEN << "|        By: Dugonzal             |" << RESET << std::endl;
  std::cout << GREEN << "----------------------------------"  << RESET << std::endl;
  while (42)
  {
	std::cout << "Introduce una opcion: ";
	std::cin >> option;
	if (option == "ADD" || option == "1")
	  std::cout << BLUE << "ADD" << RESET << std::endl;
	else if (option == "SEARCH" || option == "2")
	  std::cout << GREEN << "SEARCH" << RESET << std::endl;
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
