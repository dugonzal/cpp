/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:41:14 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/21 23:56:46 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed( void ) : tmp(0) <%
  std::cout << "Default constructor called" << std::endl;
%>

Fixed::Fixed( const Fixed &obj ) <%
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
%>

Fixed::Fixed( const int n ): tmp(n << fraccion) <%
	std::cout << "constructor integer called  " << std::endl;

%>

Fixed::Fixed( const float n ) : tmp(static_cast<int>(n * pow(2, fraccion))) <%
	std::cout << "constructor float called" << std::endl;
%>

Fixed::~Fixed( void ) <%
  std::cout << "Destructor default called" << std::endl;
%>

Fixed &Fixed::operator=( const Fixed &obj ) <%
  std::cout << "assignation operator called" << std::endl;
  if ( this != &obj ) <%
	this->tmp = obj.tmp;
  %>
  return (*this);
%>

 int Fixed::getRawBits( void ) const <%
	std::cout << "getRawBits member function called" << std::endl;
	return (this->tmp);
 %>

void Fixed::setRawBits( int const raw ) <%
	std::cout << "setRawBits member function called" << std::endl;
	this->tmp = (raw * (1 << fraccion) );
%>

float Fixed::toFloat( void ) const <%
	return (static_cast<float>(tmp) / pow(2, fraccion));
%>

int Fixed::toInt( void ) const <%
	return ((int)tmp >> (int)(fraccion));
%>

std::ostream	&operator<<(std::ostream &os, const Fixed &obj) <%
  os << obj.toFloat();
  return (os);
%>
