/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:15:55 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/06 17:08:08 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/RPN.hpp"
		
RPN::RPN(void) <% %>

RPN::~RPN(void) <% %>

RPN::RPN(const RPN &other): list(other.list) <% %>

RPN	&RPN::operator=(const RPN &other) <%

	if (&other == this)
		return (*this);

	list = other.list;
	return (*this);
%>

bool	RPN::aritmetics(char const &c) const <%
	return (c == '+' || c == '-' || c == '/' || c == '*');
%>

void	RPN::parser(const std::string &input) <%

	for (std::string::const_iterator it = input.begin(); it != input.end(); it++)
		if (!std::isdigit(*it) && !aritmetics(*it) && *it != ' ')
			throw std::runtime_error("Error");
%>

void	RPN::operate(const char &operando) <%

	if (list.size() < 2)
		throw std::runtime_error("Error");
	
	int tmp = list.top();
	list.pop();

	int tmp1 = list.top();
	list.pop();
	
	switch (operando) <% 
		case('+'): <%
			list.push(tmp1 + tmp);
			break;
		%>
		case('-'): <%
			list.push(tmp1 - tmp);
			break;
		%>
		case('/'): <%
			list.push(tmp1 / tmp);
			break;
		%>
		case('*'): <%
			list.push(tmp1 * tmp);
			break;
		%>
	%>
%>

void	RPN::open(const std::string &input) <%

	parser(input);
	for (std::string::const_iterator it = input.begin(); it != input.end(); it++)<%
		if (std::isdigit(*it)) <%
			
			const char *strTmp = &(*it);
			int tmp = atof(strTmp);
			
			if (tmp > 9)
				throw std::runtime_error("Error");
			list.push(tmp);
		%>
		else if (aritmetics(*it))
			operate(*it);
	%>
	if (list.size() == 1)
		std::cout << list.top() << std::endl;
	else
		throw std::runtime_error("Error");
%>
