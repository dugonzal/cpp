/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:58:48 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/13 03:28:32 by dugonzal         ###   ########.fr       */
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
	  Fixed( const int obj );
	  Fixed( const float obj );
	  ~Fixed( void );
	  Fixed &operator=( const Fixed &obj );
	  float toFloat( void ) const;
	  int toInt( void ) const;
%>;

std::ostream &operator<<(std::ostream &os, const Fixed &obj );

#endif
