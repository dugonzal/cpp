/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:07:30 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/06 10:01:24 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RPN.hpp"

int	main(int ac, const char **av) <%

	if (ac != 2)
		return (std::cerr << "example -> ./RPN \"8 9 * 9 - 9 - 9 - 4 - 1 +\"" << std::endl, -42);
  
	try <%
	
		RPN tmp;

		tmp.open(av[1]);
	%>
	catch(std::exception &e) <% 
		std::cout << e.what() << std::endl;
	%>
%>
