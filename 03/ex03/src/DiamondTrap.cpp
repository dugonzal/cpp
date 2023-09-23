/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:44:38 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/23 17:52:53 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/DiamondTrap.hpp"

// si o si tengo que pasarle un arreglo vacio
DiamondTrap::DiamondTrap( void ): FragTrap(""), ScavTrap("") <%
	cout << "constructor DiamondTrap" << endl;
	FragTrap::setHitPoint( FragTrap::getHitPoint() );
	ScavTrap::setHitPoint(ScavTrap::getHitPoint());
	FragTrap::setAttackDamage(FragTrap::getAttackDamage());
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
	FragTrap::setAttackDamage(FragTrap::getAttackDamage());
	*this = other;
%>

DiamondTrap::DiamondTrap( const string & n ): FragTrap(n + "_clap_name"), ScavTrap(n + "_clap_name"), name(n) <%
	cout << "constructor DiamondTrap with name" << endl;
	FragTrap::setHitPoint(FragTrap::getHitPoint());
	ScavTrap::setHitPoint(ScavTrap::getHitPoint());
	FragTrap::setAttackDamage(FragTrap::getAttackDamage());
	/*
	 llamando a la derivada, se establece en la derivada de la derivada es alucinante
	*/
	cout << FragTrap::getName() << endl;
%>

const DiamondTrap &DiamondTrap::operator=( const DiamondTrap &other )<%
	if (this != &other) <%
		FragTrap::operator=(other);
	%>
	return (*this);
%>


void DiamondTrap::attack(const std::string& target)<%
	  FragTrap::attack(target);
	  //no funciona ->ClavTrap::attack(target);
	  //ScavTrap::attack(target);
	  // ahora si funciona no entiendo nada
%>

//I am DiamondTrap <name>, and my ClapTrap name is <clap_name>.
void	DiamondTrap::whoAmi( void )<%
  cout << "I am DiamondTrap " << DiamondTrap::name << " and my ClapTrap name is " << FragTrap::getName() << endl;
%>
