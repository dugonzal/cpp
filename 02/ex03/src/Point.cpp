/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:55:38 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/18 11:13:10 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"


Point::Point( void ): x(0), y(0) <%
	std::cout << "constructor default" << std::endl;
%>

Point::~Point( void ) <%
	std::cout << "destructor default" << std::endl;
%>

Point::Point( const Point &other ) <%
	std::cout << "constructor copy" << std::endl;
	(Fixed)x = other.getX();
	(Fixed)y = other.getY();
%>


Point::Point( const float a, const float b ): x(a), y(b) <%
	std::cout << "constructor arguments" << std::endl;

%>

Point &Point::operator=(const Point &other) <%
	if (this != &other)
		*this = other;
	return (*this);
%>

std::ostream &operator<<(std::ostream &os, Point const &other) <%
	os << other.getY().toFloat() << std::endl;
	os << other.getY().toFloat() << std::endl;
	return (os);
%>

Fixed Point::getX( void ) const <%
  	return (x);
%>

Fixed Point::getY( void ) const <%
	return (y);
%>

int		Point::check(int const a) <%
	return ( (a >= 0) ? a : -a );
%>
