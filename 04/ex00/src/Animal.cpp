/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 00:05:04 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/24 10:13:38 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"


Animal::Animal( void ): type("default")<%
	cout << "constructor default Animal" << endl;
%>

Animal::Animal( const Animal &other ): type(other.type) <%
	*this = other;
%>

Animal::~Animal( void )<%
	cout << "destructor Animal" << endl;
%>

Animal::Animal( const string &_type ): type(_type)<%
	cout << "constructor type" << endl;
%>
	 
const string &Animal::getType( void ) const<%
	return (type);
%>

const Animal &Animal::operator=( const Animal & other )<%
	  type = other.getType();
	  return (*this);
%>
