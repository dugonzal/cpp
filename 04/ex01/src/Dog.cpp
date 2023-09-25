/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 10:05:53 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/24 16:00:09 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog( void ): Animal("Dog") <%
	std::cout << "constructor Dog" << std::endl;
%>

Dog::~Dog( void )<%
	std::cout << "destructor Dog" << std::endl;
%>

Dog::Dog( const Dog &other ): Animal(other) <%
	*this = other;
%>

// me gusta cpp, pero es demasiado abstracto
const Dog &Dog::operator=( const Dog &other)<%
	Animal::operator=(other);
	return (*this);
%>
