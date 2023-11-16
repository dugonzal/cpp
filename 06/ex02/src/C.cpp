/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:49:19 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/16 13:52:34 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/C.hpp"


C::C(void) <% %>
		
C::~C(void) <% %>
		
C::C(const C &other)<% *this = other; %>
		
C &C::operator=(const C &other) <%

	if (&other == this)
		return (*this);
	*this = other;
	return (*this);
%>
