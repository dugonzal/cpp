/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:23:54 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/08/13 09:29:58 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon( std::string str ) {
	std::cout  << "constructor weapon" << std::endl;
	this->type = str;
}

Weapon::~Weapon( void ) {

	std::cout  << "destructor weapon" << std::endl;
}


std::string Weapon::getType( void ) {

	std::string const &tmp = this->type;

	return (tmp);
}

void	Weapon::setType( std::string const  str ) {
	this->type = str;
}
