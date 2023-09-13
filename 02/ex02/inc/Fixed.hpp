/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:58:48 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/13 10:58:33 by Dugonzal         ###   ########.fr       */
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
	  void	setFixed( int const n );
	  int	getFixed( void ) const;
	  bool	operator>( const Fixed &obj ) const;
	  bool	operator<( const Fixed &obj ) const;
	  bool	operator<=( const Fixed &obj ) const;
	  bool	operator>=( const Fixed &obj ) const;
	  bool	operator==( const Fixed &obj ) const;
	  bool	operator!=( const Fixed &obj ) const;
	  Fixed	&operator+( const Fixed &obj );
	  Fixed	operator-( const Fixed &obj );
	  Fixed	operator*( const Fixed &obj );
	  Fixed	&operator/( const Fixed &obj );
	  Fixed	operator++( void );
	  Fixed	operator++( int );
	  Fixed	operator--( void );
	  Fixed	operator--( int );
	  static const Fixed	&min(const Fixed &a, const  Fixed &b );
	  static const Fixed	&min(Fixed &a, Fixed &b );
	  static const Fixed	&max(const Fixed &a, const  Fixed &b );
	  static const Fixed 	&max(Fixed &a, Fixed &b ); 
%>;

std::ostream &operator<<(std::ostream &os, const Fixed &obj );

#endif
