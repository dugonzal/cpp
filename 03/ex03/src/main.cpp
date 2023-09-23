/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:14:36 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/23 21:34:06 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/DiamondTrap.hpp"

int		main(int, char const**, char const **) <%
	DiamondTrap a("hola");

	a.attack("");
	cout << a.FragTrap::getName() << endl;
	a.ScavTrap::setName("");
	cout << a.FragTrap::getName() << endl;
	a.whoAmi();
	return (0);
%>
