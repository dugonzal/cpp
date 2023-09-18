/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:57:13 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/18 11:14:59 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point <%
	private:
		Fixed const x; 
		Fixed const y; 

	public:
		Point( void );
		Point( const Point &other ) ;
		Point( const float a, const float b );
		~Point( void ) ;
		Point	&operator=(const Point &other);
		Fixed	getX( void ) const;
		Fixed	getY( void ) const;
	  int		check(int const a);
%>;

std::ostream &operator<<(std::ostream &os, Point const &o);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
