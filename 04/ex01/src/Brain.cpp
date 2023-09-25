/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:00:17 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/25 13:44:59 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain( void ) <%
	std::cout << "constructor Brain" << std::endl;

	  for (int i = 0; i < 100; i++)
		  ideas[i].clear(); 

%>

Brain::~Brain( void ) <%
  std::cout << "destructor Brain" << std::endl;
%>

Brain::Brain( const Brain &other ) <%
	*this = other;
%>

Brain &Brain::operator=( const Brain &other )<%
	(void)other;	
	return (*this);
%>
