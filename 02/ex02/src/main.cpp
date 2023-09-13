/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:46:28 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/13 03:14:22 by Dugonzal         ###   ########.fr       */
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
int	main( void ) <%
	Fixed a;
	Fixed b( Fixed( 1 ) * Fixed( 2 ) );
	a.setFixed(3.5f);
	std::cout << b << std::endl << std::endl << std::endl;

	std::cout << a << std::endl <<  std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl << std::endl << std::endl;
	std::cout << b << std::endl << std::endl << std::endl;
	std::cout << a << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a / b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a - b + a * a + b - a * 2 << std::endl;
	std::cout << a - b + a << std::endl;
	std::cout << a / b << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
%>
