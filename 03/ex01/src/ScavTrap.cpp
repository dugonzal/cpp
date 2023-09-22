/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:21:21 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/22 14:20:56 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap( void ): name("bob"), hitPoint(100), energyPoint(50), attackDamage(20) <%
	cout << "constructor ScavTrap default" << endl;
%>

ScavTrap::~ScavTrap( void ) <%
  cout << "desctructor ScavTrap" << endl;
%>
ScavTrap::ScavTrap( string _name ) : hitPoint(100), energyPoint(50), attackDamage(20) <%
  cout << "constructor with name" << endl;
  if (_name.empty()) <%
	  _name = "default";
  %>
  name = _name;
%>

//hay que inicializar la clase base explicitamente
ScavTrap::ScavTrap( const ScavTrap &other ): ClapTrap(other) <%
		*this = other;
%>

// tendre que hacer los getters porque no puedo igualarlo directamente el obbjeto
const ScavTrap	&ScavTrap::operator=( const ScavTrap &other ) <%
	if (this != &other) <%
		name = getName();
		hitPoint = getHitPoint();
		energyPoint = getEnergyPoint();
		attackDamage = getAttackDamage();
	%>
	return (*this);
%> 


void	ScavTrap::guardGate( void ) <%

	cout << "klk" << endl;
%>


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
%>
