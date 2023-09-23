/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:44:38 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/23 10:55:34 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/DiamondTrap.hpp"

// si o si tengo que pasarle un arreglo vacio
DiamondTrap::DiamondTrap( void ): FragTrap(""), ScavTrap("") <%
	cout << "constructor DiamondTrap" << endl;
	FragTrap::setHitPoint( FragTrap::getHitPoint() );
	ScavTrap::setHitPoint(ScavTrap::getHitPoint());
	cout << FragTrap::getHitPoint() << endl;
	cout << ScavTrap::getEnergyPoint() << endl;
%>

DiamondTrap::~DiamondTrap( void )<%
	cout << "Destructor DiamondTrap" << endl;
%>

DiamondTrap::DiamondTrap( const DiamondTrap &other ): FragTrap(other), ScavTrap(other) <%
	cout << "constructor DiamondTrap with copy" << endl;
	FragTrap::setHitPoint(FragTrap::getHitPoint());
	ScavTrap::setHitPoint(ScavTrap::getEnergyPoint());
	*this = other;
%>

DiamondTrap::DiamondTrap( const string & n ): FragTrap(n + "_clap_name"), ScavTrap(n + "_clap_name"), _name(n + "_clap_name") <%
	cout << "constructor DiamondTrap with name" << endl;
	FragTrap::setHitPoint(FragTrap::getHitPoint());
	ScavTrap::setHitPoint(ScavTrap::getHitPoint());
	/*
	 llamando a la derivada, se establece en la derivada de la derivada es alucinante
	*/
%>

const DiamondTrap &DiamondTrap::operator=( const DiamondTrap &other )<%
	if (this != &other) <%
		FragTrap::operator=(other);
	%>
	return (*this);
%>
