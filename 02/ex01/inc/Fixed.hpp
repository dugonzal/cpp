/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:58:48 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/14 11:32:11 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed <%
	private:
	  int tmp;
	  static const int fraccion = 8;
	
	public:
	  Fixed( void );
	  Fixed( const Fixed &obj );
	  Fixed( const int n );
	  Fixed( const float n );
	  ~Fixed( void );
	  Fixed& operator=( const Fixed &obj );
	  int getRawBits( void ) const;
	  void setRawBits( int const raw );
	  float toFloat( void ) const;
	  int toInt( void ) const;
%>;

std::ostream	&operator<<(std::ostream &os, const Fixed &obj);
#endif
