/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:15:55 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/05 11:33:48 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/RPN.hpp"
		
RPN::RPN(void) <% %>

RPN::~RPN(void)<% %>

RPN::RPN(const RPN &other): list(other.list) <% %>

bool	RPN::aritmetics(char const &c) const <%
	return (c == '+' || c == '-' || c == '/' || c == '*');
%>

void	RPN::parser(const char *av, int len) const<%
	for (int j = 0; j < len; j++)
		if ((!std::isdigit(av[j])) && !aritmetics(av[j]))
			throw std::runtime_error("numbers and aritmetics"); 
%>

//./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
void	RPN::open(const char **av, int const &ac) <%

	if (ac < 3)
		throw std::runtime_error("no arguments");
	
	int i = -1;
  	while (++i < ac)<%

	  parser(av[i], strlen(av[i]));
	
	  int tmp = atoi(av[i]);
	  if (tmp < 0 || tmp > 10)
		  throw std::runtime_error("min or max int");
	
	  if (!aritmetics(av[i][0]))
		list.push(tmp);
	%>

	if (!aritmetics(av[i - 1][0]))
	  throw std::runtime_error("no operator");
	int top = list.top();
	std::cout << top << std::endl;
%>
		
RPN	&RPN::operator=(const RPN &other) <%

	if (&other == this)
		return (*this);

	list = other.list;
	return (*this);
%>
