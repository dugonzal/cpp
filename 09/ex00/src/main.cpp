/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 22:57:08 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/09 10:40:21 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/BitcoinExchange.hpp" 

/* create a program which outputs the value of a 
 certain amount of bitcoin on a certain date.*/

int	main(int ac, const char **av) <%

	if (ac != 2) <%
		std::cerr << "Error: could not open file." << std::endl;
		return (-42);
	%>
	try <%
		BitcoinExchange tmp;

		tmp.open(av[1]);
	%>
	catch(std::exception &e) <%
		std::cerr << e.what() << std::endl;
	%>
	return (0);
%>
