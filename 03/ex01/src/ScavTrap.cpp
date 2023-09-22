/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:21:21 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/22 12:56:33 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap( void ): name("bob"), hitPoints(100), energyPoints(50), attackDamage(20) <%
	cout << "constructor ScavTrap default" << endl;
%>

ScavTrap::~ScavTrap( void ) <%
  cout << "desctructor ScavTrap" << endl;
%>
ScavTrap::ScavTrap( string _name ) : hitPoints(100), energyPoints(50), attackDamage(20) <%
  cout << "constructor with name" << endl;
  if (_name.empty()) <%
	  _name = "default";
  %>
  name = _name;
%>

// tendre que hacer los getters porque no puedo igualarlo directamente el obbjeto
const ScavTrap	&ScavTrap::operator=( const ScavTrap &other ) <%
	if (this != &other) <%
		*this = other;
		return (*this);
	%>
	return (*this);
%> 


void	ScavTrap::guardGate( void ) <%

	cout << "klk" << endl;
%>
/*
ScavTrap::ScavTrap( const ScavTrap &other ) <%
		*this = other;
%>*/
