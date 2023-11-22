/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:24:11 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/22 18:01:14 by Dugonzal         ###   ########.fr       */
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
		unsigned int	size;
  
	public:
	  Array(void): element(NULL), size(0) <% %>
	  
	  ~Array(void) <%
		  if (element != NULL)
			  delete [] element;
	  %>
	  Array(const Array &other): element(new T[other.size]), size(other.size) <%
		  if (&other == this)
			  return;
		  *this = other;
	  %>
	  Array &operator=(const Array& other) {
        if (&other == this)
            return *this;

        delete [] element;
		element = NULL;
        size = other.size;
        element = new T[size];
        for (unsigned int i = 0; i < size; i++)
            element[i] = other.element[i];
        return (*this);
    }
	  T &operator[](size_t p) <% 
		  if (p > size || !element[p])
			  throw std::runtime_error("out of range");
		  return (element[p]);
	  %>
	  Array(unsigned int s): element(new T[s]), size(s) <% %>
%>;
