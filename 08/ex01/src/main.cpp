/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:50:29 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/27 22:45:23 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Span.hpp"
# include "../src/Span.cpp"

int	main(int, char const **) <%

	try <%
		std::vector<int> 			array;
		Span< std::vector<int> > 	tmp(10000);
		Span< std::vector<int> > 	tmp1(tmp);
		Span< std::vector<int> > 	tmp2((tmp1));

		std::srand(std::time(0));
/*
		for (size_t i = 0; i < 10000; i++) {
			unsigned int rn;

			rn = rand() % 1000;
			std::cout << rn << std::endl;
			array.push_back(rn);
			tmp.addNumber(rn);
			tmp1.addNumber(rn);
			tmp2.addNumber(rn);
		}

		tp.addNumber(array);
		//tp.show();*/ 
		Span< std::vector<int> > sp(10000);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	%>

	catch(std::exception &e) <%
		std::cerr << e.what() << "" << std::endl;
	%>
	return (0);
%>
