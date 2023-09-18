/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:41:14 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/18 21:43:18 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed( void ) <%
  ///std::cout << "Default constructor called" << std::endl;
%>

Fixed::Fixed( const Fixed &obj ) <%
	//std::cout << "Copy constructor called" << std::endl;
	*this = obj;
%>

Fixed::Fixed( const int n ): tmp( (int)(n << fraccion) ) <%
	//std::cout << "constructor integer called  " << std::endl;
%>

Fixed::Fixed( const float n ) : tmp( ((float)n * ((float)(1 << fraccion))) ) <%
	//std::cout << "constructor float called" << std::endl;
%>

Fixed::~Fixed( void ) <%
  //std::cout << "Destructor default called" << std::endl;
%>

Fixed &Fixed::operator=( const Fixed &obj ) <%
 // std::cout << "assignation operator called" << std::endl;
  if ( this != &obj ) <%
	tmp = obj.tmp;
  %>
  return (*this);
%>

 int Fixed::getRawBits( void ) const <%
	//std::cout << "getRawBits member function called" << std::endl;
	return (tmp >> fraccion);
 %>

void Fixed::setRawBits( int const n ) <%
//	std::cout << "setRawBits member function called" << std::endl;
	tmp = n;
%>

float Fixed::toFloat( void ) const <%
	return ( (float)(tmp) / (float)(1 << fraccion) );
%>

int Fixed::toInt( void ) const <%
	return ( tmp >> fraccion );
%>

std::ostream	&operator<<(std::ostream &os, const Fixed &obj) <%
  os << obj.toFloat();
  return (os);
%>

bool	Fixed::operator>( const Fixed &obj1 ) const <%
	return ( getRawBits() > obj1.getRawBits() );
%>
bool	Fixed::operator<( const Fixed &obj1 ) const <%
	return ( getRawBits() < obj1.getRawBits() );
%>

bool	Fixed::operator<=( const Fixed &obj1 ) const <%
	return ( getRawBits() <= obj1.getRawBits() );
%>

bool	Fixed::operator>=( const Fixed &obj1 ) const <%
	return ( getRawBits() >= obj1.getRawBits() );
%>

bool	Fixed::operator==( const Fixed &obj ) const <%
	return ( getRawBits() == obj.getRawBits() );
%>

bool	Fixed::operator!=( const Fixed &obj ) const <%
	return ( getRawBits() != obj.getRawBits() );
%>

Fixed	&Fixed::operator+( const Fixed &obj ) <%
	setRawBits( getRawBits() + obj.getRawBits() );
	return (*this);
%>

Fixed	&Fixed::operator-( const Fixed &obj ) <%
	setRawBits( getRawBits() - obj.getRawBits() );
	return (*this);
%>

Fixed	Fixed::operator*( const Fixed &obj ) <%
	
	return ( Fixed( getRawBits() * obj.getRawBits() ) );
%>

Fixed	Fixed::operator/( const Fixed &obj ) <%
  return ( Fixed (  getRawBits() / obj.getRawBits() ) );
%>

Fixed	Fixed::operator++( void ) <%
  Fixed a(getRawBits());
  *this = a;
  tmp += 1;// no puedo usar tmp sin mover los bits
  return (*this); 
%>

Fixed	Fixed::operator++( int ) <%
  cout << "    _" << getRawBits() << endl;
  return (*this); 
 // return ( Fixed( a ) );
%>

Fixed	Fixed::operator--( int ) <%
  cout << "    _" << getRawBits() << endl;
  return (*this);
%>

Fixed	Fixed::operator--( void ) <% // predcremento
	int a = getRawBits();
	--a;
	Fixed _tmp(a);
	*this = _tmp;
	return (*this);
%>

const Fixed	&Fixed::min(const Fixed &a, const  Fixed &b ) <%
	return ( (a.getRawBits() < b.getRawBits()) ? a : b );
%>

const Fixed	&Fixed::min(Fixed &a, Fixed &b ) <%
	return ( (a.getRawBits() < b.getRawBits()) ? a : b );
%>

const Fixed &Fixed::max(const Fixed &a, const  Fixed &b ) <%
	return ( (a.getRawBits() > b.getRawBits()) ? a : b );
%>

const Fixed &Fixed::max(Fixed &a, Fixed &b ) <%
	return ( (a.getRawBits() > b.getRawBits()) ? a : b );
%>
