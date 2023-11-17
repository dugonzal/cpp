/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 07:52:00 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/17 13:57:41 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>

using std::cout;
using std::endl;

template <typename Tn>
Tn &min(Tn &x, Tn &y) <%
  return (x < y ? x: y);
%>

template <typename  Swp>
void swap(Swp &y, Swp &x) <%
	Swp tmp;

	tmp = x;
	x = y;
	y = tmp;
%>

template <typename Tu>
Tu &max(Tu &x, Tu &y) <%
  return (x > y ? x: y);
%>
