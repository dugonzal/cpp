/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 10:05:53 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/10/06 12:43:43 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog( void ): Animal("Dog"), brain(new Brain) <%
	std::cout << "constructor Dog" << std::endl;
%>

Dog::~Dog( void )<%
	std::cout << "destructor Dog" << std::endl;
	delete brain;
%>

Dog::Dog( const Dog &other ): Animal(other) <%
	brain = new Brain(*(other.brain));
//	sleep(2);
%>

// me gusta cpp, pero es demasiado abstracto
const Dog &Dog::operator=( const Dog &other)<%
	std::cout << brain << std::endl;
	if (this != &other) {
		delete brain;
		brain = new Brain();
		*(brain) = *(other.brain);
		Animal::operator=(other);
	}
	std::cout << brain << std::endl;
	sleep(2);
	return (*this);
%>

void	Dog::makeSound( void ) const <%
	std::cout << "yo soy un perro hua hua" << std::endl;
%>
