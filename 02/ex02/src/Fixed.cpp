/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:41:14 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/15 14:38:38 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed( void ) <%
  std::cout << "Default constructor called" << std::endl;
%>

Fixed::Fixed( const Fixed &obj ) <%
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
%>

Fixed::Fixed( const int n ): tmp(n << fraccion) <%
	std::cout << "constructor integer called  " << std::endl;
	//std::cout << tmp << "here" << std::endl;

%>

Fixed::Fixed( const float n ) : tmp( ( n * ((float)(1 << fraccion) )) ) <%
	std::cout << "constructor float called" << std::endl;
%>

Fixed::~Fixed( void ) <%
  std::cout << "Destructor default called" << std::endl;
%>

Fixed &Fixed::operator=( const Fixed &obj ) <%
  std::cout << "assignation operator called" << std::endl;
  if ( this != &obj ) <%
	tmp = obj.tmp;
  %>
  return (*this);
%>

 int Fixed::getRawBits( void ) const <%
	std::cout << "getRawBits member function called" << std::endl;
	return (this->tmp);
 %>

void Fixed::setRawBits( int const raw ) <%
	std::cout << "setRawBits member function called" << std::endl;
	tmp = raw;
%>

float Fixed::toFloat( void ) const <%
	return ( (tmp) / (1 << fraccion) );
%>

int Fixed::toInt( void ) const <%
	return ( tmp >> (int)(fraccion) );
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

	int tmp1 = getRawBits();
	int tmp2 = obj.getRawBits();

	setRawBits(tmp1 + tmp2);
	std::cout << tmp << std::endl;
	return (*this);
%>

Fixed	&Fixed::operator-( const Fixed &obj ) <%
	setRawBits(tmp - obj.getRawBits());
	return (*this);
%>

Fixed	Fixed::operator*( const Fixed &obj ) <%
	Fixed(getRawBits() * obj.getRawBits());
	return (*this);
%>

Fixed	&Fixed::operator/( const Fixed &obj ) <%
  if (obj.tmp != 0 && tmp != 0)
	 setRawBits(tmp / obj.tmp);
  return (*this);
%>

Fixed	Fixed::operator++( void ) <%
  Fixed a;

  float tmp = toFloat();
  ++tmp;
  a.setRawBits(tmp);
  std::cout << "   : -> "	<< "  aa" << a <<  tmp<< std::endl;
  return (*this);
%>

Fixed	Fixed::operator++( int ) <%
	int	a;

	Fixed tmp(*this);
	

	a = getRawBits();

	++a;
	setRawBits(a);
	return ( *this );
%>


Fixed	Fixed::operator--( void ) <%
  --tmp;
  return (*this);
%>

Fixed	Fixed::operator--( int ) <%
  int tmp = this->getRawBits();
  tmp--;
  setRawBits(tmp) ;
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
