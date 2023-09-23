/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:44:38 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/23 10:46:21 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/DiamondTrap.hpp"

// si o si tengo que pasarle un arreglo vacio
DiamondTrap::DiamondTrap( void ): FragTrap(""), ScavTrap("") <%
	cout << "constructor DiamondTrap" << endl;
	FragTrap::setHitPoint(FragTrap::getHitPoint());
	cout << FragTrap::getHitPoint() << endl;
%>

DiamondTrap::~DiamondTrap( void )<%
	cout << "Destructor DiamondTrap" << endl;
%>

DiamondTrap::DiamondTrap( const DiamondTrap &other ): FragTrap(other), ScavTrap(other) <%
	cout << "constructor DiamondTrap with copy" << endl;
	FragTrap::setHitPoint(FragTrap::getHitPoint());
	*this = other;
%>

DiamondTrap::DiamondTrap( const string & n ): FragTrap(n + "_clap_name"), ScavTrap(n + "_clap_name"), _name(n + "_clap_name") <%
	cout << "constructor DiamondTrap with name" << endl;
	FragTrap::setHitPoint(FragTrap::getHitPoint());
%>

const DiamondTrap &DiamondTrap::operator=( const DiamondTrap &other )<%
	if (this != &other) <%
		FragTrap::operator=(other);
	%>
	return (*this);
%>
