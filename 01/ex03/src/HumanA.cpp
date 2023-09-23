/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:55:15 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/04 00:54:30 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA( std::string const str, Weapon &weaponObj ) : \
weapon(weaponObj), name(str) {
  std::cout << "constructor HumanA" << std::endl;
}

void	HumanA::attack( void ) {
	std::cout << this->name << " atacks with their " \
	  << this->weapon.getType() << std::endl;
}

HumanA::~HumanA( void ) {
  std::cout << "destructor HumanA" << std::endl;
}
