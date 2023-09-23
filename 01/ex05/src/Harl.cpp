/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:34:32 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/04 01:12:33 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Harl::Harl( void ) {
	std::cout << "constructor harl" << std::endl << std::endl;
}

Harl::~Harl( void ) {
	std::cout << std::endl << "destructor harl" << std::endl;
}


void	Harl::debug( void ) {
  std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special\
-ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void ) {
  std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming \
for years whereas you started working here since last month." << std::endl;
}


void	Harl::error ( void ){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int	Harl::complain( std::string level ) {
	switch (std::atoi(level.data())) {
	  case(1): {
		  this->debug();
		  break;
	  } case(2): {
		  this->info();
		  break;
	  }	case (3): {
		  this->warning();
		  break;
	  }	case(4): {
		  this->error();
		  break;
	  }
	}
	return ( 0 );
}
