/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:00:17 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/10/03 16:18:50 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain( void ): ideas(new std::string[100]) <%
	std::cout << "constructor Brain" << std::endl;
	  for (int i = 0; i < 100; i++)
		  ideas[i].clear();
%>

Brain::~Brain( void ) <%
	std::cout << "destructor Brain" << std::endl;
	delete [] ideas;
%>

Brain::Brain( const Brain &other ) <%
  	delete [] this->getIdeas();

	ideas = other.ideas;
%>

std::string *Brain::getIdeas( void ) const <%
	return (this->ideas);
%>

Brain &Brain::operator=( const Brain &other )<%
  	delete ideas;

	*(ideas) = *(other.ideas);
	return (*this);
%>
