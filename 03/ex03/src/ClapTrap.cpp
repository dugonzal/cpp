/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:30:11 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/22 21:58:46 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : name(NULL), hitPoint(10), energyPoint(10), attackDamage(0)  <%
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
	//ClapTrap <name> attacks <target>, causing <damage> points of damage!
	energyPoint--;	
	cout << "ClapTrap " << name << " attacks " << target << " points of damage " << attackDamage << endl;
	
%>

void ClapTrap::takeDamage(unsigned int amount) <%
	cout << amount << endl;
	energyPoint--;	
	hitPoint -= amount;
	cout << "ClapTrap " << name << " tackeDamage " << " points of damage " << attackDamage << endl;
	//ClapTrap <name> attacks <target>, causing <damage> points of damage!

%>

void ClapTrap::beRepaired(unsigned int amount) <%
  cout << amount << endl;
	energyPoint--;	
	hitPoint += amount;
	cout << "ClapTrap " << name << "  " << hitPoint << " beRepaired " << " points of damage " << attackDamage << endl;
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

void	ClapTrap::setName( const string &_name ) <%
	name = _name;
%>

void	ClapTrap::setHitPoint( int const hp ) <%
	  hitPoint = hp;
%>

void	ClapTrap::setEnergyPoint( int const ep ) <%
	  energyPoint = ep;
%>

void	ClapTrap::setAttackDamage( int const ad ) <%
	  attackDamage = ad;
%>
