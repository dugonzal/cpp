/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:21:21 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/22 23:23:36 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap(NULL) <%
	cout << "constructor ScavTrap default" << endl;
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
%>

ScavTrap::~ScavTrap( void ) <%
	cout << "desctructor ScavTrap" << endl;
%>
ScavTrap::ScavTrap( string _name ): ClapTrap(_name)  <%
	cout << "constructor with name ScavTrap" << endl;
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
%>

//hay que inicializar la clase base explicitamente
ScavTrap::ScavTrap( const ScavTrap &other ): ClapTrap(other) <%
	*this = other;
%>

const ScavTrap	&ScavTrap::operator=( const ScavTrap &other ) <%
	cout << "constructor copy ScavTrap" << endl;
	if (this != &other) <%
		ClapTrap::operator=(other);
	%>
	return (*this);
%>

void	ScavTrap::guardGate( void ) <%
	cout << "klk" << endl;
%>
