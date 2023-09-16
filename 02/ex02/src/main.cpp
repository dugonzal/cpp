/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:46:28 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/16 16:18:02 by Dugonzal         ###   ########.fr       */
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

int		main( void ) <%
	Fixed a( Fixed( 50.99923f ) );
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout  << std::endl;
	
	std::cout << a << std::endl;
	std::cout  << std::endl;
	std::cout  << std::endl;
	std::cout  << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a + a<< std::endl;
	std::cout  << std::endl;
	std::cout  << std::endl;
	std::cout  << std::endl;
	std::cout  << std::endl;
	std::cout  << std::endl;
	std::cout << a + b  << std::endl;
	std::cout << a + b  << std::endl;
	std::cout << a * b  << std::endl;
	std::cout  << std::endl;
	std::cout  << std::endl;
	std::cout  << std::endl;

	return 0;
%>
