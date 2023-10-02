/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 10:05:53 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/28 11:40:13 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog( void ): Animal("Dog") <%
	cout << "constructor Dog" << endl;
%>

Dog::~Dog( void )<%
	cout << "destructor Dog" << endl;
%>

Dog::Dog( const Dog &other ): Animal(other) <%
	*this = other;
%>

// me gusta cpp, pero es demasiado abstracto
const Dog &Dog::operator=( const Dog &other)<%
	Animal::operator=(other);
	return (*this);
%>

void	Dog::makeSound( void ) const <%
	cout << "yo soy un perro hua hua" << endl;
%>
