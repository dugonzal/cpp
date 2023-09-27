/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:30:11 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/27 09:55:27 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : name("default"), hitPoint(10), energyPoint(10), attackDamage(0)  <%
	std::cout << "constructor default ClapTrap" << std::endl;
%>

ClapTrap::~ClapTrap( void ) <%
	std::cout << "destructor ClapTrap" << std::endl;
%>

ClapTrap::ClapTrap( std::string _name ) : hitPoint(10), energyPoint(10), attackDamage(0) <%
	std::cout << "constructor with name ClapTrap" << std::endl;
	if (_name.empty()) <%
		_name = "default";
	%>
	name = _name;
%>

ClapTrap::ClapTrap( const ClapTrap &other ) <%
	std::cout << "constructor copy ClapTrap" << std::endl;
	*this = other;
%>

const ClapTrap &ClapTrap::operator=(const ClapTrap &other) <%
	if (this != &other) <%
		name = other.getName();
		hitPoint = other.getHitPoint();
		energyPoint = other.getEnergyPoint();
		attackDamage = other.getAttackDamage();
	%>
	return (*this);
%>

void ClapTrap::attack(const string &target) <%
	if (energyPoint < 1 or hitPoint < 1) <%
		cout << "tu energyPoint o hitPoint son < a 1" << endl;
		return ;
	%>
	cout << "ClapTrap " << name << " attacks " << target << " points of damage " << attackDamage << endl;
	energyPoint--;	
%>

// ClapTrap <name> takes <damage> points of damage!
void ClapTrap::takeDamage(unsigned int amount) <%
	if (hitPoint > 0) <%
		hitPoint -= amount;
		cout << "ClapTrap " << name << " take Damage " << attackDamage << " points of damage " << endl;
	%>
	else 
		cout << name << "is dead" << endl;
	energyPoint--;

%>

// ClapTrap <name> is repaired for <health> points!
void ClapTrap::beRepaired(unsigned int amount) <%
	energyPoint--;	
	hitPoint += amount;
	cout << name << " is repaired for " << hitPoint << " points!" << endl;
%>

const string	&ClapTrap::getName( void ) const <%
   return (name);
%>

int		ClapTrap::getHitPoint( void ) const <%
	  return (hitPoint);
%>

int		ClapTrap::getEnergyPoint( void ) const <%
	  return (energyPoint);
%>

int		ClapTrap::getAttackDamage( void ) const <%
	  return (attackDamage);
%>
