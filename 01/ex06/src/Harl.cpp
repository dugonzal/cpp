/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:34:32 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/04 10:57:24 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Harl::Harl( void ) {

	std::cout << "constructor harlFilter" << std::endl << std::endl;
}

Harl::~Harl( void ) {

	std::cout << std::endl << "destructor harlFilter" << std::endl;
}


void	Harl::debug( void ) {

  std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special\
-ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void ) {
  std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void ) {

	std::cout << "[ WARNING ]"  << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming \
for years whereas you started working here since last month." << std::endl;
}


void	Harl::error ( void ){

	std::cout << "[ ERROR ]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string l  ) {

	std::string level[4]  = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int j = 0;

	for (int i = 0; i < 4; i++) {
		if (!l.compare(level[i]))
			break ;
		j++;
	}
	switch (j) {
		case(0):
			this->debug();
		case(1):
			this->info();
	    case (2):
			this->warning();
		case(3):
			this->error();
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
