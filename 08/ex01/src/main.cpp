/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:50:29 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/26 20:48:42 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Span.hpp"
# include "../src/Span.cpp"

int	main(int, char const **) <%

  try <%
	std::vector<int> array;
	Span< std::list<int> > tmp(10000);
	Span< std::list<int> > tmp1(tmp);
	Span< std::list<int> > tmp2(tmp1);

	tmp1 = tmp;
	std::srand(std::time(0));

	for (size_t i = 0; i < 10001; i++) {
	  unsigned int rn;

	  rn = rand();
	  array.push_back(rn);
	  tmp.addNumber(rn);
	  tmp1.addNumber(rn);
	  tmp2.addNumber(rn);
	}
  %>

  catch(std::exception &e) <% std::cerr << e.what() << "" << std::endl;  %>
%>
