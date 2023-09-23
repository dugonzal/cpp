/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:55:15 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/08/13 08:32:05 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB( std::string str ) : name(str) {
  std::cout << "constructor HumanB" << std::endl;
}

HumanB::~HumanB( void ) {
  std::cout << "destructor HumanB" << std::endl;

}

void	HumanB::setWeapon( Weapon &_weapon ) {
	  this->weapon = &_weapon;
}

void	HumanB::attack( void ) {
	std::cout << this->name << " atacks with their " \
	  << this->weapon->getType() << std::endl;
}
