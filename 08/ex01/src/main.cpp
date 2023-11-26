/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:50:29 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/26 07:25:16 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//# include "../inc/Span.hpp"
# include "../src/Span.cpp"

int	main(int, char const **) <%

  try <%
	std::vector<int> array;
	
	Span< std::vector<int> > tmp2(5);
	Span< std::list<int> > tmp(5);

	std::srand(std::time(0));

	for (size_t i = 0; i < 20; i++)
	  array.push_back(rand());
	for (size_t j = 0; j < 20; j++)
		std::cout << array[j] << std::endl; 
	(void)tmp2;
  %>

  catch(std::exception &e) <% std::cerr << e.what() << "" << std::endl;  %>
%>
