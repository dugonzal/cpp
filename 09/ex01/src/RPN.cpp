/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:15:55 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/05 09:58:39 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/RPN.hpp"
		
RPN::RPN(void) <% %>

RPN::~RPN(void)<% %>

RPN::RPN(const RPN &other): list(other.list) <% %>
//av[i][j] != '+' && av[i][j] != '-' && av[i][j] != '/' && av[i][j] != '*'


bool	RPN::aritmetics(char const &c) const <%
	return (c != '+' && c != '-' && c != '/' && c != '*');
%>

void	RPN::open(const char **av, int const &ac) <%

	if (ac < 1)
		throw std::runtime_error("no arguments");
	
	int tmp;
  	for (int i = 0; i < ac; i++ ) <%
	
	  int t = strlen(av[i]);
	  for (int j = 0; j < t; j++)
		  if ((!std::isdigit(av[i][j])) && aritmetics(av[i][j]))
			  throw std::runtime_error("no number"); 
	  tmp = atoi(av[i]);
	  if (tmp < 0 || tmp > INT_MAX)
		  throw std::runtime_error("min or max int");
	  
	  std::cout <<  av[i] << std::endl;
	  list.push(tmp);
	%>
%>
		
RPN	&RPN::operator=(const RPN &other) <%

	if (&other == this)
		return (*this);

	list = other.list;
	return (*this);
%>
