/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:44:38 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/22 22:03:18 by Dugonzal         ###   ########.fr       */
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
	*this = other;
%>

const DiamondTrap &DiamondTrap::operator=( const DiamondTrap &other )<%
	if (this != &other) <%
		ClapTrap::operator=(other);
	%>
	return (*this);
%>
