/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:32:23 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/04/27 20:30:17 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phoneBook.class.hpp"

phoneBook::phoneBook (void) { // constructor de la clase
	std::cout << "Constructor" << std::endl;
}

phoneBook::~phoneBook (void) { //desctructor de la clase
	std::cout << "Destructor" << std::endl;
}

void phoneBook::openBook(void) {
std::cout << "----------------------------------" << std::endl;
std::cout << "| phoneBook empieza la diversion |" << std::endl;
std::cout << "|     tus opciones son:          |" << std::endl;
std::cout << "| 1. ADD                         |" << std::endl;
std::cout << "| 2. SEARCH                      |" << std::endl;
std::cout << "| 3. EXIT                        |" << std::endl;
std::cout << "|--------------------------------|" << std::endl;
}
