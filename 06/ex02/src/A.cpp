/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:32:48 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/16 13:41:41 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/A.hpp"

A::A(void)<% %>

A::~A(void)<% %>

A::A(const A &other) <% *this = other; %>
	  
A &A::operator=(const A &other) <%
	if (&other == this)
	  return (*this);
	*this = other;
	return (*this);
%>
