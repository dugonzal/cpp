/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:19:27 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/18 13:13:26 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"
#include "../inc/Fixed.hpp"

/*  formula -> :  ˊ
 area = (x1⋅*(y2−y3) + x2⋅*(y3−y1) + x3⋅*(y1−y2))

( (x1 * (y2 - y3) 
  + x2 * (y3 - y1) 
  + x3 * (y1 - y2) )  / 2 ) 
*/

int		check(int const a) <%
	return ( (a >= 0) ? a : -a );
%>

int calculateArea(Point a, Point b, Point c) {
    return check(abs(a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) + 
                    b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) + 
                    c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()))) / 2;
%>

bool bsp( Point const &a, Point const &b, Point const &c, \
  Point const &point) <%
  float a1  = calculateArea(a, b, c);  
  float a2  = calculateArea(point, a, b);  
  float a3  = calculateArea(point, a, c);  
  float a4  = calculateArea(point, b, c);  
  float result = a2 + a3 + a4;
  if (result == a1) 
	  std::cout << "result" << result  << std::endl;	
  else 
	  std::cout << result << "<-   ->" << a1  << std::endl;
  return (result);
%>
