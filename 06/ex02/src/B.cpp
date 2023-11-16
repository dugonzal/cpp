/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:46:10 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/16 13:48:07 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/B.hpp"


B::B(void) <% %>

B::~B(void) <% %>

B::B(const B &other) <% *this = other; %>

B &B::operator=(const B &other) <%
	if (&other == this)
	  return (*this);
	*this = other;
	return (*this);
%>
