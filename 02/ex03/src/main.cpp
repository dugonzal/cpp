/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:46:28 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/19 01:01:40 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp" 
#include "../inc/Fixed.hpp"

int		main( void ) <%
	(( bsp(Point(1, 1), Point(4, 1), \
	Point(2, 3), Point(2, 1))) \
	? (cout << "ok" << endl) : (cout << "ko" << endl) );
	return 0;
%>
