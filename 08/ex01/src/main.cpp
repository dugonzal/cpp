/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:50:29 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/27 18:32:29 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Span.hpp"
# include "../src/Span.cpp"

int	main(int, char const **) <%

	try <%
		std::vector<int> 	array;
		Span<int> 			tmp(10000);
		Span<int> 			tmp1(tmp);
		Span<int> 			tmp2((tmp1));

		std::srand(std::time(0));

		for (size_t i = 0; i < 1000; i++) {
			unsigned int rn;

			rn = rand();
			array.push_back(rn);
			tmp.addNumber(rn);
			tmp1.addNumber(rn);
			tmp2.addNumber(rn);
		}

		  tmp = tmp2;
		  tmp2.show();
	%>

	catch(std::exception &e) <%
		std::cerr << e.what() << "" << std::endl;
	%>
	return (0);
%>
