/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:15:55 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/06 10:18:44 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/RPN.hpp"
		
RPN::RPN(void) <% %>

RPN::~RPN(void)<% %>

RPN::RPN(const RPN &other): list(other.list) <% %>

bool	RPN::aritmetics(char const &c) const <%
	return (c == '+' || c == '-' || c == '/' || c == '*');
%>

void	RPN::parser(const std::string &input)<%

  for (std::string::const_iterator it = input.begin(); it != input.end(); it++)
		if (!std::isdigit(*it) && !aritmetics(*it) && *it != ' ')
			throw std::runtime_error("numbers and aritmetics");
  
  for (std::string::const_iterator it = input.begin(); it != input.end(); it++)
		if (std::isdigit(*it)) <%
			const char *strTmp = &(*it);
			int tmp = atoi(strTmp);
			if (tmp < 0 || tmp > 10)
				throw std::runtime_error("min or max int");
			list.push(tmp);
		%>
  if (list.size() < 2)
	throw std::runtime_error("no hay sufientes numeros en el stack para operar");
%>

//./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
void	RPN::open(std::string const &input)  <%
	parser(input);

	while (!list.empty()) <%
	  std::cout << list.top() << std::endl;
	  list.pop();
	%>
%>
		
RPN	&RPN::operator=(const RPN &other) <%

	if (&other == this)
		return (*this);

	list = other.list;
	return (*this);
%>
