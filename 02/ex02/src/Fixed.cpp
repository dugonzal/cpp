/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:41:14 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/13 02:39:19 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed( void ) <%
	std::cout << "Default constructor called" << std::endl;
%>

Fixed::Fixed( const int obj ) : tmp(static_cast<int>(obj)) <%
	std::cout << "Copy constructor called" << std::endl;
%>

Fixed::Fixed( const float obj ) : tmp(static_cast<int>(obj)) <%
	std::cout << "Copy constructor called" << std::endl;
%>

Fixed::~Fixed( void ) <%
	std::cout << "Destructor default called" << std::endl;
%>

Fixed	&Fixed::operator=( const Fixed &obj ) <%
	std::cout << "assignation operator called" << std::endl;
	if ( this != &obj ) <%
		this->tmp = obj.tmp;
	%>
	return (*this);
%>

float	Fixed::toFloat( void ) const <%
	return ((float)static_cast<float>(tmp));
%>

int Fixed::toInt( void ) const<%
  return ( (int)this->tmp );
%>

std::ostream &operator<<(std::ostream &os, const Fixed &obj ) <%
  std::cout << "<< operator called" << std::endl;
  os << obj.getFixed();
  return (os);
%>

bool	Fixed::operator>( const Fixed &obj1 ) const <%
	return ( toInt() > obj1.toInt() );
%>

bool	Fixed::operator<( const Fixed &obj1 ) const <%
	return ( toInt() < obj1.toInt() );
%>

bool	Fixed::operator<=( const Fixed &obj1 ) const <%
	return ( toInt() <= obj1.toInt() );
%>

bool	Fixed::operator>=( const Fixed &obj1 ) const <%
	return ( toInt() >= obj1.toInt() );
%>

bool	Fixed::operator==( const Fixed &obj ) const <%
	return ( toInt() == obj.toInt() );
%>

bool	Fixed::operator!=( const Fixed &obj ) const <%
	return ( toInt() != obj.toInt() );
%>

void	Fixed::setFixed( int const n )<%
	tmp = n;
%>

int		Fixed::getFixed( void ) const <%
	return(tmp);
%>

Fixed	&Fixed::operator+( const Fixed &obj ) <%
	setFixed(toInt() + obj.toInt());
	return (*this);
%>


Fixed	Fixed::operator-( const Fixed &obj ) <%
  return ( Fixed( getFixed() + obj.getFixed() ) );
%>

Fixed	Fixed::operator*( const Fixed &obj ) <%
  return ( Fixed(tmp * obj.getFixed()) );
%>

Fixed	&Fixed::operator/( const Fixed &obj ) <%
  setFixed(toInt() / obj.toInt());
  return (*this);
%>

Fixed	Fixed::operator++( void ) <%
  int tmp = this->getFixed();
  tmp++;
  setFixed(tmp);
  return (*this);
%>

Fixed	Fixed::operator++( int ) <%
  ++tmp;
  return (*this);
%>

Fixed	Fixed::operator--( void ) <%
  int tmp = this->getFixed();
  std::cout << tmp << std::endl;
  tmp--;
  setFixed(tmp);
  return (*this);
%>

Fixed	Fixed::operator--( int ) <%
  --tmp;
  return (*this);
%>

const Fixed	&Fixed::min(const Fixed &a, const  Fixed &b ) <%
	return ( (a.getFixed() < b.getFixed()) ? a : b );
%>

const Fixed &Fixed::max(const Fixed &a, const  Fixed &b ) <%
	return ( (a.getFixed() > b.getFixed()) ? a : b );
%>
