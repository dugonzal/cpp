/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:14:36 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/21 02:32:02 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int	main(int, char const**, char const **) <%
	ClapTrap a("bob");
	ClapTrap b("antonio");
	ClapTrap c;



	a.attack("el mejor ataque del mundo xd");

	a.takeDamage(1);
	a.beRepaired(100 + 1);
	return (0);
%>
