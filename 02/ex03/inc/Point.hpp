/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:12:05 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/13 12:08:59 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point <%

	private:
	  Fixed const y;
	  Fixed const x;
	public:
	  Point( void ) : y(0), x(0) {};
	  setPoint( void ) {

	  }  
%>;

std::iostream &operator<<(std::iostream os, const  Point obj) {


  os << obj.y;
  return (os);
}

#endif // !P
