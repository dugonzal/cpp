/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:46:28 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/17 13:16:16 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp" 
#include "../inc/Point.hpp" 

int		main( void ) <%
	
	if (bsp(Point(4, 5), Point(3, 5.0f), Point(3, 5.666f),  Point(4, 5))) <%
	  std::cout << "xd" << std::endl;
	%>	
	return 0;
%>
