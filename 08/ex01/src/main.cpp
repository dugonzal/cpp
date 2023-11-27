/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:50:29 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/27 23:18:44 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Span.hpp"

int	main(int, char const **) <%

	try <%
		std::vector<int> 			array;
		Span 	tmp(10000);
		Span 	tmp1(10000);
		Span 	sp(10000);
	
		std::srand(std::time(0));
		unsigned int rn;
		for (size_t i = 0; i < 10000; i++) {

			rn = rand() ;
			array.push_back(rn);
			tmp.addNumber(rn);
			tmp1.addNumber(rn);
		}
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << tmp.shortestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << tmp1.shortestSpan() << std::endl;
		
		std::cout << std::endl << tmp.longestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << tmp1.longestSpan() << std::endl;
	
	%>

	catch(std::exception &e) <%
		std::cerr << e.what() << "" << std::endl;
	%>
	return (0);
%>
