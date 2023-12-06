/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:52:49 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/28 10:34:17 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Span.hpp"

Span::Span(void): n(0) <% array.reserve(0); %>

Span::Span(unsigned int _n): n(_n) <% array.reserve(n); %>
	  
Span::~Span(void) <% %>

Span::Span(const Span &other): n(other.n) <%

	array.clear();
	array = other.array;
%>
	 
Span &Span::operator=(const Span &other) <% 
	
	if (this == &other)
		return (*this);

	array.clear();
	array = other.array;
	n = other.n;
	
	return (*this);
%>
	
void	Span::addNumber(unsigned int o) const<%
	
	if (array.size() == n)
		  throw (std::out_of_range("out of range, bye"));
	
	array.push_back(o);
%>	

void	Span::addNumber(const std::vector<int> &other) const <%
	
	if ((array.size() + other.size()) > n)
		  throw (std::out_of_range("out of range, bye"));
	
	array.insert(array.begin(), other.begin(), other.end());
%>

unsigned int	Span::shortestSpan(void) const <%
	
	if (array.size() < 2)
		throw std::out_of_range("size < 2");
	
	int min = std::numeric_limits<int>::max();
	for (std::vector<int>::iterator it = array.begin() + 1; it != array.end(); it++)
		min = std::min( std::abs(*it - *(it - 1)) , min);
	
	return (min);
%>

unsigned int	Span::longestSpan(void) const <%
	
	if (array.size() < 2)
		throw std::out_of_range("size < 2");
	
	int max = std::numeric_limits<int>::min();
	for (std::vector<int>::iterator it = array.begin() + 1; it != array.end(); it++)
		max = std::max( std::abs(*it - *(it - 1)) , max);
	
	return (max);
%>
