/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:58:48 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/15 14:38:28 by Dugonzal         ###   ########.fr       */
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
	  void  setFixed( int const n );
      int   getFixed( void ) const;
      bool  operator>( const Fixed &obj ) const;
      bool  operator<( const Fixed &obj ) const;
      bool  operator<=( const Fixed &obj ) const;
      bool  operator>=( const Fixed &obj ) const;
      bool  operator==( const Fixed &obj ) const;
      bool  operator!=( const Fixed &obj ) const;
      Fixed &operator+( const Fixed &obj );
	  Fixed &operator-( const Fixed &obj );
      Fixed operator*( const Fixed &obj );
      Fixed &operator/( const Fixed &obj );
      Fixed operator++( void );
      Fixed operator++( int );
	  Fixed operator--( void );
      Fixed operator--( int );
	  static const Fixed    &min(const Fixed &a, const  Fixed &b );
      static const Fixed    &min(Fixed &a, Fixed &b );
      static const Fixed    &max(const Fixed &a, const  Fixed &b );
      static const Fixed    &max(Fixed &a, Fixed &b ); 
%>;

std::ostream	&operator<<(std::ostream &os, const Fixed &obj);
#endif
