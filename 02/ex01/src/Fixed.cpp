/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:41:14 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/13 03:28:07 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed( void ) <%
  std::cout << "Default constructor called" << std::endl;
%>

Fixed::Fixed( const int obj ) : tmp((int)static_cast<int>(obj)) <%
	std::cout << "Copy constructor called" << std::endl;
%>

Fixed::Fixed( const float obj ) : tmp((int)static_cast<int>(obj)) <%
	std::cout << "Copy constructor called" << std::endl;
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

float Fixed::toFloat( void ) const <%
  return ((float)static_cast<float>(tmp));
%>

int Fixed::toInt( void ) const<%
  return ((int)this->tmp >> this->fraccion);
%>

std::ostream &operator<<(std::ostream &os, const Fixed &obj ) <%
  os << obj.toFloat();
  return (os);
%>
