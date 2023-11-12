/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:00:08 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/12 19:06:42 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/intern.hpp"


intern::intern(void) <%%>	

intern::~intern(void) <%%>
	  
intern::intern(const intern &other) <%
  	  
	*this = other;
%>

intern &intern::operator=(const intern &other) <%
	if (this == &other)
		return (*this);
	*this = other;
	return (*this);
%>
