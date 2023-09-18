/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:19:27 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/18 11:19:01 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"
#include "../inc/Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, \
Point const point) <%

  std::cout << a << b << c << point << std::endl;
  return (true);
%>

int		check(int const a) <%
	return ( (a >= 0) ? a : -a );
%>
