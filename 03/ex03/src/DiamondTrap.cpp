/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:44:38 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/10/02 12:25:21 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/DiamondTrap.hpp"

// si o si tengo que pasarle un arreglo vacio
DiamondTrap::DiamondTrap( void ): ClapTrap(""), FragTrap(""), ScavTrap("") <%
	cout << "constructor DiamondTrap" << endl;
	FragTrap::hitPoint =  FragTrap::hitPoint;
	FragTrap::energyPoint = ScavTrap::energyPoint;
	FragTrap::attackDamage = FragTrap::attackDamage;
%>

DiamondTrap::~DiamondTrap( void )<%
	cout << "Destructor DiamondTrap" << endl;
%>

DiamondTrap::DiamondTrap( const DiamondTrap &other ): ClapTrap(other), FragTrap(other), ScavTrap(other) <%
	cout << "constructor DiamondTrap with copy" << endl;
	FragTrap::hitPoint =  FragTrap::hitPoint;
	FragTrap::energyPoint = ScavTrap::energyPoint;
	FragTrap::attackDamage = FragTrap::attackDamage;
	*this = other;
%>

DiamondTrap::DiamondTrap( const string & n ): ClapTrap(n + "_clap_name"), FragTrap(n), ScavTrap(n), name(n)  <%
	cout << "constructor DiamondTrap with name" << endl;
	FragTrap::hitPoint =  FragTrap::hitPoint;
	FragTrap::energyPoint = ScavTrap::energyPoint;
	FragTrap::attackDamage = FragTrap::attackDamage;
%>

const DiamondTrap &DiamondTrap::operator=( const DiamondTrap &other )<%
	if (this != &other) <%
		FragTrap::operator=(other);
	%>
	return (*this);
%>

void DiamondTrap::attack(const std::string& target)<%
	  FragTrap::attack(target);
%>

//I am DiamondTrap <name>, and my ClapTrap name is <clap_name>.
void	DiamondTrap::whoAmi( void )<%
  cout << "I am DiamondTrap " << DiamondTrap::name << " and my ClapTrap name is " << ScavTrap::getName() << endl;
%>
