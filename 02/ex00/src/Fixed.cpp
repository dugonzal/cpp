/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:41:14 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/21 23:55:16 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed( void ) : tmp(0) <%
  std::cout << "Default constructor called" << std::endl;
%>

Fixed::Fixed( const Fixed &obj ) : tmp(obj.tmp) <%
	std::cout << "Copy constructor called" << std::endl;
%>

Fixed::~Fixed( void ) <%
  std::cout << "Destructor default called" << std::endl;
%>

Fixed &Fixed::operator=( const Fixed &obj ) <%
  std::cout << "assignation operator called" << std::endl;
  if ( this != &obj ) <% // evitamos la autoasignacion con esta condicion, para que no se copie asi mismo
	this->tmp = obj.tmp;
 %>
  return (*this);
%>

 int Fixed::getRawBits( void ) const <%
	std::cout << "getRawBits member function called" << std::endl;
	return (this->tmp);
 %>

void Fixed::setRawBits( int const n ) <%
	std::cout << "setRawBits member function called" << std::endl;
	tmp =  (n);
%>
