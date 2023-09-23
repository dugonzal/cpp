/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:38:36 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/03 19:51:51 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie( std::string name ) {
	if (name.empty()) {
		std::cout << "Zombie name is empty" << std::endl;
		this->_name = "Zombie"; // estaria guay nombre random
	}
	this->_name = name;
}

Zombie::~Zombie( void ) {
	std::cout << this->_name << " Zombie  clean" << std::endl;
}

void	Zombie::announce( void ) {
	std::cout <<  this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

