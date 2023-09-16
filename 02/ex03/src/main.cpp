/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:46:28 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/13 11:16:22 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp" 
#include "../inc/Point.hpp" 

/*
 canonico-ortodoxa:
 - constructor
 - constructor de copia
 - sobrecarga de operador de asigancion
 - destructor
*/

/*
 * funcion que indica si esta dentro o no del triangulo
*/

int	main( void ) <%
	Fixed a;
	Fixed b( Fixed( 1.0f ) * Fixed( 2 ) );
	
	a.setFixed(4.0f);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	return 0;
%>
