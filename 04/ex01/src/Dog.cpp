/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 10:05:53 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/10/06 02:48:38 by Dugonzal         ###   ########.fr       */
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
	brain = other.brain;
	std::cout << brain << std::endl;

	brain = new Brain();
	std::cout << brain << std::endl;
	sleep(2);
%>

// me gusta cpp, pero es demasiado abstracto
const Dog &Dog::operator=( const Dog &other)<%
	Animal::operator=(other);
	return (*this);
%>

void	Dog::makeSound( void ) const <%
	std::cout << "yo soy un perro hua hua" << std::endl;
%>
