/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:44:38 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/27 09:59:00 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/DiamondTrap.hpp"

// si o si tengo que pasarle un arreglo vacio
DiamondTrap::DiamondTrap( void ): FragTrap(""), ScavTrap("") <%
	cout << "constructor DiamondTrap" << endl;
	FragTrap::hitPoint =  FragTrap::hitPoint ;
	FragTrap::energyPoint = FragTrap::energyPoint;
	FragTrap::attackDamage = FragTrap::attackDamage;
%>

DiamondTrap::~DiamondTrap( void )<%
	cout << "Destructor DiamondTrap" << endl;
%>

DiamondTrap::DiamondTrap( const DiamondTrap &other ): ClapTrap(other), FragTrap(other), ScavTrap(other) <%
	cout << "constructor DiamondTrap with copy" << endl;
	FragTrap::hitPoint =  FragTrap::hitPoint ;
	FragTrap::energyPoint = FragTrap::energyPoint;
	FragTrap::attackDamage = FragTrap::attackDamage;
	*this = other;
%>

DiamondTrap::DiamondTrap( const string & n ): FragTrap(n + "_clap_name"), ScavTrap(n + "_clap_name"), name(n) <%
	cout << "constructor DiamondTrap with name" << endl;
	FragTrap::hitPoint =  FragTrap::hitPoint ;
	FragTrap::energyPoint = FragTrap::energyPoint;
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
  cout << "I am DiamondTrap " << DiamondTrap::name << " and my ClapTrap name is " << FragTrap::getName() << endl;
%>
