/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:36:02 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/22 19:12:27 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap(NULL) <%
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
		setName(other.getName());
		setHitPoint(other.getHitPoint());
		setEnergyPoint(other.getEnergyPoint());
		setAttackDamage(other.getAttackDamage());
	%>
	return (*this);
%>

void FragTrap::highFivesGuys(void)<%

	cout << "FragTrap massage" << endl;
%>
