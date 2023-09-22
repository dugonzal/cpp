/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:44:38 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/22 21:52:37 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/DiamondTrap.hpp"

// si o si tengo que pasarle un arreglo vacio
DiamondTrap::DiamondTrap( void ): FragTrap(), ScavTrap()<%
	cout << "constructor DiamondTrap" << endl;

%>

DiamondTrap::~DiamondTrap( void )<%
	cout << "Destructor DiamondTrap" << endl;
%>
//		DiamondTrap( const DiamondTrap &other );
//	const DiamondTrap &operator=( const DiamondTrap &other );
