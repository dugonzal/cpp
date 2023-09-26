/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:14:36 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/26 15:05:50 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"


int	main(int, char const**, char const **) <%
	ScavTrap a("perro");
	ClapTrap b("");
	ScavTrap tmp(ScavTrap("xd"));

	tmp.attack();
	cout << tmp.getName() << "  " << tmp.getHitPoint() << endl;
	return (0);
%>
