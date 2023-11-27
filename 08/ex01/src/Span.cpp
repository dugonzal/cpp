/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:52:49 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/27 23:08:27 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Span.hpp"

template <class T>
Span<T>::Span(void): n(0) <% %>

template <class T>
Span<T>::Span(unsigned int _n): n(_n) <% %>
	  
template <class T>
Span<T>::~Span(void) <% %>

template <class T>
Span<T>::Span(const Span<T> &other): n(other.n) <%

	array.clear();
	array = other.array;
%>
	 
template <class T>
Span<T> &Span<T>::operator=(const Span<T> &other) <% 
	
	if (this == &other)
		return (*this);

	array.clear();
	array = other.array;
	n = other.n;
	
	return (*this);
%>
	
template <class T>
void	Span<T>::addNumber(unsigned int o) const<%
	
	if (array.size() == n)
		  throw (std::out_of_range("out of range, bye"));
	
	array.push_back(o);
%>	

template <class T>
void	Span<T>::addNumber(const T &other) const <%
	
	if ((array.size() + other.size()) > n)
		  throw (std::out_of_range("out of range, bye"));
	
	array.insert(array.begin(), other.begin(), other.end());
%>

template <class T>
void	Span<T>::show(void) const <%

	for (class T::iterator it = array.begin(); it != array.end(); it++)
		std::cout << *it << std::endl;

%>

template <class T>
unsigned int	Span<T>::shortestSpan(void) const <%
	
	if (array.size() < 2)
		throw std::out_of_range("size < 2");
	
	int min = std::numeric_limits<int>::max();
	for (class T::iterator it = array.begin() + 1; it != array.end(); it++)
		min = std::min( std::abs(*it - *(it - 1)) , min);
	
	return (min);
%>

template <class T>
unsigned int	Span<T>::longestSpan(void) const <%
	
	if (array.size() < 2)
		throw std::out_of_range("size < 2");
	
	int max = std::numeric_limits<int>::min();
	for (class T::iterator it = array.begin() + 1; it != array.end(); it++)
		max = std::max( std::abs(*it - *(it - 1)) , max);
	
	return (max);
%>
