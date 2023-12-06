/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:17:27 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/06 19:18:52 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/PmergeMe.hpp"

int	main(int ac, const char **av) <%

	if (ac < 2)
	  return (std::cerr << "error inpurt" << std::endl, -42);
	
	try <%
		  PmergeMe		tmp(++av);

		  (void)av;
	%>
	catch (const std::exception &e) <%
		std::cerr << e.what() << std::endl;
	%>
	return (0);
%>