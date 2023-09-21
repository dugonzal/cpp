/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:30:11 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/21 02:30:42 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : name("bob -> (.*.)"), hitPoint(10), energyPoint(10), attackDamage(0)  <%
	std::cout << "constructor default" << std::endl;

%>

ClapTrap::~ClapTrap( void ) <%
	std::cout << "destructor default" << std::endl;
%>

ClapTrap::ClapTrap( std::string _name ) : name("bob -> (.*."), hitPoint(10), energyPoint(10), attackDamage(0) <%
	std::cout << "constructor with name" << std::endl;
	name = _name;
%>

ClapTrap::ClapTrap( const ClapTrap &other ) <%
	std::cout << "constructor copy" << std::endl;
	if (this != &other) <%
		*this = other;
	%>
%>

const ClapTrap &ClapTrap::operator=(const ClapTrap &other) <%
	if (this != &other) <%
		*this = other;
	%>
	return (*this);
%>

void ClapTrap::attack(const string &target) <%
	if (energyPoint < 1 or hitPoint < 1) <%
		cout << "tu energyPoint o hitPoint son < a 1" << endl;
		return ;
	%>
	//ClapTrap <name> attacks <target>, causing <damage> points of damage!
	cout << "ClapTrap " << name << " attacks " << target << " points of damage " << attackDamage << endl;
	energyPoint--;	
	  
	// creo que tengoo que dismunir  no lo termino de entender
	cout << energyPoint << endl;
	
%>

void ClapTrap::takeDamage(unsigned int amount) <%
	cout << amount << endl;
	energyPoint--;	
	hitPoint -= amount;
	cout << "ClapTrap " << name << " attacks " << " points of damage " << attackDamage << endl;
	//ClapTrap <name> attacks <target>, causing <damage> points of damage!

	cout << hitPoint << endl;
	cout << hitPoint << endl;
	cout << hitPoint << endl;
	cout << hitPoint << endl;
	cout << hitPoint << endl;
	cout << hitPoint << endl;
	cout << hitPoint << endl;
%>


void ClapTrap::beRepaired(unsigned int amount) <%
  cout << amount << endl;
	energyPoint--;	
	hitPoint += amount;
	cout << "ClapTrap " << name << hitPoint <<" attacks " << " points of damage " << attackDamage << endl;
	cout << hitPoint << endl;
	cout << hitPoint << endl;
	cout << hitPoint << endl;
%>
