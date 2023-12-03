/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 22:57:08 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/03 12:32:00 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/BitcoinExchange.hpp" 

int	main(int ac, const char **av) <%

	if (ac != 2) <%
		std::cerr << "Error [^´^]" << std::endl;
		return (-42);
	%>
	try <%
		BitcoinExchange p;
		BitcoinExchange tm(p);

		BitcoinExchange tmp;

		tmp = tm;
	 
		(void)av;
	%>
	catch(std::exception &e) <%
		std::cerr << e.what() << std::endl;
	%>

/*	
	std::ifstream file(av[1]);

	if (!file.is_open()) <%
		std::cerr << "error file no open " << std::endl;
		return (0);
	%>

	std::string line;

	while (std::getline(file, line)) <%
		std::cout << line << std::endl;
	%>
	
	file.close();
*/	return (0);
%>
