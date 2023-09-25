/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:00:17 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/25 13:56:46 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain( void ): ideas(new std::string[100]) <%
	std::cout << "constructor Brain" << std::endl;

	  for (int i = 0; i < 100; i++)
		  ideas[i].clear();

	  ideas[0] = "hola";

	  std::cout << " <<<<<>>>>   "<< ideas[0] << std::endl;
%>

Brain::~Brain( void ) <%
	std::cout << "destructor Brain" << std::endl;
	delete [] ideas;
%>

Brain::Brain( const Brain &other ) <%
	*this = other;
%>

std::string *Brain::getIdeas( void ) const <%
	return (this->ideas);
%>

Brain &Brain::operator=( const Brain &other )<%
	ideas = other.getIdeas();
	return (*this);
%>
