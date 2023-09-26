/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:36:02 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/26 14:55:38 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap("") <%
	cout << "constructor FragTrap" << endl;

	hitPoint = 100;
	energyPoint = 100;
	attackDamage = 30;
%>

FragTrap::~FragTrap( void ) <%
	cout << "destuctor FragTrap" << endl;
%>

FragTrap::FragTrap( const string &_name ): ClapTrap(_name)<%
	cout << "constructor with name" << endl;
	hitPoint = 100;
	energyPoint = 100;
	attackDamage = 30;
%>

FragTrap::FragTrap( const FragTrap &other ): ClapTrap(other) <%
	hitPoint = 100;
	energyPoint = 100;
	attackDamage = 30;
	*this = other;
%>
	  
const FragTrap &FragTrap::operator=( const FragTrap &other )<%
	if (this != &other) <%
		ClapTrap::operator=(other);
	%>
	return (*this);
%>

void FragTrap::highFivesGuys(void)<%
	cout << "request a high five from everyone!" << endl;
%>
