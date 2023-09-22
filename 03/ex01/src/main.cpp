/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:14:36 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/22 14:09:58 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"


int	main(int, char const**, char const **) <%
	ScavTrap a("perro");
	ScavTrap c;
	ClapTrap b;

	a.attack("primer ataque con herencia");

	b = ClapTrap("");
	a = ScavTrap("hola ");
	cout << a.getName() <<  endl;
	cout << a.getHitPoint() << endl;
	sleep(1);
	a.guardGate();
	return (0);
%>
