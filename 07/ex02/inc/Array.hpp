/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:24:11 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/20 14:01:40 by Dugonzal         ###   ########.fr       */
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
		T 			*elemento;
		std::size_t	size;
  
	public:
	  Array<T>(void);
	  
/*	  ~Array<T>(void)<%
		  if (elemento != NULL)
			  delete [] elemento;
	  %>
	  //Array(const Array &other);
	  Array<T> &operator[](std::size_t p) <% 
		  if (p > size)
			  throw std::runtime_error("fuera de rango");
		  return (elemento[p]);
	  %>
	  Array<T>(std::size_t s): elemento(new T[s]), size(s)<% 
		std::cout << s << "  "  << size <<  std::endl;
	  %>*/
%>;
