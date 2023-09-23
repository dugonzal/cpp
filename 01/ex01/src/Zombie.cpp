/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 10:10:18 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/04 11:57:02 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie( void ) {
  //this->_name = name;
}

Zombie::~Zombie( void ) {
  std::cout << this->name << " destroy Zombie " << std::endl;
}

void	Zombie::setName( std::string _name ) {
  this->name = _name;
}

void Zombie::announce( void ) {
  std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
