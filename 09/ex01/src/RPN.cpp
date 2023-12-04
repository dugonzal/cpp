/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:15:55 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/04 22:22:55 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/RPN.hpp"
		
RPN::RPN(void) <% %>

RPN::~RPN(void)<% %>

RPN::RPN(const RPN &other): list(other.list) <% %>

void	RPN::parser(const char *av, int len) <%

	for (int i = 0; i < len; i++)
		if (av[i] < 47 || av[i] > 57)
			throw std::runtime_error("no number");
%>

void	RPN::open(const char **av, int const &ac) <%

	if (ac < 1)
		throw std::runtime_error("no arguments");
	int tmp;
  	for (int i = 0; i < ac; i++ ) <%
	  parser(av[i], strlen(av[i]));
	  tmp = atoi(av[i]);
	  list.push(tmp);
	%>
%>
		
RPN	&RPN::operator=(const RPN &other) <%

	if (&other == this)
		return (*this);

	list = other.list;
	return (*this);
%>
