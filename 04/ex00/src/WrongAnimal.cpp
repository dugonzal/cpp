/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:20:01 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/10/06 13:45:30 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )<%
	std::cout << "constructor WrongAnimal" << std::endl;
%>

WrongAnimal::WrongAnimal(const std::string &_type ): type(_type)<%
	std::cout << "constructor with string" << std::endl;
%>

WrongAnimal::~WrongAnimal( void )<%
	std::cout << "destructor" << std::endl;
%>
	  
WrongAnimal::WrongAnimal( const WrongAnimal &other )<%
	*this = other;
%>
	  
WrongAnimal &WrongAnimal::operator=( const WrongAnimal &other ) <%
	type = other.type;
	return (*this);
%>

void	WrongAnimal::makeSound( void ) const <%
	std::cout << "WrongAnimal sound" << std::endl;
%>

