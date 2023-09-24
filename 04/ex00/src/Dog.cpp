/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 10:05:53 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/24 10:15:03 by Dugonzal         ###   ########.fr       */
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

const Dog &Dog::operator=( const Dog &other)<%
	// me gusta cpp, pero es demasiado abstracto
	Animal::operator=(other);
	return (*this);

%>
