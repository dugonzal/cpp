/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:00:17 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/10/06 12:33:52 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain( void ) <%
	std::cout << "constructor Brain" << std::endl;
	ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
	  ideas[i].empty();
%>

Brain::~Brain( void ) <%
	std::cout << "destructor Brain" << std::endl;
	delete [] ideas;
%>

Brain::Brain( const Brain &other ) <%
	ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
	  ideas[i] = other.ideas[i];
%>

/*
void Brain::allIdeas( void ) <%
	for (int i = 0; i < 100; i++)
	  if (!ideas[i].empty())
			std::cout << ideas[i] << std::endl;
%>
*/ 

Brain &Brain::operator=( const Brain &other )<%
	if (this != &other) {
		delete [] ideas;
		ideas = new std::string[100];
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	return (*this);
%>
