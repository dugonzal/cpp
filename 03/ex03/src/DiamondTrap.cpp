/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:44:38 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/22 22:11:08 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/DiamondTrap.hpp"

// si o si tengo que pasarle un arreglo vacio
DiamondTrap::DiamondTrap( void ): FragTrap(""), ScavTrap("") <%
	cout << "constructor DiamondTrap" << endl;
%>

DiamondTrap::~DiamondTrap( void )<%
	cout << "Destructor DiamondTrap" << endl;
%>
DiamondTrap::DiamondTrap( const DiamondTrap &other ): FragTrap(other), ScavTrap(other) <%
	cout << "constructor DiamondTrap with copy" << endl;
	*this = other;
%>

DiamondTrap::DiamondTrap( const string & n ): FragTrap(n), ScavTrap(n) <%
	cout << "constructor DiamondTrap with name" << endl;
	_name = n + "_clap_name";
%>

const DiamondTrap &DiamondTrap::operator=( const DiamondTrap &other )<%
	if (this != &other) <%
		FragTrap::operator=(other);
	%>
	return (*this);
%>
