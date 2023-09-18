/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:46:28 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/18 11:14:43 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp" 
#include "../inc/Point.hpp" 

int		main( void ) <%
	
	if (bsp(Point(4, 5), Point(3, 5.0f), Point(3, 5.666f),  Point(4, 5))) <%
	  std::cout << std::endl << "el punto esta dentro del triangulo" << std::endl;
	%>
	else 
		std::cout << "el punto esta fuera del triangulo" << std::endl;
	Point a;	
	std::cout << a.check(-3) << std::endl;
	return 0;
%>
