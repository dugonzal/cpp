/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:36:02 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/22 17:48:59 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap(NULL) <%
	cout << "constructor FragTrap" << endl;
%>


FragTrap::~FragTrap( void ) <%
	cout << "destuctor FragTrap" << endl;
%>

FragTrap::FragTrap( const string &_name ): ClapTrap(_name)<%
	cout << "constructor with name" << endl;
%>

FragTrap::FragTrap( const FragTrap &other ): ClapTrap(other) <%
	*this = other;
%>
	  
/*const FragTrap &FragTrap::operator=( const FragTrap &other )<%


%>*/
