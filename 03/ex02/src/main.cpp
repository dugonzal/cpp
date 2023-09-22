/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:14:36 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/22 17:51:49 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"


int	main(int, char const**, char const **) <%
	ScavTrap a("perro");
	ClapTrap b("");
	ScavTrap tmp(ScavTrap("xd"));
	FragTrap aa("");

	cout << aa.getName() << endl;
	cout << tmp.getName() << "  " << tmp.getHitPoint() << endl;
	return (0);
%>
