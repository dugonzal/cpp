/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:19:27 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/19 00:58:48 by Dugonzal         ###   ########.fr       */
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

int calculateArea(const Point &a, const Point &b, const Point &c) {
  return abs( a.getX() * ( b.getY() - c.getY() ) \
         + b.getX() * ( c.getY() - a.getY() ) \
         + c.getX() * ( a.getY() - b.getY() )) / 2;
}

bool bsp( Point const a, Point const b, Point const c, Point const point) <%
  float totalArea  = calculateArea(a, b, c);  
  float a1  = calculateArea(point, a, b);  
  float a2  = calculateArea(point, b, c);  
  float a3  = calculateArea(point, c, a);  
  return (a1 + a2 + a3 <= totalArea); 
%>
