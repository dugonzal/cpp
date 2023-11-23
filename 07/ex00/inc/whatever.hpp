/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 07:52:00 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/23 11:07:18 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>

using std::cout;
using std::endl;

template <typename MIN>
MIN &min(MIN &x, MIN &y) <%
  return (x < y ? x: y);
%>

template <typename  SWAP>
void swap(SWAP &y, SWAP &x) <%
	SWAP tmp;

	tmp = x;
	x = y;
	y = tmp;
%>

template <typename MAX>
MAX &max(MAX &x, MAX &y) <%
  return (x > y ? x: y);
%>
