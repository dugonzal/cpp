/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:21:21 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/23 14:07:37 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap("") <%
	cout << "constructor ScavTrap default" << endl;
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
%>

ScavTrap::~ScavTrap( void ) <%
	cout << "destructor ScavTrap" << endl;
%>
ScavTrap::ScavTrap( string _name ): ClapTrap(_name)  <%
	cout << "constructor with name" << endl;
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
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

// ScavTrap <name> is now in Gatekeeper mode.
void	ScavTrap::guardGate( void ) <%
	cout << name << " is now in Gatekeeper mode." << endl;
%>
