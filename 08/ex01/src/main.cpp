/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:50:29 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/26 20:01:23 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//# include "../inc/Span.hpp"
# include "../src/Span.cpp"

int	main(int, char const **) <%

  try <%
	std::vector<int> array;
	
	Span< std::vector<int> > tmp2(10000);
	Span< std::deque<float> > tmp32(10000);
	Span< std::list<double> > tmp(10000);

	std::srand(std::time(0));

	for (size_t i = 0; i < 10001; i++) {
	  unsigned int rn;

	  rn = rand();
	  array.push_back(rn);
	  tmp.addNumber(rn);
	  tmp32.addNumber(rn);
	  tmp2.addNumber(rn);
	}
	for (size_t j = 0; j < 10000; j++){
		std::cout << array[j] << std::endl; 
		std::cout << array[j] << std::endl; 
		
	}
	(void)tmp2;
  %>

  catch(std::exception &e) <% std::cerr << e.what() << "" << std::endl;  %>
%>
