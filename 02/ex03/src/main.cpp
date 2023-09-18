/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:46:28 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/18 13:09:20 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp" 
#include "../inc/Point.hpp" 

int		main( void ) <%

	const Point a(1, 1);
	const Point b(4, 1);
	const Point c(2, 4);
	const Point p;
	 

	//std::cout << a.getX() << std::endl;
	if ( bsp(a, b, c, p)) <%
	  std::cout << std::endl << "ok" << std::endl;
	%>
	else 
		std::cout << "ko" << std::endl;
	return 0;
%>
