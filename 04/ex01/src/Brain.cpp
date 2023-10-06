/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:00:17 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/10/06 02:25:01 by Dugonzal         ###   ########.fr       */
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

void Brain::allIdeas( void ) <%
	for (int i = 0; i < 100; i++)
	  std::cout << ideas[i] << std::endl;
%>

Brain &Brain::operator=( const Brain &other )<%
	for (int i = 0; i < 100; i++)
	  ideas[i] = other.ideas[i];
	return (*this);
%>
