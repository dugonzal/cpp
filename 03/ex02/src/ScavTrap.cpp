/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:21:21 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/26 12:27:30 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap("") <%
	cout << "constructor ScavTrap default" << endl;
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
%>

ScavTrap::~ScavTrap( void ) <%
	cout << "destructor ScavTrap" << endl;
%>
ScavTrap::ScavTrap( string _name ): ClapTrap(_name)  <%
	cout << "constructor with name" << endl;
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
%>

//hay que inicializar la clase base explicitamente
ScavTrap::ScavTrap( const ScavTrap &other ): ClapTrap(other) <%
	*this = other;
%>

const ScavTrap	&ScavTrap::operator=( const ScavTrap &other ) <%
	if (this != &other) <%
		ClapTrap::operator=(other);
	%>
	return (*this);
%>

void	ScavTrap::guardGate( void ) <%
// ScavTrap <name> is now in Gatekeeper mode.
	cout << name << " is now in Gatekeeper mode." << endl;
%>
