/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:30:11 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/18 18:39:59 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap( void ) <%

	std::cout << "constructor default" << std::endl;
%>


ClapTrap::~ClapTrap( void ) <%

	std::cout << "destructor default" << std::endl;
%>

ClapTrap::ClapTrap( std::string _name ) <%
	std::cout << "constructor with name" << std::endl;

	name = _name;
%>

ClapTrap::ClapTrap( const ClapTrap &other ) <%
	std::cout << "constructor copy" << std::endl;
	name = other.name;
%>

const ClapTrap &ClapTrap::operator=(const ClapTrap &other) <%

	if (this != &other) <%
		*this = other;
	%>
	return (*this);
%>
