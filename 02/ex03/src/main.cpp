/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:46:28 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/18 11:17:32 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp" 
#include "../inc/Point.hpp" 

int		main( void ) <%

	Point xd;	
	Point a(3, 45.66f);
	Point b(3, 45.66f);
	Point c(3, 45.66f);
	Point p(3, 45.66f);
	  
	if ( bsp(a, b, c, p) ) <%
	  std::cout << std::endl << "el punto esta dentro del triangulo" << std::endl;
	%>
	return 0;
%>
