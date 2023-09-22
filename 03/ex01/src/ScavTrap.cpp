/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:21:21 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/22 15:16:43 by Dugonzal         ###   ########.fr       */
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
	cout << "constructor with name" << endl;
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
%>

//hay que inicializar la clase base explicitamente
ScavTrap::ScavTrap( const ScavTrap &other ): ClapTrap(other) <%
	*this = other;
%>
// tendre que hacer los getters porque no puedo igualarlo directamente el obbjeto

const ScavTrap	&ScavTrap::operator=( const ScavTrap &other ) <%
	if (this != &other) <%
		string a = getName();
		setName(a);
		/*setHitPoint(other.getHitPoint());
		setEnergyPoint(other.getEnergyPoint());
		setAttackDamage(other.getAttackDamage());
		*/return (*this);
	%> 
	return (*this);
%>

void	ScavTrap::guardGate( void ) <%
	cout << "klk" << endl;
%>
