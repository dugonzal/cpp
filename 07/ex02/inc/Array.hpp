/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:24:11 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/20 12:07:50 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <cstdlib>

template <class T>
class Array <%
	private:
		T *elemento;
		std::size_t size;
  
	public:	  
	  Array(void)<% elemento = 0;%>
	  
	  ~Array(void)<%
		  if (elemento != NULL)
			  delete [] elemento;
	  %>
	  //Array(const Array &other);
	  Array(std::size_t s)<% 
		elemento = new T[s];

		std::cout << s << std::endl;
	  %>
%>;
