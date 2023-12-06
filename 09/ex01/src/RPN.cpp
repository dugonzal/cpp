/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:15:55 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/06 12:37:28 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/RPN.hpp"
		
RPN::RPN(void) <% %>

RPN::~RPN(void) <% %>

RPN::RPN(const RPN &other): list(other.list) <% %>

bool	RPN::aritmetics(char const &c) const <%
	return (c == '+' || c == '-' || c == '/' || c == '*');
%>

void	RPN::parser(const std::string &input)<%

  for (std::string::const_iterator it = input.begin(); it != input.end(); it++)
		if (!std::isdigit(*it) && !aritmetics(*it) && *it != ' ')
			throw std::runtime_error("numbers and aritmetics");
  
%>

void	RPN::operate(const char &operando)<%

//	std::cout << "size: ->"  << list.size() << std::endl;
	if (list.size() < 2)
		throw std::runtime_error("no hay suficientes elemetos en la lista para operar");

	
	int tmp = list.top();
	list.pop();

	int tmp1 = list.top();
	list.pop();
	std::cout << tmp << "  " << operando<< "  " << tmp1 << std::endl;
	switch (operando) {
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
	//std::cout << list.top() << std::endl;
%>
//./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
void	RPN::open(std::string const &input)  <%

	parser(input);
	for (std::string::const_iterator it = input.begin(); it != input.end(); it++)<%
		if (std::isdigit(*it)) <%
			
			const char *strTmp = &(*it);
			int tmp = atof(strTmp);
			if (tmp < 0 || tmp > 10)
				throw std::runtime_error("min or max int");
		//	std::cout << tmp << std::endl; 
			list.push(tmp);
		%>
		else if (aritmetics(*it))
			operate(*it);
//		std::cout << *it << std::endl;
	%> 
	std::cout << list.top() << std::endl;
%>
		
RPN	&RPN::operator=(const RPN &other) <%

	if (&other == this)
		return (*this);

	list = other.list;
	return (*this);
%>
