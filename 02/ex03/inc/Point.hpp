/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 22:43:13 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/19 00:38:16 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point <%
	private:
	  Fixed const x;
	  Fixed const y;
	public:
		Point( void );
		~Point( void );
		Point( const Point & other );
		Point( const float a, const float b);
		const Point &operator=(const Point &other);
		float	getX(void) const;
		float	getY(void) const;
%>;

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif

