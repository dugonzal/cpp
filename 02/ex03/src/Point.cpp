/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 22:53:46 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/19 00:55:01 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

Point::Point( void ) <%

%>
Point::~Point( void ) <%

%>

Point::Point( const Point & other ): x(other.x), y(other.y) <%
%>

Point::Point( const float a, const float b) : x(a), y(b) <%
%>

const Point &Point::operator=(const Point &other) <%
  if (this != &other) <%
	  (Fixed)x = other.x;
	  (Fixed)y = other.y;
  %>
  return (*this);
%>
float	 Point::getX(void) const <%
	return (x.toFloat());
%>

float Point::getY(void) const<%
	return (y.toFloat());
%> 
