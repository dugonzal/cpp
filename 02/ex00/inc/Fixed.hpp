/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:58:48 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/06 12:56:54 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>

class Fixed <%
	private:
	  int tmp;
	  static const int fraccion = 8;
	
	public:
	  Fixed( void );
	  Fixed( const Fixed &obj );
	  ~Fixed( void );
	  Fixed& operator=( const Fixed &obj );
	  int getRawBits( void ) const;
	  void setRawBits( int const raw );
%>;

#endif
