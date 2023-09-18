/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:46:28 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/18 21:10:28 by Dugonzal         ###   ########.fr       */
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
	//Fixed const b( Fixed( 20000.9000345f ));

	
	
	std::cout << a  << std::endl;
	std::cout << --a  << std::endl;
	std::cout << a  << std::endl;
	//std::cout << b  << std::endl;
	//sleep(1);
	//std::cout << ++a  << std::endl;
	
	return 0;
%>
