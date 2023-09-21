/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:46:28 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/21 23:47:41 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp" 

/*
 canonico-ortodoxa:
 - constructor
 - constructor de copia
 - sobrecarga de operador de asigancion
 - destructor
 */
int		main( void ) {
	Fixed a;
	Fixed b;
//	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	a.setRawBits(30);

	b.setRawBits(30);

	std::cout << a << std::endl;
	std::cout << (a + b) << std::endl;
	/*std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
//	std::cout << b << std::endl;
//	std::cout << Fixed::max( a, b ) << std::endl;
*/	return 0;
}
