/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:52:49 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/27 18:33:45 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Span.hpp"

template <class T>
Span<T>::Span(void): n(0), array(array.reserve(0)) <% %>

template <class T>
Span<T>::Span(unsigned int _n): n(_n), array(array.reserve(_n)) <% %>
	  
template <class T>
Span<T>::~Span(void) <% %>

template <class T>
Span<T>::Span(const Span<T> &other): n(other.n) <% %>
	 
template <class T>
Span<T> &Span<T>::operator=(const Span<T> &other) <% 
	
	if (this == &other)
		return (*this);
	array = other.array;
	n = other.n;
	return (*this);
%>
	
template <class T>
void	Span<T>::addNumber(unsigned int o) const<%
	if (array.size() == n)
		  throw (std::runtime_error("out range, bye"));
	array.push_back(o); 
%>	

/*
template <class T>
void	Span<T>::addNumber(const T &other) <%
	
	for(class T::iterator it = other.begin(); it != other.end(); it++) <%
		  if (array.size() == n)
			  throw (std::runtime_error("out range, bye"));
			addNumber(*it);
	%>
%>

*/ 
template <class T>
void	Span<T>::show(void) <%

	for (class std::vector<T>::iterator it = array.begin(); it != array.end(); it++)
		std::cout << *it << std::endl;
%>
