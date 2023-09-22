/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:21:21 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/22 14:46:50 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap("") <%
	cout << "constructor ScavTrap default" << endl;
	setHitPoint(50);
	setEnergyPoint(100);
	setAttackDamage(10);
%>

ScavTrap::~ScavTrap( void ) <%
	cout << "desctructor ScavTrap" << endl;
%>
ScavTrap::ScavTrap( string _name ): ClapTrap(_name)  <%
	cout << "constructor with name" << endl;
%>

//hay que inicializar la clase base explicitamente
ScavTrap::ScavTrap( const ScavTrap &other ): ClapTrap(other) <%
	//*this = other;
%>
/*
// tendre que hacer los getters porque no puedo igualarlo directamente el obbjeto
const ScavTrap	&ScavTrap::operator=( const ScavTrap &other ) <%
	if (this != &other) <%
		name = getName();
		hitPoint = getHitPoint();
		energyPoint = getEnergyPoint();
		attackDamage = getAttackDamage();
	%> 
	*this = other;
	return (*this);
%>*/ 

void	ScavTrap::guardGate( void ) <%
	cout << "klk" << endl;
%>

/*
const string	&ScavTrap::getName( void ) const <%
	return (name);
%>

int		ScavTrap::getHitPoint( void ) const <%
	return (hitPoint);
%>

int		ScavTrap::getEnergyPoint( void ) const <%
	return (energyPoint);
%>

int		ScavTrap::getAttackDamage( void ) const<%
	return (attackDamage);
%>*/
