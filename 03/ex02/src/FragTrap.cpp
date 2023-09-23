/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:36:02 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/23 12:27:24 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap("") <%
	cout << "constructor FragTrap" << endl;
	setHitPoint(100);
	setEnergyPoint(100);
	setAttackDamage(30);
%>

FragTrap::~FragTrap( void ) <%
	cout << "destuctor FragTrap" << endl;
%>

FragTrap::FragTrap( const string &_name ): ClapTrap(_name)<%
	cout << "constructor with name" << endl;
	setHitPoint(100);
	setEnergyPoint(100);
	setAttackDamage(30);
%>

FragTrap::FragTrap( const FragTrap &other ): ClapTrap(other) <%
	setHitPoint(100);
	setEnergyPoint(100);
	setAttackDamage(30);
	*this = other;
%>
	  
const FragTrap &FragTrap::operator=( const FragTrap &other )<%
	if (this != &other) <%
		ClapTrap::operator=(other);
	%>
	return (*this);
%>

void FragTrap::highFivesGuys(void)<%
	cout << "high fives request" << endl;
%>
