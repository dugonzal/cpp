/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:24:11 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/23 11:21:18 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <cstdlib>
# include <exception>
# include <stdexcept>

template <class T>

class Array <%
	private:
		T 				*element;
		unsigned int	lenght;
  
	public:
		Array(void): element(new T[0]), lenght(0) <% %>
		Array(unsigned int s): element(new T[s]), lenght(s) <% %>
	  
		~Array(void) <%
			if (element != NULL)
				delete [] element;
		%>	

		Array(const Array &other): element(new T[other.lenght]), lenght(other.lenght) <%
			if (&other == this)
			    return;
			for (unsigned int i = 0; i < lenght; i++)
				element[i] = other.element[i];
		%>

		Array &operator=(const Array& other) <%
			if (&other == this)
				return (*this);
			delete [] element;
			element = NULL;
			lenght = other.lenght;
			element = new T[lenght];
			//for (unsigned int i = 0; i < size; i++)
			//	element[i] = other.element[i];
			*this = other;
			return (*this);
	  %>
	  T &operator[](size_t p) <% 
		  
		  if (p >= lenght)
			  throw std::runtime_error("out of range");
		  return (element[p]);
	  %>
	  unsigned int size(void) const <% return (lenght); %>
%>;
