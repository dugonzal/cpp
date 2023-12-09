/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:17:27 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/09 10:31:45 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/PmergeMe.hpp"

int	main(int ac, const char **av) <%

	if (ac < 2) <%
	  std::cout << "example use: -> ./PmergeMe 3 2 1" << std::endl;
	  return (std::cerr << "error input" << std::endl, -42);
	%>
	try <%

		PmergeMe		tmp(++av);

		tmp.print();
	%>
	catch (const std::exception &e) <%
		std::cerr << e.what() << std::endl;
	%>
	return (0);
%>
