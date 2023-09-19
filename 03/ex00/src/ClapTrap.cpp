/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:30:11 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/19 13:05:10 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : name("bob -> (.*."), hitPoint(10), energyPoint(10), attackDamage(0)  <%
	std::cout << "constructor default" << std::endl;

%>


ClapTrap::~ClapTrap( void ) <%
	std::cout << "destructor default" << std::endl;
%>

ClapTrap::ClapTrap( std::string _name ) : name("bob -> (.*."), hitPoint(10), energyPoint(10), attackDamage(0) <%
	std::cout << "constructor with name" << std::endl;
	name = _name;
	cout << name << "   "<< hitPoint << "   " << attackDamage << "   " << hitPoint << endl;
%>

ClapTrap::ClapTrap( const ClapTrap &other ) <%
	std::cout << "constructor copy" << std::endl;
	if (this != &other) <%
		*this = other;
	%>
%>

const ClapTrap &ClapTrap::operator=(const ClapTrap &other) <%
	if (this != &other) <%
		*this = other;
	%>
	return (*this);
%>
